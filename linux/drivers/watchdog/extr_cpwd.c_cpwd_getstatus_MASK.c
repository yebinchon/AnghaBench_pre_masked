
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpwd {TYPE_1__* devs; scalar_t__ broken; } ;
struct TYPE_2__ {unsigned char intr_mask; int runstatus; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct cpwd *VAR_11, int VAR_12)
{
 unsigned char VAR_13 = FUNC_0(VAR_11->devs[VAR_12].regs + VAR_5);
 unsigned char VAR_14 = FUNC_0(VAR_11->devs[VAR_12].regs + VAR_0);
 unsigned char VAR_15 = VAR_8;


 if (!VAR_13)
  return VAR_15;


 else if (VAR_9 & VAR_13) {
  VAR_15 = VAR_1;
 } else if (VAR_10 & VAR_13) {
  if (VAR_14 & VAR_11->devs[VAR_12].intr_mask) {
   VAR_15 = VAR_2;
  } else {
   if (VAR_11->broken &&
       (VAR_11->devs[VAR_12].runstatus & VAR_6)) {
    if (VAR_11->devs[VAR_12].runstatus & VAR_7) {
     VAR_15 = VAR_1;
    } else {


     VAR_15 = VAR_2;
    }
   } else {
    VAR_15 = VAR_3;
   }
  }
 }


 if (VAR_11->devs[VAR_12].runstatus & VAR_7)
  VAR_15 |= VAR_4;

 return VAR_15;
}
