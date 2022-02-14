
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rndis_message {int ndis_msg_type; int msg_len; } ;
struct netvsc_device {int dummy; } ;
struct netvsc_channel {int dummy; } ;
struct net_device_context {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (struct net_device*,struct rndis_message*) ;
 int FUNC_1 (struct net_device*,char*,int,int ) ;
 struct net_device_context* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device_context*) ;
 int FUNC_4 (struct net_device*,struct rndis_message*) ;
 int FUNC_5 (struct net_device*,struct netvsc_device*,struct netvsc_channel*,struct rndis_message*,int ) ;
 int FUNC_6 (struct net_device*,struct netvsc_device*,struct rndis_message*) ;

int FUNC_7(struct net_device *VAR_2,
    struct netvsc_device *VAR_3,
    struct netvsc_channel *VAR_4,
    void *VAR_5, u32 VAR_6)
{
 struct net_device_context *VAR_7 = FUNC_2(VAR_2);
 struct rndis_message *VAR_8 = VAR_5;

 if (FUNC_3(VAR_7))
  FUNC_0(VAR_2, VAR_8);

 switch (VAR_8->ndis_msg_type) {
 case 130:
  return FUNC_5(VAR_2, VAR_3, VAR_4,
       VAR_8, VAR_6);
 case 131:
 case 129:
 case 128:

  FUNC_6(VAR_2, VAR_3, VAR_8);
  break;

 case 132:

  FUNC_4(VAR_2, VAR_8);
  break;
 default:
  FUNC_1(VAR_2,
   "unhandled rndis message (type %u len %u)\n",
      VAR_8->ndis_msg_type,
      VAR_8->msg_len);
  return VAR_0;
 }

 return VAR_1;
}
