
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct xenbus_device {int dev; } ;
struct TYPE_8__ {scalar_t__ id; } ;
struct TYPE_9__ {TYPE_1__ poll; } ;
struct xen_pvcalls_response {int req_id; scalar_t__ cmd; TYPE_2__ u; } ;
struct TYPE_10__ {int flags; } ;
struct sock_mapping {TYPE_3__ passive; } ;
struct TYPE_12__ {int rsp_cons; } ;
struct pvcalls_bedata {int inflight_req; TYPE_5__ ring; TYPE_4__* rsp; } ;
typedef int irqreturn_t ;
struct TYPE_11__ {int req_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_5__*,int) ;
 struct xen_pvcalls_response* FUNC_1 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ,void*) ;
 struct pvcalls_bedata* FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,void*) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_4, void *VAR_5)
{
 struct xenbus_device *VAR_6 = VAR_5;
 struct pvcalls_bedata *VAR_7;
 struct xen_pvcalls_response *VAR_8;
 uint8_t *VAR_9, *VAR_10;
 int VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;

 if (VAR_6 == ((void*)0))
  return VAR_0;

 FUNC_6();
 VAR_7 = FUNC_4(&VAR_6->dev);
 if (VAR_7 == ((void*)0)) {
  FUNC_7();
  return VAR_0;
 }

again:
 while (FUNC_2(&VAR_7->ring)) {
  VAR_8 = FUNC_1(&VAR_7->ring, VAR_7->ring.rsp_cons);

  VAR_11 = VAR_8->req_id;
  if (VAR_8->cmd == VAR_3) {
   struct sock_mapping *VAR_14 = (struct sock_mapping *)(uintptr_t)
         VAR_8->u.poll.id;

   FUNC_3(VAR_1,
      (void *)&VAR_14->passive.flags);





   FUNC_9();
   FUNC_8(VAR_2,
    (void *)&VAR_14->passive.flags);
  } else {
   VAR_10 = (uint8_t *)&VAR_7->rsp[VAR_11] +
         sizeof(VAR_8->req_id);
   VAR_9 = (uint8_t *)VAR_8 + sizeof(VAR_8->req_id);
   FUNC_5(VAR_10, VAR_9, sizeof(*VAR_8) - sizeof(VAR_8->req_id));




   FUNC_9();
   VAR_7->rsp[VAR_11].req_id = VAR_11;
  }

  VAR_13 = 1;
  VAR_7->ring.rsp_cons++;
 }

 FUNC_0(&VAR_7->ring, VAR_12);
 if (VAR_12)
  goto again;
 if (VAR_13)
  FUNC_10(&VAR_7->inflight_req);
 FUNC_7();
 return VAR_0;
}
