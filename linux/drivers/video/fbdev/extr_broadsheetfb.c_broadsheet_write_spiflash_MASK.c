
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct broadsheetfb_par {int dummy; } ;


 int FUNC_0 (struct broadsheetfb_par*,int,int,int,int const*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct broadsheetfb_par *VAR_0, u32 VAR_1,
    const u8 *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10 = 0;

 switch (VAR_4) {
 case 0x10:
  VAR_5 = 32*1024;
  break;
 case 0x11:
 default:
  VAR_5 = 64*1024;
  break;
 }

 while (VAR_3) {
  VAR_7 = VAR_1 + VAR_10;
  VAR_9 = FUNC_2(VAR_7, VAR_5) - VAR_7;
  VAR_8 = FUNC_1(VAR_3, VAR_9);

  VAR_6 = FUNC_0(VAR_0, VAR_5,
    VAR_7, VAR_8, VAR_2 + VAR_10);
  if (VAR_6)
   return VAR_6;

  VAR_10 += VAR_8;
  VAR_3 -= VAR_8;
 }

 return 0;
}
