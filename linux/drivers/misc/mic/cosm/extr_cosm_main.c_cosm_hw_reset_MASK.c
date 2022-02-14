
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cosm_device {TYPE_1__* hw_ops; } ;
struct TYPE_2__ {scalar_t__ (* ready ) (struct cosm_device*) ;int (* reset ) (struct cosm_device*) ;int (* force_reset ) (struct cosm_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cosm_device*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct cosm_device*) ;
 int FUNC_3 (struct cosm_device*) ;
 scalar_t__ FUNC_4 (struct cosm_device*) ;

__attribute__((used)) static void FUNC_5(struct cosm_device *VAR_3, bool VAR_4)
{
 int VAR_5;


 if (VAR_4 && VAR_3->hw_ops->force_reset)
  VAR_3->hw_ops->force_reset(VAR_3);
 else
  VAR_3->hw_ops->reset(VAR_3);

 for (VAR_5 = 0; VAR_5 < (45); VAR_5++) {
  if (VAR_3->hw_ops->ready(VAR_3)) {
   FUNC_0(VAR_3, VAR_0);
   return;
  }





  FUNC_1(1000);
 }
 FUNC_0(VAR_3, VAR_1);
}
