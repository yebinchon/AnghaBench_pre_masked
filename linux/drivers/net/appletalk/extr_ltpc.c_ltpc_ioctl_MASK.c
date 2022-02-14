
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_node; int s_net; } ;
struct sockaddr_at {TYPE_1__ sat_addr; } ;
struct net_device {int* broadcast; int addr_len; int * dev_addr; } ;
struct atalk_addr {int s_node; int s_net; } ;
struct ltpc_private {struct atalk_addr my_addr; } ;
struct lt_init {int hint; int command; } ;
struct ifreq {int ifr_addr; } ;
typedef int c ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_0 (struct net_device*,struct lt_init*,int,struct lt_init*,int ) ;
 struct ltpc_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_5, struct ifreq *VAR_6, int VAR_7)
{
 struct sockaddr_at *VAR_8 = (struct sockaddr_at *) &VAR_6->ifr_addr;

 struct ltpc_private *VAR_9 = FUNC_1(VAR_5);
 struct atalk_addr *VAR_10 = &VAR_9->my_addr;
 struct lt_init VAR_11;
 int VAR_12;

 if(VAR_4 & VAR_0) FUNC_2("ltpc_ioctl called\n");

 switch(VAR_7) {
  case 128:

   VAR_10->s_net = VAR_8->sat_addr.s_net;


   VAR_11.command = VAR_3;
   VAR_11.hint = VAR_8->sat_addr.s_node;

   VAR_10->s_node = FUNC_0(VAR_5,&VAR_11,sizeof(VAR_11),&VAR_11,0);


   VAR_12 = FUNC_3(VAR_5);
   VAR_12 |= VAR_2;
   FUNC_4 (VAR_5,VAR_12);

   VAR_5->broadcast[0] = 0xFF;
   VAR_5->dev_addr[0] = VAR_10->s_node;

   VAR_5->addr_len=1;

   return 0;

  case 129:

   VAR_8->sat_addr.s_net = VAR_10->s_net;
   VAR_8->sat_addr.s_node = VAR_10->s_node;

   return 0;

  default:
   return -VAR_1;
 }
}
