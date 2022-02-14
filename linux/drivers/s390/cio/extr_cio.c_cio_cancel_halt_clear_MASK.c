
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ena; } ;
struct TYPE_4__ {int scsw; TYPE_1__ pmcw; } ;
struct subchannel {TYPE_2__ schib; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct subchannel*) ;
 int FUNC_1 (struct subchannel*) ;
 int FUNC_2 (struct subchannel*) ;
 scalar_t__ FUNC_3 (struct subchannel*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct subchannel *VAR_6, int *VAR_7)
{
 int VAR_8;

 if (FUNC_3(VAR_6))
  return -VAR_3;
 if (!VAR_6->schib.pmcw.ena)

  return 0;

 if (!(FUNC_4(&VAR_6->schib.scsw) & VAR_5) &&
     !(FUNC_4(&VAR_6->schib.scsw) & VAR_4)) {
  if (!FUNC_5(&VAR_6->schib.scsw)) {
   VAR_8 = FUNC_0(VAR_6);
   if (VAR_8 != -VAR_1)
    return VAR_8;
  }




  *VAR_7 = 3;
 }

 if (!(FUNC_4(&VAR_6->schib.scsw) & VAR_4)) {
  if (*VAR_7) {
   *VAR_7 -= 1;
   VAR_8 = FUNC_2(VAR_6);
   if (VAR_8 != -VAR_0)
    return (VAR_8 == 0) ? -VAR_0 : VAR_8;
  }

  *VAR_7 = 255;
 }

 if (*VAR_7) {
  *VAR_7 -= 1;
  VAR_8 = FUNC_1(VAR_6);
  return (VAR_8 == 0) ? -VAR_0 : VAR_8;
 }

 return -VAR_2;
}
