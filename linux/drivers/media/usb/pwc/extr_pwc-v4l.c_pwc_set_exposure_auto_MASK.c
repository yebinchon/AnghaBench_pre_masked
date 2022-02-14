
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pwc_device {int exposure_valid; TYPE_2__* exposure; TYPE_1__* exposure_auto; } ;
struct TYPE_4__ {int val; scalar_t__ is_new; } ;
struct TYPE_3__ {scalar_t__ val; scalar_t__ is_new; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct pwc_device*,int ,int ,int ) ;
 int FUNC_1 (struct pwc_device*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct pwc_device *VAR_4)
{
 int VAR_5;
 int VAR_6 = VAR_4->exposure_auto->val == VAR_3;

 if (VAR_4->exposure_auto->is_new) {
  VAR_5 = FUNC_1(VAR_4, VAR_1,
          VAR_2,
          VAR_6 ? 0 : 0xff);
  if (VAR_5)
   return VAR_5;

  if (VAR_6)
   VAR_4->exposure_valid = 0;
 }

 if (VAR_6)
  return 0;

 if (VAR_4->exposure->is_new) {
  VAR_5 = FUNC_0(VAR_4, VAR_1,
           VAR_0,
           VAR_4->exposure->val);
  if (VAR_5)
   return VAR_5;
 }
 return 0;
}
