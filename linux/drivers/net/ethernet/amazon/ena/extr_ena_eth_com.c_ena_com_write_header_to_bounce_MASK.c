
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct ena_com_llq_pkt_ctrl {int * curr_bounce_buf; } ;
struct ena_com_llq_info {scalar_t__ descs_num_before_header; scalar_t__ desc_list_entry_size; } ;
struct ena_com_io_sq {scalar_t__ mem_queue_type; scalar_t__ desc_entry_size; struct ena_com_llq_info llq_info; struct ena_com_llq_pkt_ctrl llq_buf_ctrl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *,scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct ena_com_io_sq *VAR_2,
       u8 *VAR_3,
       u16 VAR_4)
{
 struct ena_com_llq_pkt_ctrl *VAR_5 = &VAR_2->llq_buf_ctrl;
 struct ena_com_llq_info *VAR_6 = &VAR_2->llq_info;
 u8 *VAR_7 = VAR_5->curr_bounce_buf;
 u16 VAR_8;

 if (FUNC_2(VAR_2->mem_queue_type == VAR_1))
  return 0;

 VAR_8 =
  VAR_6->descs_num_before_header * VAR_2->desc_entry_size;

 if (FUNC_2((VAR_8 + VAR_4) >
       VAR_6->desc_list_entry_size)) {
  FUNC_1("trying to write header larger than llq entry can accommodate\n");
  return -VAR_0;
 }

 if (FUNC_2(!VAR_7)) {
  FUNC_1("bounce buffer is NULL\n");
  return -VAR_0;
 }

 FUNC_0(VAR_7 + VAR_8, VAR_3, VAR_4);

 return 0;
}
