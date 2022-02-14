
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u8 ;
struct ov965x_ctrls {int brightness; TYPE_2__* exposure; TYPE_1__* auto_exp; } ;
struct ov965x {int exp_row_interval; struct ov965x_ctrls ctrls; } ;
struct TYPE_4__ {int val; scalar_t__ is_new; } ;
struct TYPE_3__ {scalar_t__ is_new; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ov965x*,int ,unsigned int*) ;
 int FUNC_1 (struct ov965x*,int ,unsigned int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct ov965x *VAR_7, int VAR_8)
{
 struct ov965x_ctrls *VAR_9 = &VAR_7->ctrls;
 bool VAR_10 = (VAR_8 == VAR_6);
 int VAR_11;
 u8 VAR_12;

 if (VAR_9->auto_exp->is_new) {
  VAR_11 = FUNC_0(VAR_7, VAR_5, &VAR_12);
  if (VAR_11 < 0)
   return VAR_11;
  if (VAR_10)
   VAR_12 |= (VAR_0 | VAR_1);
  else
   VAR_12 &= ~(VAR_0 | VAR_1);
  VAR_11 = FUNC_1(VAR_7, VAR_5, VAR_12);
  if (VAR_11 < 0)
   return VAR_11;
 }

 if (!VAR_10 && VAR_9->exposure->is_new) {
  unsigned int VAR_13 = (VAR_9->exposure->val * 100)
      / VAR_7->exp_row_interval;




  VAR_11 = FUNC_1(VAR_7, VAR_4, VAR_13 & 0x3);
  if (!VAR_11)
   VAR_11 = FUNC_1(VAR_7, VAR_2,
        (VAR_13 >> 2) & 0xff);
  if (!VAR_11)
   VAR_11 = FUNC_1(VAR_7, VAR_3,
        (VAR_13 >> 10) & 0x3f);

  VAR_9->exposure->val = ((VAR_13 * VAR_7->exp_row_interval)
       + 50) / 100;
  if (VAR_11 < 0)
   return VAR_11;
 }

 FUNC_2(VAR_7->ctrls.brightness, !VAR_8);
 return 0;
}
