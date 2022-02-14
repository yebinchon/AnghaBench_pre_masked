
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ dev_addr; } ;
struct cp_private {scalar_t__ wol_enabled; struct net_device* dev; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct cp_private*) ;
 int FUNC_2 (struct cp_private*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9 (struct cp_private *VAR_17)
{
 struct net_device *VAR_18 = VAR_17->dev;

 FUNC_1(VAR_17);

 FUNC_7 (VAR_0, VAR_2);


 FUNC_5 (VAR_8 + 0, FUNC_8 (*(__le32 *) (VAR_18->dev_addr + 0)));
 FUNC_5 (VAR_8 + 4, FUNC_8 (*(__le32 *) (VAR_18->dev_addr + 4)));

 FUNC_2(VAR_17);
 FUNC_6(VAR_16, 0x06);

 FUNC_0(VAR_18);
 FUNC_5 (VAR_14, VAR_7 | (VAR_13 << VAR_15));

 FUNC_6(VAR_3, FUNC_3(VAR_3) | VAR_6 | VAR_12);

 FUNC_6(VAR_4, VAR_10);
 VAR_17->wol_enabled = 0;

 FUNC_6(VAR_5, FUNC_3(VAR_5) & VAR_11);

 FUNC_4(VAR_9, 0);

 FUNC_7(VAR_0, VAR_1);
}
