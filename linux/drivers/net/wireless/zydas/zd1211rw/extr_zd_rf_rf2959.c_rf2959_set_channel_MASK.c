
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct zd_rf {int dummy; } ;
struct zd_chip {int dummy; } ;


 int VAR_0 ;
 int ** VAR_1 ;
 struct zd_chip* FUNC_0 (struct zd_rf*) ;
 int FUNC_1 (struct zd_chip*,int const,int ) ;

__attribute__((used)) static int FUNC_2(struct zd_rf *VAR_2, u8 VAR_3)
{
 int VAR_4, VAR_5;
 const u32 *VAR_6 = VAR_1[VAR_3-1];
 struct zd_chip *VAR_7 = FUNC_0(VAR_2);

 for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
  VAR_5 = FUNC_1(VAR_7, VAR_6[VAR_4], VAR_0);
  if (VAR_5)
   return VAR_5;
 }
 return 0;
}
