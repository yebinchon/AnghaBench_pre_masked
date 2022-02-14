
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_eth_private {TYPE_1__* cd; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ select_mii; scalar_t__ csmr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct sh_eth_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ,int ,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_13)
{
 struct sh_eth_private *VAR_14 = FUNC_0(VAR_13);
 int VAR_15;

 FUNC_4(VAR_13, VAR_4, VAR_3);
 FUNC_2(VAR_13, VAR_1, VAR_2, VAR_2);

 VAR_15 = FUNC_1(VAR_13);
 if (VAR_15)
  return VAR_15;


 FUNC_4(VAR_13, 0, VAR_12);
 FUNC_4(VAR_13, 0, VAR_9);
 FUNC_4(VAR_13, 0, VAR_11);
 FUNC_4(VAR_13, 0, VAR_10);
 FUNC_4(VAR_13, 0, VAR_8);
 FUNC_4(VAR_13, 0, VAR_5);
 FUNC_4(VAR_13, 0, VAR_7);
 FUNC_4(VAR_13, 0, VAR_6);


 if (VAR_14->cd->csmr)
  FUNC_4(VAR_13, 0, VAR_0);


 if (VAR_14->cd->select_mii)
  FUNC_3(VAR_13);

 return VAR_15;
}
