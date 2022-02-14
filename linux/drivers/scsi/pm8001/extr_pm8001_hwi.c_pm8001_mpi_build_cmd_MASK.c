
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pm8001_hba_info {scalar_t__ iomb_size; } ;
struct mpi_msg_hdr {int dummy; } ;
struct inbound_queue_table {int consumer_index; int producer_idx; int pi_offset; int pi_pci_bar; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*,void*,scalar_t__) ;
 int FUNC_4 (struct pm8001_hba_info*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct inbound_queue_table*,scalar_t__,void**) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (void*,int ,int ) ;

int FUNC_8(struct pm8001_hba_info *VAR_1,
    struct inbound_queue_table *VAR_2,
    u32 VAR_3, void *VAR_4, u32 VAR_5)
{
 u32 VAR_6 = 0, VAR_7 = 0, VAR_8 = 1, VAR_9 = 0x02;
 void *VAR_10;

 if (FUNC_5(VAR_2, VAR_1->iomb_size,
  &VAR_10) < 0) {
  FUNC_1(VAR_1,
   FUNC_6("No free mpi buffer\n"));
  return -VAR_0;
 }
 FUNC_0(!VAR_4);

 FUNC_3(VAR_10, VAR_4, (VAR_1->iomb_size -
    sizeof(struct mpi_msg_hdr)));


 VAR_6 = ((1 << 31) | (VAR_7 << 30) | ((VAR_8 & 0x1f) << 24)
  | ((VAR_5 & 0x3F) << 16)
  | ((VAR_9 & 0xF) << 12) | (VAR_3 & 0xFFF));

 FUNC_7((VAR_10 - 4), 0, FUNC_2(VAR_6));

 FUNC_4(VAR_1, VAR_2->pi_pci_bar,
  VAR_2->pi_offset, VAR_2->producer_idx);
 FUNC_1(VAR_1,
  FUNC_6("INB Q %x OPCODE:%x , UPDATED PI=%d CI=%d\n",
   VAR_5, VAR_3, VAR_2->producer_idx,
   VAR_2->consumer_index));
 return 0;
}
