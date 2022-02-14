
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_context {int state; int done; int out_rid; int list; struct ezusb_priv* upriv; } ;
struct net_device_stats {int tx_packets; int tx_errors; } ;
struct net_device {struct net_device_stats stats; } ;
struct ezusb_priv {scalar_t__ udev; int req_lock; struct net_device* dev; } ;







 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ezusb_priv*) ;
 int FUNC_3 (struct request_context*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct request_context *VAR_1)
{
 struct ezusb_priv *VAR_2 = VAR_1->upriv;
 unsigned long VAR_3;

 FUNC_6(&VAR_2->req_lock, VAR_3);

 FUNC_4(&VAR_1->list);
 if (VAR_2->udev) {
  FUNC_7(&VAR_2->req_lock, VAR_3);
  FUNC_2(VAR_2);
  FUNC_6(&VAR_2->req_lock, VAR_3);
 }

 switch (VAR_1->state) {
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  FUNC_7(&VAR_2->req_lock, VAR_3);

  if ((VAR_1->out_rid == VAR_0) && VAR_2->dev) {
   struct net_device *VAR_4 = VAR_2->dev;
   struct net_device_stats *VAR_5 = &VAR_4->stats;

   if (VAR_1->state != 132)
    VAR_5->tx_errors++;
   else
    VAR_5->tx_packets++;

   FUNC_5(VAR_4);
  }
  FUNC_1(&VAR_1->done);
  FUNC_3(VAR_1);
  break;

 default:
  FUNC_7(&VAR_2->req_lock, VAR_3);
  if (!VAR_2->udev) {


   FUNC_0("Called, CTX not terminating, but device gone");
   FUNC_1(&VAR_1->done);
   FUNC_3(VAR_1);
   break;
  }

  FUNC_0("Called, CTX not in terminating state.");





  break;
 }
}
