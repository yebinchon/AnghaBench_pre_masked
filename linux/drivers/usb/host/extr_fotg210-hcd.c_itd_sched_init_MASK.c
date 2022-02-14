
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct urb {int transfer_dma; int number_of_packets; int transfer_flags; TYPE_1__* iso_frame_desc; } ;
struct fotg210_iso_stream {int interval; } ;
struct fotg210_iso_sched {int span; struct fotg210_iso_packet* packet; } ;
struct fotg210_iso_packet {int bufp; int cross; int transaction; } ;
struct fotg210_hcd {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {unsigned int length; int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fotg210_hcd*,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct fotg210_hcd *VAR_3,
  struct fotg210_iso_sched *VAR_4,
  struct fotg210_iso_stream *VAR_5, struct urb *VAR_6)
{
 unsigned VAR_7;
 dma_addr_t VAR_8 = VAR_6->transfer_dma;


 VAR_4->span = VAR_6->number_of_packets * VAR_5->interval;




 for (VAR_7 = 0; VAR_7 < VAR_6->number_of_packets; VAR_7++) {
  struct fotg210_iso_packet *VAR_9 = &VAR_4->packet[VAR_7];
  unsigned VAR_10;
  dma_addr_t VAR_11;
  u32 VAR_12;

  VAR_10 = VAR_6->iso_frame_desc[VAR_7].length;
  VAR_11 = VAR_8 + VAR_6->iso_frame_desc[VAR_7].offset;

  VAR_12 = VAR_0;
  VAR_12 |= VAR_11 & 0x0fff;
  if (FUNC_1(((VAR_7 + 1) == VAR_6->number_of_packets))
    && !(VAR_6->transfer_flags & VAR_2))
   VAR_12 |= VAR_1;
  VAR_12 |= VAR_10 << 16;
  VAR_9->transaction = FUNC_0(VAR_3, VAR_12);


  VAR_9->bufp = (VAR_11 & ~(u64)0x0fff);
  VAR_11 += VAR_10;
  if (FUNC_1((VAR_9->bufp != (VAR_11 & ~(u64)0x0fff))))
   VAR_9->cross = 1;
 }
}
