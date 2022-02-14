
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct myrb_ldev_info {int dummy; } ;
struct myrb_hba {int stat_mbox_size; int cmd_mbox_size; int * first_cmd_mbox; int cmd_mbox_addr; TYPE_1__* pdev; int * first_stat_mbox; int stat_mbox_addr; int * enquiry; int enquiry_addr; int * err_table; int err_table_addr; int * ldev_info_buf; int ldev_info_addr; } ;
struct myrb_error_entry {int dummy; } ;
struct myrb_enquiry {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct myrb_hba *VAR_3)
{
 if (VAR_3->ldev_info_buf) {
  size_t VAR_4 = sizeof(struct myrb_ldev_info) *
   VAR_1;
  FUNC_0(&VAR_3->pdev->dev, VAR_4,
      VAR_3->ldev_info_buf, VAR_3->ldev_info_addr);
  VAR_3->ldev_info_buf = ((void*)0);
 }
 if (VAR_3->err_table) {
  size_t VAR_5 = sizeof(struct myrb_error_entry) *
   VAR_0 * VAR_2;
  FUNC_0(&VAR_3->pdev->dev, VAR_5,
      VAR_3->err_table, VAR_3->err_table_addr);
  VAR_3->err_table = ((void*)0);
 }
 if (VAR_3->enquiry) {
  FUNC_0(&VAR_3->pdev->dev, sizeof(struct myrb_enquiry),
      VAR_3->enquiry, VAR_3->enquiry_addr);
  VAR_3->enquiry = ((void*)0);
 }
 if (VAR_3->first_stat_mbox) {
  FUNC_0(&VAR_3->pdev->dev, VAR_3->stat_mbox_size,
      VAR_3->first_stat_mbox, VAR_3->stat_mbox_addr);
  VAR_3->first_stat_mbox = ((void*)0);
 }
 if (VAR_3->first_cmd_mbox) {
  FUNC_0(&VAR_3->pdev->dev, VAR_3->cmd_mbox_size,
      VAR_3->first_cmd_mbox, VAR_3->cmd_mbox_addr);
  VAR_3->first_cmd_mbox = ((void*)0);
 }
}
