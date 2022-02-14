
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xpc_channel {int kthreads_active; int number; int partid; int key; int (* func ) (int ,int ,int ,void*,int ) ;} ;
struct TYPE_2__ {void* (* get_deliverable_payload ) (struct xpc_channel*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,void*,int ,int ) ;
 void* FUNC_3 (struct xpc_channel*) ;
 int FUNC_4 (int ,int ,int ,void*,int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct xpc_channel*) ;

void
FUNC_6(struct xpc_channel *VAR_3)
{
 void *VAR_4;

 VAR_4 = VAR_1.get_deliverable_payload(VAR_3);
 if (VAR_4 != ((void*)0)) {






  FUNC_5(VAR_3);

  FUNC_1(&VAR_3->kthreads_active);

  if (VAR_3->func != ((void*)0)) {
   FUNC_2(VAR_2, "ch->func() called, payload=0x%p "
    "partid=%d channel=%d\n", VAR_4, VAR_3->partid,
    VAR_3->number);


   VAR_3->func(VAR_0, VAR_3->partid, VAR_3->number, VAR_4,
     VAR_3->key);

   FUNC_2(VAR_2, "ch->func() returned, payload=0x%p "
    "partid=%d channel=%d\n", VAR_4, VAR_3->partid,
    VAR_3->number);
  }

  FUNC_0(&VAR_3->kthreads_active);
 }
}
