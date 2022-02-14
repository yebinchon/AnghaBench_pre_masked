
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct lbs_private {int dnld_sent; struct if_sdio_card* card; } ;
struct if_sdio_packet {int nb; int* buffer; struct if_sdio_packet* next; } ;
struct if_sdio_card {int packet_worker; int workqueue; int lock; struct if_sdio_packet* packets; int func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 struct if_sdio_packet* FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct lbs_private *VAR_5,
  u8 VAR_6, u8 *VAR_7, u16 VAR_8)
{
 int VAR_9;
 struct if_sdio_card *VAR_10;
 struct if_sdio_packet *VAR_11, *VAR_12;
 u16 VAR_13;
 unsigned long VAR_14;

 VAR_10 = VAR_5->card;

 if (VAR_8 > (65536 - sizeof(struct if_sdio_packet) - 4)) {
  VAR_9 = -VAR_2;
  goto out;
 }






 VAR_13 = FUNC_4(VAR_10->func, VAR_8 + 4);

 VAR_11 = FUNC_0(sizeof(struct if_sdio_packet) + VAR_13,
   VAR_4);
 if (!VAR_11) {
  VAR_9 = -VAR_3;
  goto out;
 }

 VAR_11->next = ((void*)0);
 VAR_11->nb = VAR_13;




 VAR_11->buffer[0] = (VAR_8 + 4) & 0xff;
 VAR_11->buffer[1] = ((VAR_8 + 4) >> 8) & 0xff;
 VAR_11->buffer[2] = VAR_6;
 VAR_11->buffer[3] = 0;

 FUNC_2(VAR_11->buffer + 4, VAR_7, VAR_8);

 FUNC_5(&VAR_10->lock, VAR_14);

 if (!VAR_10->packets)
  VAR_10->packets = VAR_11;
 else {
  VAR_12 = VAR_10->packets;
  while (VAR_12->next)
   VAR_12 = VAR_12->next;
  VAR_12->next = VAR_11;
 }

 switch (VAR_6) {
 case 129:
  VAR_5->dnld_sent = VAR_0;
  break;
 case 128:
  VAR_5->dnld_sent = VAR_1;
  break;
 default:
  FUNC_1("unknown packet type %d\n", (int)VAR_6);
 }

 FUNC_6(&VAR_10->lock, VAR_14);

 FUNC_3(VAR_10->workqueue, &VAR_10->packet_worker);

 VAR_9 = 0;

out:
 return VAR_9;
}
