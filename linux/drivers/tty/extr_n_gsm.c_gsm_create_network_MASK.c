
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int min_mtu; int ifindex; int name; int max_mtu; int mtu; } ;
struct gsm_netconfig {scalar_t__ protocol; int adaption; char* if_name; } ;
struct gsm_mux_net {int ref; struct gsm_dlci* dlci; } ;
struct gsm_dlci {int adaption; int prev_adaption; struct net_device* net; int data; int prev_data; TYPE_1__* gsm; } ;
struct TYPE_2__ {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct net_device* FUNC_0 (int,char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct gsm_dlci*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 struct gsm_mux_net* FUNC_5 (struct net_device*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct gsm_dlci *VAR_10, struct gsm_netconfig *VAR_11)
{
 char *VAR_12;
 int VAR_13 = 0;
 struct net_device *VAR_14;
 struct gsm_mux_net *VAR_15;

 if (!FUNC_1(VAR_0))
  return -VAR_3;


 if (VAR_10->adaption > 2)
  return -VAR_1;

 if (VAR_11->protocol != FUNC_3(VAR_5))
  return -VAR_4;

 if (VAR_11->adaption != 3 && VAR_11->adaption != 4)
  return -VAR_4;

 FUNC_6("create network interface");

 VAR_12 = "gsm%d";
 if (VAR_11->if_name[0] != '\0')
  VAR_12 = VAR_11->if_name;
 VAR_14 = FUNC_0(sizeof(struct gsm_mux_net), VAR_12,
      VAR_7, VAR_8);
 if (!VAR_14) {
  FUNC_7("alloc_netdev failed");
  return -VAR_2;
 }
 VAR_14->mtu = VAR_10->gsm->mtu;
 VAR_14->min_mtu = 8;
 VAR_14->max_mtu = VAR_10->gsm->mtu;
 VAR_15 = FUNC_5(VAR_14);
 VAR_15->dlci = VAR_10;
 FUNC_4(&VAR_15->ref);
 FUNC_9(VAR_11->if_name, VAR_14->name, VAR_6);


 VAR_10->prev_adaption = VAR_10->adaption;
 VAR_10->prev_data = VAR_10->data;
 VAR_10->adaption = VAR_11->adaption;
 VAR_10->data = VAR_9;
 VAR_10->net = VAR_14;

 FUNC_6("register netdev");
 VAR_13 = FUNC_8(VAR_14);
 if (VAR_13) {
  FUNC_7("network register fail %d\n", VAR_13);
  FUNC_2(VAR_10);
  return VAR_13;
 }
 return VAR_14->ifindex;
}
