
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct adapter {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct adapter*,size_t,size_t const) ;
 int FUNC_1 (struct adapter*,size_t,int const) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_1,
       const u8 *VAR_2, u32 VAR_3)
{
 u32 VAR_4 = sizeof(u32);
 const u8 *VAR_5;
 const u32 *VAR_6 = (u32 *)VAR_2;
 u32 VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_9 = VAR_3 / VAR_4;
 VAR_10 = VAR_3 % VAR_4;

 VAR_8 = VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++, VAR_8 += VAR_4)
  FUNC_0(VAR_1, VAR_8, VAR_6[VAR_7]);

 VAR_5 = VAR_2 + VAR_9 * VAR_4;
 for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++, VAR_8++)
  FUNC_1(VAR_1, VAR_8, VAR_5[VAR_7]);
}
