
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct adapter*,int ) ;
 int FUNC_1 (struct adapter*,int ,int) ;

__attribute__((used)) static u32 FUNC_2(struct adapter *VAR_4, u32 VAR_5)
{
 u32 VAR_6 = 0, VAR_7;
 VAR_7 = VAR_0 | VAR_5;
 FUNC_1(VAR_4, VAR_3, VAR_7);

 do {
  if (0 == (FUNC_0(VAR_4, VAR_1) & VAR_0))
   break;
 } while (VAR_6++ < 100);

 return FUNC_0(VAR_4, VAR_2);
}
