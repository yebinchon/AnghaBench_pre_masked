
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct tty_struct {struct ser_device* disc_data; } ;
struct sk_buff {int protocol; } ;
struct TYPE_4__ {int use_stx; } ;
struct ser_device {TYPE_3__* dev; int tx_started; TYPE_1__ common; } ;
struct TYPE_5__ {int rx_bytes; int rx_dropped; int rx_packets; } ;
struct TYPE_6__ {TYPE_2__ stats; int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ser_device*,int const*,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ) ;
 struct sk_buff* FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int const*,int) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct ser_device*) ;

__attribute__((used)) static void FUNC_9(struct tty_struct *VAR_1, const u8 *VAR_2,
   char *VAR_3, int VAR_4)
{
 struct sk_buff *VAR_5 = ((void*)0);
 struct ser_device *VAR_6;
 int VAR_7;

 VAR_6 = VAR_1->disc_data;
 if (!VAR_6->common.use_stx && !VAR_6->tx_started) {
  FUNC_2(&VAR_6->dev->dev,
   "Bytes received before initial transmission -"
   "bytes discarded.\n");
  return;
 }

 FUNC_0(VAR_6->dev == ((void*)0));


 VAR_5 = FUNC_4(VAR_6->dev, VAR_4+1);
 if (VAR_5 == ((void*)0))
  return;
 FUNC_6(VAR_5, VAR_2, VAR_4);

 VAR_5->protocol = FUNC_3(VAR_0);
 FUNC_7(VAR_5);
 FUNC_1(VAR_6, VAR_2, VAR_4);

 VAR_7 = FUNC_5(VAR_5);
 if (!VAR_7) {
  VAR_6->dev->stats.rx_packets++;
  VAR_6->dev->stats.rx_bytes += VAR_4;
 } else
  ++VAR_6->dev->stats.rx_dropped;
 FUNC_8(VAR_6);
}
