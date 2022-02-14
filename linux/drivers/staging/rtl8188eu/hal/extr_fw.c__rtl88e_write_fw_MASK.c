
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,int,int *,int) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_1, u8 *VAR_2, u32 VAR_3)
{
 u8 *VAR_4 = VAR_2;
 u32 VAR_5, VAR_6;
 u32 VAR_7, VAR_8;

 VAR_5 = VAR_3 / VAR_0;
 VAR_6 = VAR_3 % VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_8 = VAR_7 * VAR_0;
  FUNC_0(VAR_1, VAR_7, (VAR_4 + VAR_8),
          VAR_0);
 }

 if (VAR_6) {
  VAR_8 = VAR_5 * VAR_0;
  VAR_7 = VAR_5;
  FUNC_0(VAR_1, VAR_7, (VAR_4 + VAR_8), VAR_6);
 }
}
