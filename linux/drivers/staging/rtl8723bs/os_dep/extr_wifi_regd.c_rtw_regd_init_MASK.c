
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct adapter {TYPE_1__* rtw_wdev; } ;
struct TYPE_2__ {struct wiphy* wiphy; } ;


 int FUNC_0 (int *,struct wiphy*,void (*) (struct wiphy*,struct regulatory_request*)) ;

int FUNC_1(struct adapter *VAR_0,
    void (*VAR_1)(struct wiphy *VAR_2,
           struct regulatory_request *VAR_3))
{
 struct wiphy *VAR_4 = VAR_0->rtw_wdev->wiphy;

 FUNC_0(((void*)0), VAR_4, VAR_1);

 return 0;
}
