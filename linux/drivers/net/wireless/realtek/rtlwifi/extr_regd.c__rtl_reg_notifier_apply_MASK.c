
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct rtl_regulatory {int dummy; } ;
struct regulatory_request {int initiator; } ;






 int FUNC_0 (struct wiphy*) ;
 int FUNC_1 (struct wiphy*,int,struct rtl_regulatory*) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_0,
       struct regulatory_request *VAR_1,
       struct rtl_regulatory *VAR_2)
{

 FUNC_0(VAR_0);

 switch (VAR_1->initiator) {
 case 129:
 case 131:
 case 128:
  break;
 case 130:
  FUNC_1(VAR_0, VAR_1->initiator, VAR_2);
  break;
 }

 return 0;
}
