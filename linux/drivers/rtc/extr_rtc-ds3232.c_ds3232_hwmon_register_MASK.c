
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds3232 {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,char*,int ) ;
 struct ds3232* FUNC_4 (struct device*) ;
 struct device* FUNC_5 (struct device*,char const*,struct ds3232*,int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(struct device *VAR_2, const char *VAR_3)
{
 struct ds3232 *VAR_4 = FUNC_4(VAR_2);
 struct device *VAR_5;

 if (!FUNC_0(VAR_0))
  return;

 VAR_5 = FUNC_5(VAR_2, VAR_3, VAR_4,
       &VAR_1,
       ((void*)0));
 if (FUNC_1(VAR_5)) {
  FUNC_3(VAR_2, "unable to register hwmon device %ld\n",
   FUNC_2(VAR_5));
 }
}
