
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct broadsheetfb_par {int dummy; } ;


 int FUNC_0 (struct broadsheetfb_par*,int) ;
 int FUNC_1 (struct broadsheetfb_par*,int,int,int ,int) ;
 int FUNC_2 (struct broadsheetfb_par*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct broadsheetfb_par *VAR_0, u8 *VAR_1)
{
 int VAR_2;
 u16 VAR_3;

 FUNC_2(VAR_0, 0x0202, 0);

 VAR_2 = FUNC_1(VAR_0, 0x0206, 3, 0, 100);
 if (VAR_2)
  return VAR_2;

 VAR_3 = FUNC_0(VAR_0, 0x200);

 *VAR_1 = VAR_3 & 0xFF;

 return 0;
}
