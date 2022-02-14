
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {TYPE_2__* blue_balance; TYPE_1__* red_balance; } ;
struct ov5640_dev {TYPE_3__ ctrls; } ;
struct TYPE_5__ {int val; } ;
struct TYPE_4__ {int val; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ov5640_dev*,int ,int ,int) ;
 int FUNC_2 (struct ov5640_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ov5640_dev *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_1,
        FUNC_0(0), VAR_4 ? 0 : 1);
 if (VAR_5)
  return VAR_5;

 if (!VAR_4) {
  u16 VAR_6 = (u16)VAR_3->ctrls.red_balance->val;
  u16 VAR_7 = (u16)VAR_3->ctrls.blue_balance->val;

  VAR_5 = FUNC_2(VAR_3, VAR_2, VAR_6);
  if (VAR_5)
   return VAR_5;
  VAR_5 = FUNC_2(VAR_3, VAR_0, VAR_7);
 }

 return VAR_5;
}
