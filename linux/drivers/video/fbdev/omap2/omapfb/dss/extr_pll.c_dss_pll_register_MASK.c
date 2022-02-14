
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dss_pll {int dummy; } ;


 int FUNC_0 (struct dss_pll**) ;
 int VAR_0 ;
 struct dss_pll** VAR_1 ;

int FUNC_1(struct dss_pll *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); ++VAR_3) {
  if (!VAR_1[VAR_3]) {
   VAR_1[VAR_3] = VAR_2;
   return 0;
  }
 }

 return -VAR_0;
}
