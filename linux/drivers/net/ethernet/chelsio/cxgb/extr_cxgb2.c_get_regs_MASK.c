
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct adapter* ml_priv; } ;
struct ethtool_regs {int version; } ;
struct adapter {int dummy; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (void*,int ,int ) ;
 int FUNC_1 (struct adapter*,void*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_20, struct ethtool_regs *VAR_21,
       void *VAR_22)
{
 struct adapter *VAR_23 = VAR_20->ml_priv;




 VAR_21->version = 2;

 FUNC_0(VAR_22, 0, VAR_19);
 FUNC_1(VAR_23, VAR_22, 0, VAR_12);
 FUNC_1(VAR_23, VAR_22, VAR_4, VAR_5);
 FUNC_1(VAR_23, VAR_22, VAR_13, VAR_14);
 FUNC_1(VAR_23, VAR_22, VAR_15, VAR_16);
 FUNC_1(VAR_23, VAR_22, VAR_11, VAR_10);
 FUNC_1(VAR_23, VAR_22, VAR_1, VAR_0);
 FUNC_1(VAR_23, VAR_22, VAR_3, VAR_2);
 FUNC_1(VAR_23, VAR_22, VAR_18, VAR_17);
 FUNC_1(VAR_23, VAR_22, VAR_9, VAR_8);
 FUNC_1(VAR_23, VAR_22, VAR_6, VAR_7);
}
