
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int u16 ;
struct sis900_private {struct mii_phy* mii; } ;
struct net_device {int if_port; } ;
struct mii_phy {int phy_addr; } ;
struct ifmap {int port; } ;


 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,int ,int ) ;
 int FUNC_1 (struct net_device*,int ,int ,int) ;
 struct sis900_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_6, struct ifmap *VAR_7)
{
 struct sis900_private *VAR_8 = FUNC_2(VAR_6);
 struct mii_phy *VAR_9 = VAR_8->mii;

 u16 VAR_10;

 if ((VAR_7->port != (u_char)(-1)) && (VAR_7->port != VAR_6->if_port)) {






  switch(VAR_7->port){
  case 128:
   VAR_6->if_port = VAR_7->port;





   FUNC_3(VAR_6);


   VAR_10 = FUNC_0(VAR_6, VAR_9->phy_addr, VAR_5);





   FUNC_1(VAR_6, VAR_9->phy_addr,
       VAR_5, VAR_10 | VAR_2 | VAR_3);

   break;

  case 130:
   VAR_6->if_port = VAR_7->port;






   FUNC_3(VAR_6);



   VAR_10 = FUNC_0(VAR_6, VAR_9->phy_addr, VAR_5);


   FUNC_1(VAR_6, VAR_9->phy_addr,
       VAR_5, VAR_10 & ~(VAR_4 |
     VAR_2));
   break;

  case 133:
  case 132:
   VAR_6->if_port = VAR_7->port;






   FUNC_3(VAR_6);



   VAR_10 = FUNC_0(VAR_6, VAR_9->phy_addr, VAR_5);
   FUNC_1(VAR_6, VAR_9->phy_addr,
       VAR_5, (VAR_10 & ~VAR_4) |
       VAR_4);

   break;

  case 131:
  case 129:
  case 134:

   return -VAR_1;

  default:
   return -VAR_0;
  }
 }
 return 0;
}
