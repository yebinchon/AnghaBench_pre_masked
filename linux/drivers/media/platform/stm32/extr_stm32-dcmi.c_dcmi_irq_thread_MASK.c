
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_dcmi {int misr; scalar_t__ overrun_count; int irqlock; TYPE_1__* sd_format; int errors_count; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct stm32_dcmi*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_6, void *VAR_7)
{
 struct stm32_dcmi *VAR_8 = VAR_7;

 FUNC_1(&VAR_8->irqlock);

 if (VAR_8->misr & VAR_3) {
  VAR_8->overrun_count++;
  if (VAR_8->overrun_count > VAR_4)
   VAR_8->errors_count++;
 }
 if (VAR_8->misr & VAR_1)
  VAR_8->errors_count++;

 if (VAR_8->sd_format->fourcc == VAR_5 &&
     VAR_8->misr & VAR_2) {

  FUNC_2(&VAR_8->irqlock);
  FUNC_0(VAR_8);
  return VAR_0;
 }

 FUNC_2(&VAR_8->irqlock);
 return VAR_0;
}
