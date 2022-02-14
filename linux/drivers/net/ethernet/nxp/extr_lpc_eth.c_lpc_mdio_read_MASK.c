
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdata_local {int net_base; } ;
struct mii_bus {struct netdata_local* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 () ;
 unsigned long VAR_3 ;
 unsigned long FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static int FUNC_9(struct mii_bus *VAR_4, int VAR_5, int VAR_6)
{
 struct netdata_local *VAR_7 = VAR_4->priv;
 unsigned long VAR_8 = VAR_3 + FUNC_5(100);
 int VAR_9;

 FUNC_8(((VAR_5 << 8) | VAR_6), FUNC_0(VAR_7->net_base));
 FUNC_8(VAR_1, FUNC_1(VAR_7->net_base));


 while (FUNC_6(FUNC_2(VAR_7->net_base)) & VAR_2) {
  if (FUNC_7(VAR_3, VAR_8))
   return -VAR_0;
  FUNC_4();
 }

 VAR_9 = FUNC_6(FUNC_3(VAR_7->net_base));
 FUNC_8(0, FUNC_1(VAR_7->net_base));

 return VAR_9;
}
