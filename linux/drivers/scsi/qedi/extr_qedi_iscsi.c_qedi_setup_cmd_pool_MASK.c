
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedi_ctx {TYPE_1__* pdev; } ;
struct qedi_cmd {int sense_buffer; int sense_buffer_dma; int hdr; } ;
struct iscsi_task {int hdr_max; int * hdr; struct qedi_cmd* dd_data; } ;
struct iscsi_session {int cmds_max; struct iscsi_task** cmds; } ;
struct iscsi_hdr {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int *,int ) ;
 scalar_t__ FUNC_1 (struct qedi_ctx*,struct iscsi_session*,struct qedi_cmd*) ;
 int FUNC_2 (struct qedi_ctx*,struct iscsi_session*) ;

__attribute__((used)) static int FUNC_3(struct qedi_ctx *VAR_3,
          struct iscsi_session *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->cmds_max; VAR_5++) {
  struct iscsi_task *VAR_6 = VAR_4->cmds[VAR_5];
  struct qedi_cmd *VAR_7 = VAR_6->dd_data;

  VAR_6->hdr = &VAR_7->hdr;
  VAR_6->hdr_max = sizeof(struct iscsi_hdr);

  if (FUNC_1(VAR_3, VAR_4, VAR_7))
   goto free_sgets;

  VAR_7->sense_buffer = FUNC_0(&VAR_3->pdev->dev,
             VAR_2,
             &VAR_7->sense_buffer_dma,
             VAR_1);
  if (!VAR_7->sense_buffer)
   goto free_sgets;
 }

 return 0;

free_sgets:
 FUNC_2(VAR_3, VAR_4);
 return -VAR_0;
}
