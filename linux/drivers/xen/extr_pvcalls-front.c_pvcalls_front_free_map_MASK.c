
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ring; int ref; int irq; } ;
struct sock_mapping {TYPE_2__ active; int list; } ;
struct pvcalls_bedata {int socket_lock; } ;
struct TYPE_3__ {int * ref; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct sock_mapping*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,struct sock_mapping*) ;

__attribute__((used)) static void FUNC_8(struct pvcalls_bedata *VAR_1,
       struct sock_mapping *VAR_2)
{
 int VAR_3;

 FUNC_7(VAR_2->active.irq, VAR_2);

 FUNC_5(&VAR_1->socket_lock);
 if (!FUNC_4(&VAR_2->list))
  FUNC_3(&VAR_2->list);
 FUNC_6(&VAR_1->socket_lock);

 for (VAR_3 = 0; VAR_3 < (1 << VAR_0); VAR_3++)
  FUNC_1(VAR_2->active.ring->ref[VAR_3], 0, 0);
 FUNC_1(VAR_2->active.ref, 0, 0);
 FUNC_0((unsigned long)VAR_2->active.ring);

 FUNC_2(VAR_2);
}
