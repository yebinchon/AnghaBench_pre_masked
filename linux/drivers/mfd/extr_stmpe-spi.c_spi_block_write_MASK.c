
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stmpe {int dummy; } ;


 int FUNC_0 (struct stmpe*,int,int const) ;

__attribute__((used)) static int FUNC_1(struct stmpe *VAR_0, u8 VAR_1, u8 VAR_2,
  const u8 *VAR_3)
{
 int VAR_4 = 0, VAR_5;

 for (VAR_5 = VAR_2; VAR_5 > 0; VAR_5--, VAR_1++) {
  VAR_4 = FUNC_0(VAR_0, VAR_1, *(VAR_3 + VAR_5 - 1));
  if (VAR_4 < 0)
   return VAR_4;
 }

 return VAR_4;
}
