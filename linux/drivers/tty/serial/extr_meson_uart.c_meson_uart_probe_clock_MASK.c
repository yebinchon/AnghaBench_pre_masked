
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct clk {int dummy; } ;


 struct clk* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct clk*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,void (*) (void*),struct clk*) ;
 struct clk* FUNC_5 (struct device*,char const*) ;

__attribute__((used)) static inline struct clk *FUNC_6(struct device *VAR_1,
       const char *VAR_2)
{
 struct clk *VAR_3 = ((void*)0);
 int VAR_4;

 VAR_3 = FUNC_5(VAR_1, VAR_2);
 if (FUNC_1(VAR_3))
  return VAR_3;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4) {
  FUNC_3(VAR_1, "couldn't enable clk\n");
  return FUNC_0(VAR_4);
 }

 FUNC_4(VAR_1,
   (void(*)(void *))VAR_0,
   VAR_3);

 return VAR_3;
}
