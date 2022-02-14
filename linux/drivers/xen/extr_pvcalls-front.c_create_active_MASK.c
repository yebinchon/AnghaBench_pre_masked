
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* in; } ;
struct TYPE_9__ {int irq; int out_mutex; int in_mutex; TYPE_2__* ring; void* ref; TYPE_1__ data; int inflight_conn_req; } ;
struct sock_mapping {int active_socket; TYPE_3__ active; } ;
struct TYPE_10__ {int otherend_id; } ;
struct TYPE_8__ {void** ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ,char*,struct sock_mapping*) ;
 void* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 scalar_t__ FUNC_5 (void*) ;
 int FUNC_6 (TYPE_4__*,int*) ;
 int FUNC_7 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_8(struct sock_mapping *VAR_4, int *VAR_5)
{
 void *VAR_6;
 int VAR_7 = -VAR_0, VAR_8 = -1, VAR_9;

 *VAR_5 = -1;
 FUNC_2(&VAR_4->active.inflight_conn_req);

 VAR_6 = VAR_4->active.data.in;
 for (VAR_9 = 0; VAR_9 < (1 << VAR_1); VAR_9++)
  VAR_4->active.ring->ref[VAR_9] = FUNC_1(
   VAR_3->otherend_id,
   FUNC_4(FUNC_5(VAR_6) + VAR_9), 0);

 VAR_4->active.ref = FUNC_1(
  VAR_3->otherend_id,
  FUNC_4(FUNC_5((void *)VAR_4->active.ring)), 0);

 VAR_7 = FUNC_6(VAR_3, VAR_5);
 if (VAR_7)
  goto out_error;
 VAR_8 = FUNC_0(*VAR_5, VAR_2,
     0, "pvcalls-frontend", VAR_4);
 if (VAR_8 < 0) {
  VAR_7 = VAR_8;
  goto out_error;
 }

 VAR_4->active.irq = VAR_8;
 VAR_4->active_socket = 1;
 FUNC_3(&VAR_4->active.in_mutex);
 FUNC_3(&VAR_4->active.out_mutex);

 return 0;

out_error:
 if (*VAR_5 >= 0)
  FUNC_7(VAR_3, *VAR_5);
 return VAR_7;
}
