
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct b43_wldev {TYPE_1__* dev; } ;
struct b43_pio_txqueue {int rev; unsigned int index; int buffer_size; int packets_list; struct b43_pio_txpacket* packets; int free_packet_slots; scalar_t__ mmio_base; struct b43_wldev* dev; } ;
struct b43_pio_txpacket {unsigned int index; int list; struct b43_pio_txqueue* queue; } ;
struct TYPE_2__ {int core_rev; } ;


 unsigned int FUNC_0 (struct b43_pio_txpacket*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct b43_pio_txqueue*,int ) ;
 scalar_t__ FUNC_3 (struct b43_wldev*,unsigned int) ;
 struct b43_pio_txqueue* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (struct b43_wldev*) ;

__attribute__((used)) static struct b43_pio_txqueue *FUNC_7(struct b43_wldev *VAR_3,
           unsigned int VAR_4)
{
 struct b43_pio_txqueue *VAR_5;
 struct b43_pio_txpacket *VAR_6;
 unsigned int VAR_7;

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return ((void*)0);
 VAR_5->dev = VAR_3;
 VAR_5->rev = VAR_3->dev->core_rev;
 VAR_5->mmio_base = FUNC_3(VAR_3, VAR_4) +
         FUNC_6(VAR_3);
 VAR_5->index = VAR_4;

 VAR_5->free_packet_slots = VAR_0;
 if (VAR_5->rev >= 8) {
  VAR_5->buffer_size = 1920;
 } else {
  VAR_5->buffer_size = FUNC_2(VAR_5, VAR_1);
  VAR_5->buffer_size -= 80;
 }

 FUNC_1(&VAR_5->packets_list);
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_5->packets); VAR_7++) {
  VAR_6 = &(VAR_5->packets[VAR_7]);
  FUNC_1(&VAR_6->list);
  VAR_6->index = VAR_7;
  VAR_6->queue = VAR_5;
  FUNC_5(&VAR_6->list, &VAR_5->packets_list);
 }

 return VAR_5;
}
