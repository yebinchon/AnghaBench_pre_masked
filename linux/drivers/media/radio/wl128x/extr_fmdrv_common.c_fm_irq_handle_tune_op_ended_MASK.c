
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flag; int mask; void* stage; } ;
struct fmdev {TYPE_1__ irq_info; int maintask_comp; int flag; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct fmdev*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct fmdev *VAR_5)
{
 if (VAR_5->irq_info.flag & (VAR_3 | VAR_2) & VAR_5->
     irq_info.mask) {
  FUNC_2("irq: tune ended/bandlimit reached\n");
  if (FUNC_3(VAR_1, &VAR_5->flag)) {
   VAR_5->irq_info.stage = VAR_0;
  } else {
   FUNC_0(&VAR_5->maintask_comp);
   VAR_5->irq_info.stage = VAR_4;
  }
 } else
  VAR_5->irq_info.stage = VAR_4;

 FUNC_1(VAR_5);
}
