
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct broadsheetfb_par {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct broadsheetfb_par*,int) ;
 int FUNC_1 (struct broadsheetfb_par*,int,int) ;
 int FUNC_2 (struct broadsheetfb_par*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct broadsheetfb_par *VAR_1)
{
 int VAR_2 = 0;
 u16 VAR_3;


 FUNC_1(VAR_1, 0x0006, 0x0000);

 FUNC_1(VAR_1, 0x0010, 0x0004);
 FUNC_1(VAR_1, 0x0012, 0x5949);
 FUNC_1(VAR_1, 0x0014, 0x0040);
 FUNC_1(VAR_1, 0x0016, 0x0000);

 do {
  if (VAR_2++ > 100)
   return -VAR_0;
  FUNC_3(1);
 } while (!FUNC_2(VAR_1));

 VAR_3 = FUNC_0(VAR_1, 0x0006);
 VAR_3 &= ~0x1;
 FUNC_1(VAR_1, 0x0006, VAR_3);

 return 0;
}
