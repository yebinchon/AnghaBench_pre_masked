
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ifreq {int ifr_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*,int ) ;
 int FUNC_6 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_3, struct ifreq *VAR_4, int VAR_5)
{
 if (VAR_5 != 131 && VAR_5 != 130 &&
     !FUNC_0(VAR_0))
    return -VAR_2;

 switch (VAR_5) {
  case 132:
   return FUNC_2(VAR_3, VAR_4->ifr_data);
  case 133:
   return FUNC_1(VAR_3, VAR_4->ifr_data);
  case 130:
   return FUNC_4(VAR_3, VAR_4->ifr_data);
  case 128:
   return FUNC_6(VAR_3, VAR_4->ifr_data);
  case 131:
   return FUNC_3(VAR_3, VAR_4->ifr_data);
  case 129:
   return FUNC_5(VAR_3, VAR_4->ifr_data);
  default:
   return -VAR_1;
 }
}
