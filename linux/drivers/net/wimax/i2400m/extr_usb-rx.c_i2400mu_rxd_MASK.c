
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {struct net_device* net_dev; } ;
struct i2400m {int rx_lock; TYPE_1__ wimax_dev; } ;
struct i2400mu {int rx_size; TYPE_2__* usb_iface; int * rx_kthread; int urb_edc; int rx_size_acc; int rx_size_cnt; int rx_pending_count; int rx_wq; struct i2400m i2400m; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct net_device*,int,int ) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (int *) ;
 int * VAR_4 ;
 int FUNC_6 (int,struct device*,char*,struct i2400mu*,int) ;
 int FUNC_7 (int,struct device*,char*,struct i2400mu*) ;
 int FUNC_8 (int,struct device*,char*,...) ;
 int FUNC_9 (struct device*,char*,...) ;
 scalar_t__ FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (struct i2400m*,struct sk_buff*) ;
 struct sk_buff* FUNC_12 (struct i2400mu*,struct sk_buff*) ;
 int FUNC_13 (struct i2400mu*) ;
 int FUNC_14 (struct sk_buff*) ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (int) ;
 int FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (int ,int) ;

__attribute__((used)) static
int FUNC_21(void *VAR_5)
{
 int VAR_6 = 0;
 struct i2400mu *VAR_7 = VAR_5;
 struct i2400m *VAR_8 = &VAR_7->i2400m;
 struct device *VAR_9 = &VAR_7->usb_iface->dev;
 struct net_device *VAR_10 = VAR_8->wimax_dev.net_dev;
 size_t VAR_11;
 int VAR_12;
 struct sk_buff *VAR_13;
 unsigned long VAR_14;

 FUNC_7(4, VAR_9, "(i2400mu %p)\n", VAR_7);
 FUNC_17(&VAR_8->rx_lock, VAR_14);
 FUNC_0(VAR_7->rx_kthread != ((void*)0));
 VAR_7->rx_kthread = VAR_4;
 FUNC_18(&VAR_8->rx_lock, VAR_14);
 while (1) {
  FUNC_8(2, VAR_9, "RX: waiting for messages\n");
  VAR_11 = 0;
  FUNC_20(
   VAR_7->rx_wq,
   (FUNC_15()
    || (VAR_11 = FUNC_5(&VAR_7->rx_pending_count)))
   );
  if (FUNC_15())
   break;
  if (VAR_11 == 0)
   continue;
  VAR_12 = VAR_7->rx_size;
  FUNC_8(2, VAR_9, "RX: reading up to %d bytes\n", VAR_12);
  VAR_13 = FUNC_3(VAR_10, VAR_12, VAR_3);
  if (VAR_13 == ((void*)0)) {
   FUNC_9(VAR_9, "RX: can't allocate skb [%d bytes]\n",
    VAR_12);
   FUNC_16(50);
   continue;
  }


  VAR_13 = FUNC_12(VAR_7, VAR_13);
  VAR_6 = FUNC_2(VAR_13);
  if (FUNC_1(VAR_13))
   goto out;
  FUNC_4(&VAR_7->rx_pending_count);
  if (VAR_13 == ((void*)0) || VAR_13->len == 0) {

   FUNC_14(VAR_13);
   continue;
  }


  VAR_7->rx_size_cnt++;
  VAR_7->rx_size_acc += VAR_13->len;
  VAR_6 = FUNC_11(VAR_8, VAR_13);
  if (VAR_6 == -VAR_2
      && FUNC_10(&VAR_7->urb_edc,
          VAR_1, VAR_0)) {
   goto error_reset;
  }


  FUNC_13(VAR_7);
 }
 VAR_6 = 0;
out:
 FUNC_17(&VAR_8->rx_lock, VAR_14);
 VAR_7->rx_kthread = ((void*)0);
 FUNC_18(&VAR_8->rx_lock, VAR_14);
 FUNC_6(4, VAR_9, "(i2400mu %p) = %d\n", VAR_7, VAR_6);
 return VAR_6;

error_reset:
 FUNC_9(VAR_9, "RX: maximum errors in received buffer exceeded; "
  "resetting device\n");
 FUNC_19(VAR_7->usb_iface);
 goto out;
}
