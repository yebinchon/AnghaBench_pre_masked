
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* inirp_deinit ) (struct _adapter*) ;} ;
struct _adapter {TYPE_1__ dvobjpriv; int surprise_removed; } ;


 int FUNC_0 (struct _adapter*) ;
 int FUNC_1 (struct _adapter*) ;

void FUNC_2(struct _adapter *VAR_0)
{

 if (!VAR_0->surprise_removed) {



 }


 if (VAR_0->dvobjpriv.inirp_deinit)
  VAR_0->dvobjpriv.inirp_deinit(VAR_0);

 FUNC_0(VAR_0);

}
