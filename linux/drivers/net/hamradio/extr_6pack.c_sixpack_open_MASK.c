
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int receive_room; struct sixpack* disc_data; TYPE_1__* ops; } ;
struct sixpack {char* rbuff; char* xbuff; unsigned long buffsize; int led_state; int status; int status1; int lock; int resync_t; int tx_t; scalar_t__ tx_enable; scalar_t__ status2; int slottime; int persistence; int tx_delay; scalar_t__ duplex; scalar_t__ flags; scalar_t__ xleft; scalar_t__ rx_count_cooked; scalar_t__ rx_count; scalar_t__ rcount; scalar_t__ mtu; struct tty_struct* tty; int dead; int refcnt; struct net_device* dev; } ;
struct net_device {int mtu; } ;
struct TYPE_2__ {int * write; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct net_device* FUNC_0 (int,char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (unsigned long,int ) ;
 struct sixpack* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (struct net_device*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,int ) ;
 int FUNC_14 (struct sixpack*) ;

__attribute__((used)) static int FUNC_15(struct tty_struct *VAR_14)
{
 char *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
 struct net_device *VAR_17;
 struct sixpack *VAR_18;
 unsigned long VAR_19;
 int VAR_20 = 0;

 if (!FUNC_1(VAR_1))
  return -VAR_5;
 if (VAR_14->ops->write == ((void*)0))
  return -VAR_4;

 VAR_17 = FUNC_0(sizeof(struct sixpack), "sp%d", VAR_7,
      VAR_12);
 if (!VAR_17) {
  VAR_20 = -VAR_3;
  goto out;
 }

 VAR_18 = FUNC_6(VAR_17);
 VAR_18->dev = VAR_17;

 FUNC_11(&VAR_18->lock);
 FUNC_8(&VAR_18->refcnt, 1);
 FUNC_3(&VAR_18->dead);



 VAR_19 = VAR_17->mtu * 2;

 VAR_15 = FUNC_5(VAR_19 + 4, VAR_6);
 VAR_16 = FUNC_5(VAR_19 + 4, VAR_6);

 if (VAR_15 == ((void*)0) || VAR_16 == ((void*)0)) {
  VAR_20 = -VAR_2;
  goto out_free;
 }

 FUNC_10(&VAR_18->lock);

 VAR_18->tty = VAR_14;

 VAR_18->rbuff = VAR_15;
 VAR_18->xbuff = VAR_16;

 VAR_18->mtu = VAR_0 + 73;
 VAR_18->buffsize = VAR_19;
 VAR_18->rcount = 0;
 VAR_18->rx_count = 0;
 VAR_18->rx_count_cooked = 0;
 VAR_18->xleft = 0;

 VAR_18->flags = 0;

 VAR_18->duplex = 0;
 VAR_18->tx_delay = VAR_10;
 VAR_18->persistence = VAR_8;
 VAR_18->slottime = VAR_9;
 VAR_18->led_state = 0x60;
 VAR_18->status = 1;
 VAR_18->status1 = 1;
 VAR_18->status2 = 0;
 VAR_18->tx_enable = 0;

 FUNC_7(VAR_17);

 FUNC_13(&VAR_18->tx_t, VAR_13, 0);

 FUNC_13(&VAR_18->resync_t, VAR_11, 0);

 FUNC_12(&VAR_18->lock);


 VAR_14->disc_data = VAR_18;
 VAR_14->receive_room = 65536;


 VAR_20 = FUNC_9(VAR_17);
 if (VAR_20)
  goto out_free;

 FUNC_14(VAR_18);

 return 0;

out_free:
 FUNC_4(VAR_16);
 FUNC_4(VAR_15);

 FUNC_2(VAR_17);

out:
 return VAR_20;
}
