
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pxafb_mach_info {int lccr0; int lccr3; TYPE_1__* modes; scalar_t__ lcd_conn; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ lower_margin; scalar_t__ upper_margin; } ;


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
 int FUNC_0 (struct device*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_11, struct pxafb_mach_info *VAR_12)
{
 if (VAR_12->lcd_conn)
  return;

 if (VAR_12->lccr0 & VAR_4)
  FUNC_0(VAR_11, "machine LCCR0 setting contains "
    "illegal bits: %08x\n",
   VAR_12->lccr0 & VAR_4);
 if (VAR_12->lccr3 & VAR_10)
  FUNC_0(VAR_11, "machine LCCR3 setting contains "
    "illegal bits: %08x\n",
   VAR_12->lccr3 & VAR_10);
 if (VAR_12->lccr0 & VAR_2 &&
     ((VAR_12->lccr0 & VAR_6) != VAR_7 ||
      (VAR_12->lccr0 & VAR_8) != VAR_9 ||
      (VAR_12->lccr0 & VAR_1) != VAR_5))
  FUNC_0(VAR_11, "Double Pixel Data (DPD) mode is "
    "only valid in passive mono"
    " single panel mode\n");
 if ((VAR_12->lccr0 & VAR_6) == VAR_0 &&
     (VAR_12->lccr0 & VAR_8) == VAR_3)
  FUNC_0(VAR_11, "Dual panel only valid in passive mode\n");
 if ((VAR_12->lccr0 & VAR_6) == VAR_7 &&
      (VAR_12->modes->upper_margin || VAR_12->modes->lower_margin))
  FUNC_0(VAR_11, "Upper and lower margins must be 0 in "
    "passive mode\n");
}
