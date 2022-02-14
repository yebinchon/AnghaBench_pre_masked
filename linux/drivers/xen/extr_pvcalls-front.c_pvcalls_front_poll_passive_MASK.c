
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_9__ {uintptr_t id; } ;
struct TYPE_10__ {TYPE_3__ poll; } ;
struct xen_pvcalls_request {int req_id; TYPE_4__ u; int cmd; } ;
struct TYPE_8__ {int flags; int inflight_accept_req; int inflight_req_id; } ;
struct sock_mapping {TYPE_2__ passive; } ;
struct TYPE_11__ {int req_prod_pvt; } ;
struct pvcalls_bedata {int inflight_req; int irq; int socket_lock; TYPE_5__ ring; TYPE_1__* rsp; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_7__ {int req_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t FUNC_0 (int ) ;
 struct xen_pvcalls_request* FUNC_1 (TYPE_5__*,int) ;
 int FUNC_2 (TYPE_5__*,int) ;
 int FUNC_3 (struct pvcalls_bedata*,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct file*,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,void*) ;
 scalar_t__ FUNC_9 (int ,void*) ;
 scalar_t__ FUNC_10 (int ,void*) ;

__attribute__((used)) static __poll_t FUNC_11(struct file *VAR_7,
            struct pvcalls_bedata *VAR_8,
            struct sock_mapping *VAR_9,
            poll_table *VAR_10)
{
 int VAR_11, VAR_12, VAR_13;
 struct xen_pvcalls_request *VAR_14;

 if (FUNC_10(VAR_2,
       (void *)&VAR_9->passive.flags)) {
  uint32_t VAR_15 = FUNC_0(VAR_9->passive.inflight_req_id);

  if (VAR_15 != VAR_5 &&
      FUNC_0(VAR_8->rsp[VAR_15].req_id) == VAR_15)
   return VAR_0 | VAR_1;

  FUNC_5(VAR_7, &VAR_9->passive.inflight_accept_req, VAR_10);
  return 0;
 }

 if (FUNC_8(VAR_4,
          (void *)&VAR_9->passive.flags))
  return VAR_0 | VAR_1;







 if (FUNC_9(VAR_3,
        (void *)&VAR_9->passive.flags)) {
  FUNC_5(VAR_7, &VAR_8->inflight_req, VAR_10);
  return 0;
 }

 FUNC_6(&VAR_8->socket_lock);
 VAR_13 = FUNC_3(VAR_8, &VAR_12);
 if (VAR_13 < 0) {
  FUNC_7(&VAR_8->socket_lock);
  return VAR_13;
 }
 VAR_14 = FUNC_1(&VAR_8->ring, VAR_12);
 VAR_14->req_id = VAR_12;
 VAR_14->cmd = VAR_6;
 VAR_14->u.poll.id = (uintptr_t) VAR_9;

 VAR_8->ring.req_prod_pvt++;
 FUNC_2(&VAR_8->ring, VAR_11);
 FUNC_7(&VAR_8->socket_lock);
 if (VAR_11)
  FUNC_4(VAR_8->irq);

 FUNC_5(VAR_7, &VAR_8->inflight_req, VAR_10);
 return 0;
}
