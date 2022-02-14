
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 struct device* FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, struct device **VAR_2,
      char **VAR_3)
{
 size_t VAR_4 = 0;
 int VAR_5;
 int VAR_6;

 if (!VAR_3)
  return 0;

 while (VAR_3[VAR_4])
  VAR_4++;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_2[VAR_6] = FUNC_2(VAR_1, VAR_3[VAR_6]);
  if (FUNC_0(VAR_2[VAR_6])) {
   VAR_5 = FUNC_1(VAR_2[VAR_6]) ? : -VAR_0;
   goto unroll_attach;
  }
 }

 return VAR_4;

unroll_attach:
 for (VAR_6--; VAR_6 >= 0; VAR_6--)
  FUNC_3(VAR_2[VAR_6], 0);

 return VAR_5;
}
