
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct netdata_local {int net_base; } ;
struct mii_bus {struct netdata_local* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 () ;
 unsigned long VAR_2 ;
 unsigned long FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(struct mii_bus *VAR_3, int VAR_4, int VAR_5,
   u16 VAR_6)
{
 struct netdata_local *VAR_7 = VAR_3->priv;
 unsigned long VAR_8 = VAR_2 + FUNC_4(100);

 FUNC_7(((VAR_4 << 8) | VAR_5), FUNC_0(VAR_7->net_base));
 FUNC_7(VAR_6, FUNC_2(VAR_7->net_base));


 while (FUNC_5(FUNC_1(VAR_7->net_base)) & VAR_1) {
  if (FUNC_6(VAR_2, VAR_8))
   return -VAR_0;
  FUNC_3();
 }

 return 0;
}
