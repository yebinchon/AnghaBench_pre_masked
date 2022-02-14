
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct usbnet {struct net_device* net; } ;
struct net_device {int dummy; } ;
struct nd_msg {int target; } ;
struct ipv6hdr {int saddr; int daddr; } ;
struct TYPE_3__ {int forwarding; } ;
struct inet6_dev {TYPE_1__ cnf; } ;
struct TYPE_4__ {int (* ndisc_send_na ) (struct net_device*,int *,int *,int,int,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (struct net_device*,int ,scalar_t__) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 struct inet6_dev* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct inet6_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_2__* VAR_2 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct net_device*,int *,int *,int,int,int,int) ;

__attribute__((used)) static void FUNC_11(struct usbnet *VAR_3, u8 *VAR_4, u16 VAR_5)
{
 struct ipv6hdr *VAR_6 = (void *)VAR_4;
 struct nd_msg *VAR_7 = (void *)(VAR_6 + 1);
 struct net_device *VAR_8;
 struct inet6_dev *VAR_9;
 bool VAR_10;




 if (!FUNC_6(&VAR_6->daddr) ||
     !(FUNC_7(&VAR_6->saddr) & VAR_1))
  return;


 FUNC_8();
 if (VAR_5) {
  VAR_8 = FUNC_0(VAR_3->net, FUNC_3(VAR_0),
        VAR_5);
  if (!VAR_8) {
   FUNC_9();
   return;
  }
 } else {
  VAR_8 = VAR_3->net;
 }
 FUNC_1(VAR_8);
 FUNC_9();

 VAR_9 = FUNC_4(VAR_8);
 if (!VAR_9)
  goto out;
 VAR_10 = !!VAR_9->cnf.forwarding;
 FUNC_5(VAR_9);


 VAR_2->ndisc_send_na(VAR_8, &VAR_6->saddr, &VAR_7->target,
     VAR_10 ,
     1 ,
     0 ,
     1 );
out:
 FUNC_2(VAR_8);
}
