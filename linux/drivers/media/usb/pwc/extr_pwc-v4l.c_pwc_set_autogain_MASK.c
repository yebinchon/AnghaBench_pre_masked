
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pwc_device {int gain_valid; TYPE_1__* gain; TYPE_2__* autogain; } ;
struct TYPE_4__ {scalar_t__ val; scalar_t__ is_new; } ;
struct TYPE_3__ {int val; scalar_t__ is_new; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pwc_device*,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct pwc_device *VAR_3)
{
 int VAR_4;

 if (VAR_3->autogain->is_new) {
  VAR_4 = FUNC_0(VAR_3, VAR_2,
          VAR_0,
          VAR_3->autogain->val ? 0 : 0xff);
  if (VAR_4)
   return VAR_4;

  if (VAR_3->autogain->val)
   VAR_3->gain_valid = 0;
 }

 if (VAR_3->autogain->val)
  return 0;

 if (VAR_3->gain->is_new) {
  VAR_4 = FUNC_0(VAR_3, VAR_2,
          VAR_1,
          VAR_3->gain->val);
  if (VAR_4)
   return VAR_4;
 }
 return 0;
}
