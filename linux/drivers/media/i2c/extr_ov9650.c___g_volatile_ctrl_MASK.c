
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct v4l2_ctrl {int id; int val; } ;
struct TYPE_6__ {TYPE_2__* exposure; TYPE_1__* gain; } ;
struct ov965x {unsigned int exp_row_interval; TYPE_3__ ctrls; int power; } ;
struct TYPE_5__ {unsigned int val; } ;
struct TYPE_4__ {unsigned int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct ov965x*,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct ov965x *VAR_6, struct v4l2_ctrl *VAR_7)
{
 unsigned int VAR_8, VAR_9, VAR_10;
 u8 VAR_11, VAR_12, VAR_13;
 int VAR_14;

 if (!VAR_6->power)
  return 0;

 switch (VAR_7->id) {
 case 129:
  if (!VAR_7->val)
   return 0;
  VAR_14 = FUNC_1(VAR_6, VAR_3, &VAR_11);
  if (VAR_14 < 0)
   return VAR_14;
  VAR_14 = FUNC_1(VAR_6, VAR_4, &VAR_12);
  if (VAR_14 < 0)
   return VAR_14;
  VAR_9 = ((VAR_12 >> 6) << 8) | VAR_11;
  VAR_10 = 0x01 << FUNC_0(VAR_9 >> 4);
  VAR_6->ctrls.gain->val = VAR_10 * (16 + (VAR_9 & 0xf));
  break;

 case 128:
  if (VAR_7->val == VAR_5)
   return 0;
  VAR_14 = FUNC_1(VAR_6, VAR_2, &VAR_11);
  if (VAR_14 < 0)
   return VAR_14;
  VAR_14 = FUNC_1(VAR_6, VAR_0, &VAR_12);
  if (VAR_14 < 0)
   return VAR_14;
  VAR_14 = FUNC_1(VAR_6, VAR_1, &VAR_13);
  if (VAR_14 < 0)
   return VAR_14;
  VAR_8 = ((VAR_13 & 0x3f) << 10) | (VAR_12 << 2) |
      (VAR_11 & 0x3);
  VAR_6->ctrls.exposure->val = ((VAR_8 *
    VAR_6->exp_row_interval) + 50) / 100;
  break;
 }

 return 0;
}
