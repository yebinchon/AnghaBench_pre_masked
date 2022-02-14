
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct rtw_dev {int regd; } ;
struct regulatory_request {scalar_t__ initiator; int alpha2; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct wiphy*,scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct rtw_dev *VAR_1,
       struct wiphy *VAR_2,
       struct regulatory_request *VAR_3)
{
 if (VAR_3->initiator == VAR_0)
  return 0;
 VAR_1->regd = FUNC_1(VAR_3->alpha2);
 FUNC_0(VAR_2, VAR_3->initiator);

 return 0;
}
