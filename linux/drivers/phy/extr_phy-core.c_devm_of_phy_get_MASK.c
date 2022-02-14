
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct phy* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct phy*) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,struct phy**) ;
 struct phy** FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct phy**) ;
 struct phy* FUNC_5 (struct device_node*,char const*) ;

struct phy *FUNC_6(struct device *VAR_3, struct device_node *VAR_4,
       const char *VAR_5)
{
 struct phy **VAR_6, *VAR_7;

 VAR_6 = FUNC_3(VAR_2, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_5(VAR_4, VAR_5);
 if (!FUNC_1(VAR_7)) {
  *VAR_6 = VAR_7;
  FUNC_2(VAR_3, VAR_6);
 } else {
  FUNC_4(VAR_6);
 }

 return VAR_7;
}
