
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {void (* reg_notifier ) (struct wiphy*,struct regulatory_request*) ;int regulatory_flags; } ;
struct rtw_regulatory {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wiphy*) ;

__attribute__((used)) static int
FUNC_1(struct rtw_regulatory *VAR_3, struct wiphy *VAR_4,
      void (*VAR_5)(struct wiphy *VAR_6,
      struct regulatory_request *VAR_7))
{
 VAR_4->reg_notifier = VAR_5;

 VAR_4->regulatory_flags &= ~VAR_0;
 VAR_4->regulatory_flags &= ~VAR_2;
 VAR_4->regulatory_flags &= ~VAR_1;

 FUNC_0(VAR_4);

 return 0;
}
