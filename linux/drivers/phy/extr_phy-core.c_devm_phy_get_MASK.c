
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct phy* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct phy*) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,struct phy**) ;
 struct phy** FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct phy**) ;
 struct phy* FUNC_5 (struct device*,char const*) ;

struct phy *FUNC_6(struct device *VAR_3, const char *VAR_4)
{
 struct phy **VAR_5, *VAR_6;

 VAR_5 = FUNC_3(VAR_2, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_5(VAR_3, VAR_4);
 if (!FUNC_1(VAR_6)) {
  *VAR_5 = VAR_6;
  FUNC_2(VAR_3, VAR_5);
 } else {
  FUNC_4(VAR_5);
 }

 return VAR_6;
}
