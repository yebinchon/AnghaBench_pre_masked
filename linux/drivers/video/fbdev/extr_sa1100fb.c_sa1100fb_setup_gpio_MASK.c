
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_3__ {int bits_per_pixel; } ;
struct TYPE_4__ {TYPE_1__ var; } ;
struct sa1100fb_info {int reg_lccr0; TYPE_2__ fb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static void FUNC_2(struct sa1100fb_info *VAR_14)
{
 u_int VAR_15 = 0;
 if ((VAR_14->reg_lccr0 & VAR_11) == VAR_12 &&
     (VAR_14->reg_lccr0 & (VAR_13|VAR_10)) != 0) {
  VAR_15 = VAR_3 | VAR_2 | VAR_9 | VAR_8;

  if (VAR_14->fb.var.bits_per_pixel > 8 ||
      (VAR_14->reg_lccr0 & (VAR_13|VAR_10)) == VAR_13)
   VAR_15 |= VAR_7 | VAR_6 | VAR_5 | VAR_4;

 }

 if (VAR_15) {
  unsigned long VAR_16;
  FUNC_1(VAR_16);
  VAR_1 |= VAR_15;
  VAR_0 |= VAR_15;
  FUNC_0(VAR_16);
 }
}
