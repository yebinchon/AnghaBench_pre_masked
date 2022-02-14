
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct jme_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct jme_adapter*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void
FUNC_3(struct jme_adapter *VAR_2)
{
 u32 VAR_3, VAR_4 = VAR_0;

 FUNC_1(1000);
 VAR_3 = FUNC_0(VAR_2);
 while (!(VAR_3 & VAR_1) && (VAR_4 -= 10) > 0) {
  FUNC_2(10000, 11000);
  VAR_3 = FUNC_0(VAR_2);
 }
}
