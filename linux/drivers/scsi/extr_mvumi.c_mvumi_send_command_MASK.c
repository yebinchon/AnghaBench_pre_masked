
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvumi_sgl {int dummy; } ;
struct mvumi_msg_frame {size_t tag; int sg_counts; scalar_t__ request_id; } ;
struct mvumi_hba {scalar_t__ fw_state; int hba_capability; struct mvumi_cmd** tag_cmd; int io_seq; int tag_pool; TYPE_1__* pdev; } ;
struct mvumi_dyn_list_entry {unsigned int if_length; void* src_high_addr; void* src_low_addr; } ;
struct mvumi_cmd {int frame_phys; struct mvumi_msg_frame* frame; scalar_t__ request_id; } ;
typedef enum mvumi_qc_result { ____Placeholder_mvumi_qc_result } mvumi_qc_result ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*,struct mvumi_msg_frame*,unsigned int) ;
 int FUNC_4 (struct mvumi_hba*,void**) ;
 size_t FUNC_5 (struct mvumi_hba*,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static enum mvumi_qc_result FUNC_9(struct mvumi_hba *VAR_4,
      struct mvumi_cmd *VAR_5)
{
 void *VAR_6;
 struct mvumi_msg_frame *VAR_7;
 unsigned int VAR_8;

 VAR_7 = VAR_5->frame;
 if (FUNC_7(VAR_4->fw_state != VAR_0)) {
  FUNC_1(&VAR_4->pdev->dev, "firmware not ready.\n");
  return VAR_2;
 }
 if (FUNC_6(&VAR_4->tag_pool)) {
  FUNC_1(&VAR_4->pdev->dev, "no free tag.\n");
  return VAR_2;
 }
 FUNC_4(VAR_4, &VAR_6);

 VAR_5->frame->tag = FUNC_5(VAR_4, &VAR_4->tag_pool);
 VAR_5->frame->request_id = VAR_4->io_seq++;
 VAR_5->request_id = VAR_5->frame->request_id;
 VAR_4->tag_cmd[VAR_5->frame->tag] = VAR_5;
 VAR_8 = sizeof(*VAR_7) - 4 +
    VAR_7->sg_counts * sizeof(struct mvumi_sgl);
 if (VAR_4->hba_capability & VAR_1) {
  struct mvumi_dyn_list_entry *VAR_9;
  VAR_9 = VAR_6;
  VAR_9->src_low_addr =
   FUNC_0(FUNC_2(VAR_5->frame_phys));
  VAR_9->src_high_addr =
   FUNC_0(FUNC_8(VAR_5->frame_phys));
  VAR_9->if_length = (VAR_8 >> 2) & 0xFFF;
 } else {
  FUNC_3(VAR_6, VAR_7, VAR_8);
 }
 return VAR_3;
}
