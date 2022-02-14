
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long u8 ;
struct ov965x {TYPE_3__* fiv; TYPE_1__* frame_size; } ;
struct TYPE_5__ {unsigned long denominator; unsigned long numerator; } ;
struct TYPE_6__ {TYPE_2__ interval; } ;
struct TYPE_4__ {unsigned long max_exp_lines; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ov965x*,int ,unsigned long*) ;
 int FUNC_2 (struct ov965x*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct ov965x *VAR_6, int VAR_7)
{
 unsigned long VAR_8, VAR_9;
 int VAR_10;
 u8 VAR_11;

 VAR_10 = FUNC_1(VAR_6, VAR_2, &VAR_11);
 if (!VAR_10) {
  if (VAR_7 == VAR_5)
   VAR_11 &= ~VAR_0;
  else
   VAR_11 |= VAR_0;
  VAR_10 = FUNC_2(VAR_6, VAR_2, VAR_11);
 }
 if (VAR_7 == VAR_5)
  return 0;
 if (FUNC_0(!VAR_6->fiv))
  return -VAR_1;

 if (VAR_7 == VAR_4)
  VAR_9 = 50;
 else
  VAR_9 = 60;
 VAR_8 = (1000UL * VAR_6->fiv->interval.denominator *
        VAR_6->frame_size->max_exp_lines) /
        VAR_6->fiv->interval.numerator;
 VAR_8 = ((VAR_8 / (VAR_9 * 2)) + 500) / 1000UL;

 return FUNC_2(VAR_6, VAR_3, VAR_8);
}
