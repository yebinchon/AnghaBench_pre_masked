
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct timer_list {int dummy; } ;
struct TYPE_5__ {int tx_carrier_errors; } ;
struct net_device {unsigned int base_addr; scalar_t__ if_port; TYPE_2__ stats; int irq; } ;
struct TYPE_6__ {void* expires; } ;
struct el3_private {int fast_poll; int media_status; TYPE_3__ media; int lock; scalar_t__ last_irq; TYPE_1__* p_dev; } ;
struct TYPE_4__ {struct net_device* priv; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,struct net_device*) ;
 struct el3_private* FUNC_3 (int ,struct timer_list*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 void* VAR_8 ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 struct el3_private* VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (struct net_device*,char*,...) ;
 int FUNC_9 (struct net_device*,char*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (struct net_device*,int) ;
 scalar_t__ FUNC_15 (void*,scalar_t__) ;

__attribute__((used)) static void FUNC_16(struct timer_list *VAR_11)
{
 struct el3_private *VAR_12 = FUNC_3(VAR_12, VAR_11, VAR_10);
 struct net_device *VAR_13 = VAR_12->p_dev->priv;
 unsigned int VAR_14 = VAR_13->base_addr;
 u16 VAR_15, VAR_16;
 unsigned long VAR_17;

 if (!FUNC_10(VAR_13))
  goto reschedule;




 if ((FUNC_5(VAR_14 + VAR_1) & VAR_4) &&
 (FUNC_4(VAR_14 + VAR_2) == 0xff)) {
  if (!VAR_12->fast_poll)
   FUNC_9(VAR_13, "interrupt(s) dropped!\n");

  FUNC_7(VAR_17);
  FUNC_2(VAR_13->irq, VAR_13);
  FUNC_6(VAR_17);

  VAR_12->fast_poll = VAR_3;
 }
 if (VAR_12->fast_poll) {
  VAR_12->fast_poll--;
  VAR_12->media.expires = VAR_8 + VAR_3/100;
  FUNC_1(&VAR_12->media);
  return;
 }





 FUNC_12(&VAR_12->lock, VAR_17);
 FUNC_0(4);
 VAR_15 = FUNC_5(VAR_14+VAR_7) & 0xc810;


 if (FUNC_15(VAR_8, VAR_12->last_irq + VAR_3)) {
  VAR_15 &= ~0x0010;
 } else {

  FUNC_0(6);
  FUNC_11(VAR_5, VAR_14 + VAR_0);
  VAR_16 = FUNC_4(VAR_14 + 0);
  FUNC_11(VAR_6, VAR_14 + VAR_0);
  VAR_13->stats.tx_carrier_errors += VAR_16;
  if (VAR_16 || (VAR_12->media_status & 0x0010))
   VAR_15 |= 0x0010;
 }

 if (VAR_15 != VAR_12->media_status) {
  if ((VAR_15 & VAR_12->media_status & 0x8000) &&
    ((VAR_12->media_status ^ VAR_15) & 0x0800))
  FUNC_8(VAR_13, "%s link beat\n",
    (VAR_12->media_status & 0x0800 ? "lost" : "found"));
  else if ((VAR_15 & VAR_12->media_status & 0x4000) &&
   ((VAR_12->media_status ^ VAR_15) & 0x0010))
  FUNC_8(VAR_13, "coax cable %s\n",
    (VAR_12->media_status & 0x0010 ? "ok" : "problem"));
  if (VAR_13->if_port == 0) {
   if (VAR_15 & 0x8000) {
    if (VAR_15 & 0x0800)
     FUNC_8(VAR_13, "flipped to 10baseT\n");
    else
   FUNC_14(VAR_13, 2);
   } else if (VAR_15 & 0x4000) {
    if (VAR_15 & 0x0010)
     FUNC_14(VAR_13, 1);
    else
     FUNC_8(VAR_13, "flipped to 10base2\n");
   }
  }
  VAR_12->media_status = VAR_15;
 }

 FUNC_0(1);
 FUNC_13(&VAR_12->lock, VAR_17);

reschedule:
 VAR_12->media.expires = VAR_8 + VAR_3;
 FUNC_1(&VAR_12->media);
}
