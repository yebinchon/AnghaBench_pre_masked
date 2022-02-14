
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ena_com_llq_info {int desc_list_entry_size; } ;
struct TYPE_2__ {scalar_t__ pbuf_dev_addr; } ;
struct ena_com_io_sq {int tail; int q_depth; int phase; TYPE_1__ desc_addr; int entries_in_tx_burst_left; int qid; struct ena_com_llq_info llq_info; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int *,int) ;
 scalar_t__ FUNC_1 (struct ena_com_io_sq*) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct ena_com_io_sq *VAR_1,
           u8 *VAR_2)
{
 struct ena_com_llq_info *VAR_3 = &VAR_1->llq_info;

 u16 VAR_4;
 u32 VAR_5;

 VAR_4 = VAR_1->tail & (VAR_1->q_depth - 1);
 VAR_5 = VAR_4 * VAR_3->desc_list_entry_size;

 if (FUNC_1(VAR_1)) {
  if (FUNC_4(!VAR_1->entries_in_tx_burst_left)) {
   FUNC_3("Error: trying to send more packets than tx burst allows\n");
   return -VAR_0;
  }

  VAR_1->entries_in_tx_burst_left--;
  FUNC_2("decreasing entries_in_tx_burst_left of queue %d to %d\n",
    VAR_1->qid, VAR_1->entries_in_tx_burst_left);
 }




 FUNC_5();


 FUNC_0(VAR_1->desc_addr.pbuf_dev_addr + VAR_5,
    VAR_2, (VAR_3->desc_list_entry_size) / 8);

 VAR_1->tail++;


 if (FUNC_4((VAR_1->tail & (VAR_1->q_depth - 1)) == 0))
  VAR_1->phase ^= 1;

 return 0;
}
