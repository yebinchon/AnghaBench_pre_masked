
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct zd_chip {int dummy; } ;


 int FUNC_0 (struct zd_chip*,int const,int ) ;

int FUNC_1(struct zd_chip *VAR_0,
                const u32* VAR_1, unsigned int VAR_2, u8 VAR_3)
{
 int VAR_4;
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4 = FUNC_0(VAR_0, VAR_1[VAR_5], VAR_3);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
