
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pwc_device {int color_bal_valid; TYPE_2__* blue_balance; TYPE_1__* red_balance; TYPE_3__* auto_white_balance; } ;
struct TYPE_6__ {scalar_t__ val; scalar_t__ is_new; } ;
struct TYPE_5__ {scalar_t__ val; scalar_t__ is_new; } ;
struct TYPE_4__ {scalar_t__ val; scalar_t__ is_new; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct pwc_device*,int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct pwc_device *VAR_8)
{
 int VAR_9;

 if (VAR_8->auto_white_balance->is_new) {
  VAR_9 = FUNC_1(VAR_8, VAR_2,
          VAR_3,
          VAR_8->auto_white_balance->val);
  if (VAR_9)
   return VAR_9;

  if (VAR_8->auto_white_balance->val != VAR_6)
   VAR_8->color_bal_valid = 0;





  if (VAR_8->auto_white_balance->val == VAR_5 ||
      VAR_8->auto_white_balance->val == VAR_7 ||
      VAR_8->auto_white_balance->val == VAR_4)
   FUNC_0(VAR_8->auto_white_balance);
 }
 if (VAR_8->auto_white_balance->val != VAR_6)
  return 0;

 if (VAR_8->red_balance->is_new) {
  VAR_9 = FUNC_1(VAR_8, VAR_2,
          VAR_1,
          VAR_8->red_balance->val);
  if (VAR_9)
   return VAR_9;
 }

 if (VAR_8->blue_balance->is_new) {
  VAR_9 = FUNC_1(VAR_8, VAR_2,
          VAR_0,
          VAR_8->blue_balance->val);
  if (VAR_9)
   return VAR_9;
 }
 return 0;
}
