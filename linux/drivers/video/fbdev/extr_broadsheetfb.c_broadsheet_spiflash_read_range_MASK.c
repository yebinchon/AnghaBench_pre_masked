
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct broadsheetfb_par {int dummy; } ;


 int FUNC_0 (struct broadsheetfb_par*,int,int) ;
 int FUNC_1 (struct broadsheetfb_par*,char*) ;
 int FUNC_2 (struct broadsheetfb_par*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct broadsheetfb_par *VAR_0,
      int VAR_1, int VAR_2, char *VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_0, 0x03, VAR_1);
 if (VAR_4)
  goto failout;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4 = FUNC_1(VAR_0, &VAR_3[VAR_5]);
  if (VAR_4)
   goto failout;
 }

failout:
 FUNC_2(VAR_0, 0x0208, 0);
 return VAR_4;
}
