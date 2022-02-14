
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_com_llq_pkt_ctrl {int descs_left_in_line; scalar_t__ idx; int curr_bounce_buf; } ;
struct ena_com_llq_info {int descs_num_before_header; int desc_list_entry_size; } ;
struct ena_com_io_sq {scalar_t__ mem_queue_type; struct ena_com_llq_pkt_ctrl llq_buf_ctrl; int bounce_buf_ctrl; struct ena_com_llq_info llq_info; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ena_com_io_sq*,int ) ;
 int FUNC_2 (int ,int,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ena_com_io_sq *VAR_1)
{
 struct ena_com_llq_pkt_ctrl *VAR_2 = &VAR_1->llq_buf_ctrl;
 struct ena_com_llq_info *VAR_3 = &VAR_1->llq_info;
 int VAR_4;

 if (FUNC_3(VAR_1->mem_queue_type == VAR_0))
  return 0;


 if (VAR_2->idx) {
  VAR_4 = FUNC_1(VAR_1,
       VAR_2->curr_bounce_buf);
  if (FUNC_3(VAR_4))
   return VAR_4;

  VAR_2->curr_bounce_buf =
   FUNC_0(&VAR_1->bounce_buf_ctrl);
  FUNC_2(VAR_1->llq_buf_ctrl.curr_bounce_buf,
         0x0, VAR_3->desc_list_entry_size);
 }

 VAR_2->idx = 0;
 VAR_2->descs_left_in_line = VAR_3->descs_num_before_header;
 return 0;
}
