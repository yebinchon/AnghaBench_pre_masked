
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u8 ;
struct ov965x_ctrls {TYPE_2__* gain; TYPE_1__* auto_gain; } ;
struct ov965x {struct ov965x_ctrls ctrls; } ;
struct TYPE_4__ {unsigned int val; scalar_t__ is_new; } ;
struct TYPE_3__ {scalar_t__ val; scalar_t__ is_new; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct ov965x*,int ,unsigned int*) ;
 int FUNC_1 (struct ov965x*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct ov965x *VAR_6, int VAR_7)
{
 struct ov965x_ctrls *VAR_8 = &VAR_6->ctrls;
 int VAR_9 = 0;
 u8 VAR_10;




 if (VAR_8->auto_gain->is_new) {
  VAR_9 = FUNC_0(VAR_6, VAR_2, &VAR_10);
  if (VAR_9 < 0)
   return VAR_9;
  if (VAR_8->auto_gain->val)
   VAR_10 |= VAR_0;
  else
   VAR_10 &= ~VAR_0;
  VAR_9 = FUNC_1(VAR_6, VAR_2, VAR_10);
  if (VAR_9 < 0)
   return VAR_9;
 }

 if (VAR_8->gain->is_new && !VAR_7) {
  unsigned int VAR_11 = VAR_8->gain->val;
  unsigned int VAR_12;
  int VAR_13;




  for (VAR_13 = 6; VAR_13 >= 0; VAR_13--)
   if (VAR_11 >= (1 << VAR_13) * 16)
    break;


  if (VAR_13 < 0)
   return -VAR_1;

  VAR_12 = (VAR_11 - ((1 << VAR_13) * 16)) / (1 << VAR_13);
  VAR_12 |= (((1 << VAR_13) - 1) << 4);

  VAR_9 = FUNC_1(VAR_6, VAR_3, VAR_12 & 0xff);
  if (VAR_9 < 0)
   return VAR_9;
  VAR_9 = FUNC_0(VAR_6, VAR_4, &VAR_10);
  if (VAR_9 < 0)
   return VAR_9;
  VAR_10 &= ~VAR_5;
  VAR_10 |= (((VAR_12 >> 8) & 0x3) << 6);
  VAR_9 = FUNC_1(VAR_6, VAR_4, VAR_10);
  if (VAR_9 < 0)
   return VAR_9;

  VAR_8->gain->val = (1 << VAR_13) * (16 + (VAR_12 & 0xf));
 }

 return VAR_9;
}
