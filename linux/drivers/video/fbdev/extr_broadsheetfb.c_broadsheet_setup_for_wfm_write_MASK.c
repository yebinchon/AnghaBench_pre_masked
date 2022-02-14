
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct broadsheetfb_par {int dummy; } ;


 int FUNC_0 (struct broadsheetfb_par*) ;
 int FUNC_1 (struct broadsheetfb_par*) ;
 int FUNC_2 (struct broadsheetfb_par*,int *) ;
 int FUNC_3 (struct broadsheetfb_par*,int*) ;
 int FUNC_4 (struct broadsheetfb_par*,int,int) ;

__attribute__((used)) static int FUNC_5(struct broadsheetfb_par *VAR_0,
     u16 *VAR_1, int *VAR_2)

{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3)
  return VAR_3;

 FUNC_4(VAR_0, 0x0106, 0x0203);

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;

 return FUNC_3(VAR_0, VAR_2);
}
