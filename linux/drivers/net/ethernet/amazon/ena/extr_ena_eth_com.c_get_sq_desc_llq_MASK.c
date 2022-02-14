
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ena_com_llq_pkt_ctrl {int idx; int descs_left_in_line; int * curr_bounce_buf; } ;
struct ena_com_io_sq {int desc_entry_size; struct ena_com_llq_pkt_ctrl llq_buf_ctrl; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void *FUNC_2(struct ena_com_io_sq *VAR_0)
{
 struct ena_com_llq_pkt_ctrl *VAR_1 = &VAR_0->llq_buf_ctrl;
 u8 *VAR_2;
 void *VAR_3;

 VAR_2 = VAR_1->curr_bounce_buf;

 if (FUNC_1(!VAR_2)) {
  FUNC_0("bounce buffer is NULL\n");
  return ((void*)0);
 }

 VAR_3 = VAR_2 + VAR_1->idx * VAR_0->desc_entry_size;
 VAR_1->idx++;
 VAR_1->descs_left_in_line--;

 return VAR_3;
}
