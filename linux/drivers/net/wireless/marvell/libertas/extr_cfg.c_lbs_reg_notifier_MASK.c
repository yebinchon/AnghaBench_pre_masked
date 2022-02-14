
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct regulatory_request {int alpha2; } ;
struct lbs_private {int country_code; } ;


 scalar_t__ FUNC_0 (struct lbs_private*) ;
 int FUNC_1 (struct lbs_private*) ;
 int FUNC_2 (int ,int ,int) ;
 struct lbs_private* FUNC_3 (struct wiphy*) ;

__attribute__((used)) static void FUNC_4(struct wiphy *VAR_0,
        struct regulatory_request *VAR_1)
{
 struct lbs_private *VAR_2 = FUNC_3(VAR_0);

 FUNC_2(VAR_2->country_code, VAR_1->alpha2, sizeof(VAR_1->alpha2));
 if (FUNC_0(VAR_2))
  FUNC_1(VAR_2);
}
