
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _adapter {int bup; int driver_stopped; int hw_init_completed; int (* dvobj_deinit ) (struct _adapter*) ;int surprise_removed; } ;


 int FUNC_0 (struct _adapter*) ;
 int FUNC_1 (struct _adapter*) ;
 int FUNC_2 (struct _adapter*) ;
 int FUNC_3 (struct _adapter*) ;

void FUNC_4(struct _adapter *VAR_0)
{
 if (VAR_0->bup) {

  VAR_0->driver_stopped = 1;


  FUNC_2(VAR_0);


  FUNC_0(VAR_0);


  if (!VAR_0->surprise_removed) {
   VAR_0->hw_init_completed = 0;
   FUNC_1(VAR_0);
  }


  if (VAR_0->dvobj_deinit)
   VAR_0->dvobj_deinit(VAR_0);
  VAR_0->bup = 0;
 }
}
