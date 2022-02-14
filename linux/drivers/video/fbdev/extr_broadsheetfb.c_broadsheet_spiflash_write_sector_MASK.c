
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct broadsheetfb_par {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct broadsheetfb_par*,int,char const*) ;

__attribute__((used)) static int FUNC_1(struct broadsheetfb_par *VAR_1,
    int VAR_2, const char *VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5 += VAR_0) {
  VAR_6 = FUNC_0(VAR_1, VAR_2 + VAR_5, &VAR_3[VAR_5]);
  if (VAR_6)
   return VAR_6;
 }
 return 0;
}
