
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,char const* const,int ,char const* const,int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char const* const,struct device*,char const* const) ;
 int FUNC_3 (struct device*,char const* const) ;

int FUNC_4(struct device *VAR_0,
           const char *const *VAR_1,
           struct device *VAR_2,
           const char *const *VAR_3,
           int VAR_4)
{
 int VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5) {
  VAR_6 = FUNC_2(VAR_0, VAR_1[VAR_5],
          VAR_2,
          VAR_3[VAR_5]);
  if (VAR_6 < 0)
   goto err;
 }

 return 0;

err:
 FUNC_0(VAR_0,
  "Failed to create supply alias %s,%s -> %s,%s\n",
  VAR_1[VAR_5], FUNC_1(VAR_0), VAR_3[VAR_5], FUNC_1(VAR_2));

 while (--VAR_5 >= 0)
  FUNC_3(VAR_0, VAR_1[VAR_5]);

 return VAR_6;
}
