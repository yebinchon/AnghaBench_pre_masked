
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flag; int mask; } ;
struct fmdev {TYPE_1__ irq_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fmdev*,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct fmdev *VAR_2)
{
 if (VAR_2->irq_info.flag & VAR_0 & VAR_2->irq_info.mask)
  FUNC_1("irq: HW MAL int received - do nothing\n");


 FUNC_0(VAR_2, VAR_1);
}
