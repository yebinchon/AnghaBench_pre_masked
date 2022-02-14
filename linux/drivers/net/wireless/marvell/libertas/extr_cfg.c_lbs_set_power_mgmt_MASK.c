
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct lbs_private {int fwcapinfo; scalar_t__ psmode; scalar_t__ psstate; scalar_t__ connect_status; scalar_t__ is_polling; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct lbs_private*,int ,int) ;
 struct lbs_private* FUNC_1 (struct wiphy*) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_8, struct net_device *VAR_9,
         bool VAR_10, int VAR_11)
{
 struct lbs_private *VAR_12 = FUNC_1(VAR_8);

 if (!(VAR_12->fwcapinfo & VAR_1)) {
  if (!VAR_10)
   return 0;
  else
   return -VAR_0;
 }





 if (VAR_12->is_polling) {
  if (!VAR_10)
   return 0;
  else
   return -VAR_0;
 }
 if (!VAR_10) {
  VAR_12->psmode = VAR_2;
  if (VAR_12->psstate != VAR_7)
   FUNC_0(VAR_12,
     VAR_6,
     1);
  return 0;
 }
 if (VAR_12->psmode != VAR_2)
  return 0;
 VAR_12->psmode = VAR_3;
 if (VAR_12->connect_status == VAR_4)
  FUNC_0(VAR_12, VAR_5, 1);
 return 0;
}
