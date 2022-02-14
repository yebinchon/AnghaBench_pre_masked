
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct regulator* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct regulator*) ;
 struct regulator* FUNC_2 (struct device*,char const*,int) ;
 int VAR_2 ;
 int FUNC_3 (struct device*,struct regulator**) ;
 struct regulator** FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct regulator**) ;

__attribute__((used)) static struct regulator *FUNC_6(struct device *VAR_3, const char *VAR_4,
          int VAR_5)
{
 struct regulator **VAR_6, *VAR_7;

 VAR_6 = FUNC_4(VAR_2, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5);
 if (!FUNC_1(VAR_7)) {
  *VAR_6 = VAR_7;
  FUNC_3(VAR_3, VAR_6);
 } else {
  FUNC_5(VAR_6);
 }

 return VAR_7;
}
