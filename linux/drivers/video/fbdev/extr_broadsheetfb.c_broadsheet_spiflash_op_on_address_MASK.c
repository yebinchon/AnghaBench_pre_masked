
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct broadsheetfb_par {int dummy; } ;


 int FUNC_0 (struct broadsheetfb_par*,int) ;
 int FUNC_1 (struct broadsheetfb_par*,int,int) ;

__attribute__((used)) static int FUNC_2(struct broadsheetfb_par *VAR_0,
       u8 VAR_1, u32 VAR_2)
{
 int VAR_3;
 u8 VAR_4;
 int VAR_5;

 FUNC_1(VAR_0, 0x0208, 1);

 VAR_5 = FUNC_0(VAR_0, VAR_1);
 if (VAR_5)
  return VAR_5;

 for (VAR_3 = 2; VAR_3 >= 0; VAR_3--) {
  VAR_4 = ((VAR_2 >> (VAR_3 * 8)) & 0xFF);
  VAR_5 = FUNC_0(VAR_0, VAR_4);
  if (VAR_5)
   return VAR_5;
 }

 return VAR_5;
}
