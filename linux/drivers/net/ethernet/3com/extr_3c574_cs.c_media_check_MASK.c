
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct net_device {unsigned int base_addr; int mtu; int irq; } ;
struct TYPE_4__ {void* expires; } ;
struct el3_private {int fast_poll; unsigned short media_status; unsigned short partner; unsigned short advertising; TYPE_2__ media; int window_lock; int phys; TYPE_1__* p_dev; } ;
struct TYPE_3__ {struct net_device* priv; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,struct net_device*) ;
 struct el3_private* FUNC_3 (int ,struct timer_list*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 void* VAR_5 ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 struct el3_private* VAR_6 ;
 unsigned short FUNC_8 (unsigned int,int ,int) ;
 unsigned short VAR_7 ;
 int FUNC_9 (struct net_device*,char*,...) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int,scalar_t__) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_14(struct timer_list *VAR_8)
{
 struct el3_private *VAR_9 = FUNC_3(VAR_9, VAR_8, VAR_7);
 struct net_device *VAR_10 = VAR_9->p_dev->priv;
 unsigned int VAR_11 = VAR_10->base_addr;
 unsigned long VAR_12;
 unsigned short VAR_13, VAR_14;

 if (!FUNC_10(VAR_10))
  goto reschedule;



 if ((FUNC_5(VAR_11 + VAR_0) & VAR_2) && (FUNC_4(VAR_11 + VAR_3) == 0xff)) {
  if (!VAR_9->fast_poll)
   FUNC_9(VAR_10, "interrupt(s) dropped!\n");

  FUNC_7(VAR_12);
  FUNC_2(VAR_10->irq, VAR_10);
  FUNC_6(VAR_12);

  VAR_9->fast_poll = VAR_1;
 }
 if (VAR_9->fast_poll) {
  VAR_9->fast_poll--;
  VAR_9->media.expires = VAR_5 + 2*VAR_1/100;
  FUNC_1(&VAR_9->media);
  return;
 }

 FUNC_12(&VAR_9->window_lock, VAR_12);
 FUNC_0(4);
 VAR_13 = FUNC_8(VAR_11, VAR_9->phys, 1);
 VAR_14 = FUNC_8(VAR_11, VAR_9->phys, 5);
 FUNC_0(1);

 if (VAR_13 != VAR_9->media_status) {
  if ((VAR_13 ^ VAR_9->media_status) & 0x0004)
   FUNC_9(VAR_10, "%s link beat\n",
        (VAR_9->media_status & 0x0004) ? "lost" : "found");
  if ((VAR_13 ^ VAR_9->media_status) & 0x0020) {
   VAR_9->partner = 0;
   if (VAR_9->media_status & 0x0020) {
    FUNC_9(VAR_10, "autonegotiation restarted\n");
   } else if (VAR_14) {
    VAR_14 &= VAR_9->advertising;
    VAR_9->partner = VAR_14;
    FUNC_9(VAR_10, "autonegotiation complete: "
         "%dbaseT-%cD selected\n",
         (VAR_14 & 0x0180) ? 100 : 10,
         (VAR_14 & 0x0140) ? 'F' : 'H');
   } else {
    FUNC_9(VAR_10, "link partner did not autonegotiate\n");
   }

   FUNC_0(3);
   FUNC_11((VAR_14 & 0x0140 ? 0x20 : 0) |
     (VAR_10->mtu > 1500 ? 0x40 : 0), VAR_11 + VAR_4);
   FUNC_0(1);

  }
  if (VAR_13 & 0x0010)
   FUNC_9(VAR_10, "remote fault detected\n");
  if (VAR_13 & 0x0002)
   FUNC_9(VAR_10, "jabber detected\n");
  VAR_9->media_status = VAR_13;
 }
 FUNC_13(&VAR_9->window_lock, VAR_12);

reschedule:
 VAR_9->media.expires = VAR_5 + VAR_1;
 FUNC_1(&VAR_9->media);
}
