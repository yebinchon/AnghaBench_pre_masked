
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flag; } ;
struct fmdev {int maintask_comp; TYPE_1__ irq_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct fmdev*,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct fmdev *VAR_2)
{
 if (VAR_2->irq_info.flag & VAR_1) {
  FUNC_2("irq: Power Enabled/Disabled\n");
  FUNC_0(&VAR_2->maintask_comp);
 }

 FUNC_1(VAR_2, VAR_0);
}
