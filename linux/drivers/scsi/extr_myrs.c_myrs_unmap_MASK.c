
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct myrs_hba {int stat_mbox_size; int cmd_mbox_size; int * first_cmd_mbox; int cmd_mbox_addr; TYPE_1__* pdev; int * first_stat_mbox; int stat_mbox_addr; int * fwstat_buf; int fwstat_addr; int ctlr_info; int event_buf; } ;
struct myrs_fwstat {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct myrs_hba *VAR_0)
{
 FUNC_1(VAR_0->event_buf);
 FUNC_1(VAR_0->ctlr_info);
 if (VAR_0->fwstat_buf) {
  FUNC_0(&VAR_0->pdev->dev, sizeof(struct myrs_fwstat),
      VAR_0->fwstat_buf, VAR_0->fwstat_addr);
  VAR_0->fwstat_buf = ((void*)0);
 }
 if (VAR_0->first_stat_mbox) {
  FUNC_0(&VAR_0->pdev->dev, VAR_0->stat_mbox_size,
      VAR_0->first_stat_mbox, VAR_0->stat_mbox_addr);
  VAR_0->first_stat_mbox = ((void*)0);
 }
 if (VAR_0->first_cmd_mbox) {
  FUNC_0(&VAR_0->pdev->dev, VAR_0->cmd_mbox_size,
      VAR_0->first_cmd_mbox, VAR_0->cmd_mbox_addr);
  VAR_0->first_cmd_mbox = ((void*)0);
 }
}
