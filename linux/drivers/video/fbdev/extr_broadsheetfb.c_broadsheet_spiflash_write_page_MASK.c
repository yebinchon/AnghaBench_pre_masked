
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct broadsheetfb_par {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct broadsheetfb_par*,int,int) ;
 int FUNC_1 (struct broadsheetfb_par*,int) ;
 int FUNC_2 (struct broadsheetfb_par*,char const) ;
 int FUNC_3 (struct broadsheetfb_par*,int) ;
 int FUNC_4 (struct broadsheetfb_par*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct broadsheetfb_par *VAR_1,
      int VAR_2, const char *VAR_3)
{
 int VAR_4;
 int VAR_5;

 FUNC_3(VAR_1, 1);

 VAR_4 = FUNC_0(VAR_1, 0x02, VAR_2);
 if (VAR_4)
  goto failout;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = FUNC_2(VAR_1, VAR_3[VAR_5]);
  if (VAR_4)
   goto failout;
 }

 FUNC_4(VAR_1, 0x0208, 0);

 VAR_4 = FUNC_1(VAR_1, 100);

failout:
 return VAR_4;
}
