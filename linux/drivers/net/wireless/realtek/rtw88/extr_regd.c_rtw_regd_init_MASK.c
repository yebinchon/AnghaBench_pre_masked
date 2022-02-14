
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct TYPE_4__ {int country_code; } ;
struct rtw_dev {int regd; TYPE_2__ efuse; TYPE_1__* hw; } ;
struct TYPE_3__ {struct wiphy* wiphy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct wiphy*,void (*) (struct wiphy*,struct regulatory_request*)) ;

int FUNC_2(struct rtw_dev *VAR_1,
    void (*VAR_2)(struct wiphy *VAR_3,
           struct regulatory_request *VAR_4))
{
 struct wiphy *VAR_5 = VAR_1->hw->wiphy;

 if (!VAR_5)
  return -VAR_0;

 VAR_1->regd = FUNC_0(VAR_1->efuse.country_code);
 FUNC_1(&VAR_1->regd, VAR_5, VAR_2);

 return 0;
}
