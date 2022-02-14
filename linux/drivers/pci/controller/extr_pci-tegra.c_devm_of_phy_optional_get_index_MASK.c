
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct phy* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct phy*) ;
 int FUNC_2 (struct phy*) ;
 struct phy* FUNC_3 (struct device*,struct device_node*,char*) ;
 char* FUNC_4 (int ,char*,char const*,unsigned int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static struct phy *FUNC_6(struct device *VAR_3,
        struct device_node *VAR_4,
        const char *VAR_5,
        unsigned int VAR_6)
{
 struct phy *VAR_7;
 char *VAR_8;

 VAR_8 = FUNC_4(VAR_2, "%s-%u", VAR_5, VAR_6);
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_8);
 FUNC_5(VAR_8);

 if (FUNC_1(VAR_7) && FUNC_2(VAR_7) == -VAR_0)
  VAR_7 = ((void*)0);

 return VAR_7;
}
