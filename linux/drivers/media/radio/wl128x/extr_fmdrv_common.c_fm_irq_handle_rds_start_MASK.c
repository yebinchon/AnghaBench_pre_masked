
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flag; int mask; int stage; } ;
struct fmdev {TYPE_1__ irq_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fmdev*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct fmdev *VAR_3)
{
 if (VAR_3->irq_info.flag & VAR_1 & VAR_3->irq_info.mask) {
  FUNC_1("irq: rds threshold reached\n");
  VAR_3->irq_info.stage = VAR_2;
 } else {

  VAR_3->irq_info.stage = VAR_0;
 }

 FUNC_0(VAR_3);
}
