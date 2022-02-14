
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct dcb_app {scalar_t__ priority; int selector; int protocol; } ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_device*,struct dcb_app*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,char*,...) ;
 int FUNC_3 (struct net_device*,char*,int,scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
           struct dcb_app *VAR_3)
{
 int VAR_4;

 if (VAR_3->priority >= VAR_1) {
  FUNC_2(VAR_2, "APP entry with priority value %u is invalid\n",
      VAR_3->priority);
  return -VAR_0;
 }

 switch (VAR_3->selector) {
 case 129:
  if (VAR_3->protocol >= 64) {
   FUNC_2(VAR_2, "DSCP APP entry with protocol value %u is invalid\n",
       VAR_3->protocol);
   return -VAR_0;
  }


  VAR_4 = FUNC_1(FUNC_0(VAR_2, VAR_3));
  if (VAR_4--) {
   if (VAR_4 < VAR_3->priority)
    FUNC_3(VAR_2, "Choosing priority %d for DSCP %d in favor of previously-active value of %d\n",
         VAR_3->priority, VAR_3->protocol, VAR_4);
   else if (VAR_4 > VAR_3->priority)
    FUNC_3(VAR_2, "Ignoring new priority %d for DSCP %d in favor of current value of %d\n",
         VAR_3->priority, VAR_3->protocol, VAR_4);
  }
  break;

 case 128:
  if (VAR_3->protocol) {
   FUNC_2(VAR_2, "EtherType APP entries with protocol value != 0 not supported\n");
   return -VAR_0;
  }
  break;

 default:
  FUNC_2(VAR_2, "APP entries with selector %u not supported\n",
      VAR_3->selector);
  return -VAR_0;
 }

 return 0;
}
