
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int type; } ;
struct ifreq {int ifr_data; int ifr_flags; } ;
struct frad_local {int configured; int type; int initialized; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 struct frad_local* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int ,int) ;
 int FUNC_4 (struct net_device*,struct ifreq*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_7, struct ifreq *VAR_8, int VAR_9)
{
 struct frad_local *VAR_10;

 if(!FUNC_0(VAR_0))
  return -VAR_6;

 VAR_10 = FUNC_1(VAR_7);

 if (!VAR_10->initialized)
  return -VAR_3;

 switch (VAR_9)
 {
  case 137:
  case 136:
   return FUNC_3(VAR_7, VAR_8->ifr_data, VAR_9 == 137);

  case 133:
   VAR_8->ifr_flags = VAR_10->type;
   break;

  case 134:
   return FUNC_4(VAR_7, VAR_8);







  case 132:
   if (VAR_10->configured)
    return -VAR_2;

   switch (VAR_8->ifr_flags)
   {
    case 138:
     VAR_7->type = VAR_8->ifr_flags;
     break;
    default:
     return -VAR_4;
   }
   break;

  case 135:
   FUNC_2(VAR_7);
   break;

  case 128:
  case 131:
   if(!FUNC_0(VAR_1))
    return -VAR_6;
   return FUNC_7(VAR_7, VAR_8->ifr_data, VAR_9 == 131);

  case 130:
   FUNC_5(VAR_7);
   break;

  case 129:
   FUNC_6(VAR_7);
   break;

  default:
   return -VAR_5;
 }
 return 0;
}
