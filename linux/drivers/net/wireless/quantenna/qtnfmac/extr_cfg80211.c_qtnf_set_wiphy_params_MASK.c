
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wiphy {int dummy; } ;
struct qtnf_wmac {int macid; } ;
struct qtnf_vif {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct qtnf_wmac*,int ) ;
 struct qtnf_vif* FUNC_2 (struct qtnf_wmac*) ;
 struct qtnf_wmac* FUNC_3 (struct wiphy*) ;

__attribute__((used)) static int FUNC_4(struct wiphy *VAR_1, u32 VAR_2)
{
 struct qtnf_wmac *VAR_3 = FUNC_3(VAR_1);
 struct qtnf_vif *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_3);
 if (!VAR_4) {
  FUNC_0("MAC%u: primary VIF is not configured\n", VAR_3->macid);
  return -VAR_0;
 }

 VAR_5 = FUNC_1(VAR_3, VAR_2);
 if (VAR_5)
  FUNC_0("MAC%u: failed to update PHY params\n", VAR_3->macid);

 return VAR_5;
}
