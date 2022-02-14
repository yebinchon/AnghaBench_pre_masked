
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct e1000_tx_ring {int count; int next_to_use; int next_to_clean; struct e1000_tx_buffer* buffer_info; scalar_t__ desc; } ;
struct e1000_tx_desc {int dummy; } ;
struct e1000_tx_buffer {int skb; scalar_t__ time_stamp; int next_to_watch; int length; scalar_t__ dma; } ;
struct e1000_rx_ring {int count; int next_to_use; int next_to_clean; struct e1000_rx_buffer* buffer_info; scalar_t__ desc; } ;
struct e1000_rx_desc {int dummy; } ;
struct TYPE_3__ {int data; } ;
struct e1000_rx_buffer {TYPE_1__ rxbuf; scalar_t__ dma; } ;
struct TYPE_4__ {scalar_t__ hw_addr; } ;
struct e1000_adapter {TYPE_2__ hw; struct e1000_rx_ring* rx_ring; struct e1000_tx_ring* tx_ring; } ;
typedef int __le64 ;


 struct e1000_rx_desc* FUNC_0 (struct e1000_rx_ring,int) ;
 struct e1000_tx_desc* FUNC_1 (struct e1000_tx_ring,int) ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct e1000_adapter*) ;
 int FUNC_5 (struct e1000_adapter*) ;
 int FUNC_6 (struct e1000_adapter*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct e1000_adapter *VAR_0)
{

 struct e1000_tx_ring *VAR_1 = VAR_0->tx_ring;
 struct e1000_rx_ring *VAR_2 = VAR_0->rx_ring;
 int VAR_3;

 if (!FUNC_4(VAR_0))
  return;


 FUNC_2(VAR_0);


 FUNC_7("TX Desc ring0 dump\n");
 FUNC_7("Tc[desc]     [Ce CoCsIpceCoS] [MssHlRSCm0Plen] [bi->dma       ] leng  ntw timestmp         bi->skb\n");
 FUNC_7("Td[desc]     [address 63:0  ] [VlaPoRSCm1Dlen] [bi->dma       ] leng  ntw timestmp         bi->skb\n");

 if (!FUNC_6(VAR_0))
  goto rx_ring_summary;

 for (VAR_3 = 0; VAR_1->desc && (VAR_3 < VAR_1->count); VAR_3++) {
  struct e1000_tx_desc *VAR_4 = FUNC_1(*VAR_1, VAR_3);
  struct e1000_tx_buffer *VAR_5 = &VAR_1->buffer_info[VAR_3];
  struct my_u { __le64 a; __le64 b; };
  struct my_u *VAR_6 = (struct my_u *)VAR_4;
  const char *VAR_7;

  if (VAR_3 == VAR_1->next_to_use && VAR_3 == VAR_1->next_to_clean)
   VAR_7 = "NTC/U";
  else if (VAR_3 == VAR_1->next_to_use)
   VAR_7 = "NTU";
  else if (VAR_3 == VAR_1->next_to_clean)
   VAR_7 = "NTC";
  else
   VAR_7 = "";

  FUNC_7("T%c[0x%03X]    %016llX %016llX %016llX %04X  %3X %016llX %p %s\n",
   ((FUNC_3(VAR_6->b) & (1<<20)) ? 'd' : 'c'), VAR_3,
   FUNC_3(VAR_6->a), FUNC_3(VAR_6->b),
   (u64)VAR_5->dma, VAR_5->length,
   VAR_5->next_to_watch,
   (u64)VAR_5->time_stamp, VAR_5->skb, VAR_7);
 }

rx_ring_summary:

 FUNC_7("\nRX Desc ring dump\n");
 FUNC_7("R[desc]      [address 63:0  ] [vl er S cks ln] [bi->dma       ] [bi->skb]\n");

 if (!FUNC_5(VAR_0))
  goto exit;

 for (VAR_3 = 0; VAR_2->desc && (VAR_3 < VAR_2->count); VAR_3++) {
  struct e1000_rx_desc *VAR_8 = FUNC_0(*VAR_2, VAR_3);
  struct e1000_rx_buffer *VAR_9 = &VAR_2->buffer_info[VAR_3];
  struct my_u { __le64 a; __le64 b; };
  struct my_u *VAR_10 = (struct my_u *)VAR_8;
  const char *VAR_11;

  if (VAR_3 == VAR_2->next_to_use)
   VAR_11 = "NTU";
  else if (VAR_3 == VAR_2->next_to_clean)
   VAR_11 = "NTC";
  else
   VAR_11 = "";

  FUNC_7("R[0x%03X]     %016llX %016llX %016llX %p %s\n",
   VAR_3, FUNC_3(VAR_10->a), FUNC_3(VAR_10->b),
   (u64)VAR_9->dma, VAR_9->rxbuf.data, VAR_11);
 }



 FUNC_7("Rx descriptor cache in 64bit format\n");
 for (VAR_3 = 0x6000; VAR_3 <= 0x63FF ; VAR_3 += 0x10) {
  FUNC_7("R%04X: %08X|%08X %08X|%08X\n",
   VAR_3,
   FUNC_8(VAR_0->hw.hw_addr + VAR_3+4),
   FUNC_8(VAR_0->hw.hw_addr + VAR_3),
   FUNC_8(VAR_0->hw.hw_addr + VAR_3+12),
   FUNC_8(VAR_0->hw.hw_addr + VAR_3+8));
 }

 FUNC_7("Tx descriptor cache in 64bit format\n");
 for (VAR_3 = 0x7000; VAR_3 <= 0x73FF ; VAR_3 += 0x10) {
  FUNC_7("T%04X: %08X|%08X %08X|%08X\n",
   VAR_3,
   FUNC_8(VAR_0->hw.hw_addr + VAR_3+4),
   FUNC_8(VAR_0->hw.hw_addr + VAR_3),
   FUNC_8(VAR_0->hw.hw_addr + VAR_3+12),
   FUNC_8(VAR_0->hw.hw_addr + VAR_3+8));
 }
exit:
 return;
}
