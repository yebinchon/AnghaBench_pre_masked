
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int got_enbdisack; int xmit_fail; int got_xmit_done; int got_rcv; } ;
struct visornic_devdata {int enab_dis_acked; int server_down; int server_change_state; int enabled; int priv_lock; struct net_device* netdev; TYPE_3__ chstat; int xmitbufhead; int flow_control_lower_hits; int lower_threshold_net_xmits; TYPE_1__* dev; } ;
struct TYPE_9__ {int enable; scalar_t__ context; } ;
struct TYPE_7__ {int xmt_done_result; } ;
struct TYPE_10__ {int type; TYPE_4__ enbdis; scalar_t__ buf; TYPE_2__ xmtdone; } ;
struct uiscmdrsp {TYPE_5__ net; } ;
struct sk_buff {struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int visorchannel; } ;


 int VAR_0 ;




 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (scalar_t__,int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (int ,int ,struct uiscmdrsp*) ;
 int FUNC_10 (struct uiscmdrsp*) ;
 int FUNC_11 (struct visornic_devdata*,int ) ;

__attribute__((used)) static void FUNC_12(struct uiscmdrsp *VAR_1,
          struct visornic_devdata *VAR_2,
          int *VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 struct net_device *VAR_6;

 while (*VAR_3 < VAR_4) {




  if (FUNC_9(VAR_2->dev->visorchannel,
           VAR_0,
           VAR_1))
   break;

  switch (VAR_1->net.type) {
  case 130:
   VAR_2->chstat.got_rcv++;

   *VAR_3 += FUNC_10(VAR_1);
   break;
  case 128:
   FUNC_7(&VAR_2->priv_lock, VAR_5);
   VAR_2->chstat.got_xmit_done++;
   if (VAR_1->net.xmtdone.xmt_done_result)
    VAR_2->chstat.xmit_fail++;

   VAR_6 = ((struct sk_buff *)VAR_1->net.buf)->dev;

   if (VAR_6 == VAR_2->netdev &&
       FUNC_3(VAR_6)) {



    if (FUNC_11
        (VAR_2,
         VAR_2->lower_threshold_net_xmits)) {



     FUNC_5(VAR_6);
     VAR_2->flow_control_lower_hits++;
    }
   }
   FUNC_6(VAR_1->net.buf, &VAR_2->xmitbufhead);
   FUNC_8(&VAR_2->priv_lock, VAR_5);
   FUNC_0(VAR_1->net.buf);
   break;
  case 129:
   VAR_2->chstat.got_enbdisack++;
   VAR_6 = (struct net_device *)
   VAR_1->net.enbdis.context;
   FUNC_7(&VAR_2->priv_lock, VAR_5);
   VAR_2->enab_dis_acked = 1;
   FUNC_8(&VAR_2->priv_lock, VAR_5);

   if (VAR_2->server_down &&
       VAR_2->server_change_state) {

    VAR_2->server_down = 0;
    VAR_2->server_change_state = 0;
    FUNC_5(VAR_6);
    FUNC_2(VAR_6);
   }
   break;
  case 131:
   VAR_6 = VAR_2->netdev;
   if (VAR_1->net.enbdis.enable == 1) {
    FUNC_7(&VAR_2->priv_lock, VAR_5);
    VAR_2->enabled = VAR_1->net.enbdis.enable;
    FUNC_8(&VAR_2->priv_lock,
             VAR_5);
    FUNC_5(VAR_6);
    FUNC_2(VAR_6);
   } else {
    FUNC_4(VAR_6);
    FUNC_1(VAR_6);
    FUNC_7(&VAR_2->priv_lock, VAR_5);
    VAR_2->enabled = VAR_1->net.enbdis.enable;
    FUNC_8(&VAR_2->priv_lock,
             VAR_5);
   }
   break;
  default:
   break;
  }

 }
}
