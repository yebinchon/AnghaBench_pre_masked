
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plipconf {int pcmd; int nibble; int trigger; } ;
struct net_local {int nibble; int trigger; } ;
struct net_device {int dummy; } ;
struct ifreq {int ifr_ifru; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct net_local* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_4, struct ifreq *VAR_5, int VAR_6)
{
 struct net_local *VAR_7 = FUNC_1(VAR_4);
 struct plipconf *VAR_8 = (struct plipconf *) &VAR_5->ifr_ifru;

 if (VAR_6 != VAR_3)
  return -VAR_1;

 switch(VAR_8->pcmd) {
 case 129:
  VAR_8->trigger = VAR_7->trigger;
  VAR_8->nibble = VAR_7->nibble;
  break;
 case 128:
  if(!FUNC_0(VAR_0))
   return -VAR_2;
  VAR_7->trigger = VAR_8->trigger;
  VAR_7->nibble = VAR_8->nibble;
  break;
 default:
  return -VAR_1;
 }
 return 0;
}
