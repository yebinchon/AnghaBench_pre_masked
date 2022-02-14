
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vscsiif_response {int dummy; } ;
struct TYPE_5__ {scalar_t__ rsp_cons; scalar_t__ req_prod_pvt; TYPE_1__* sring; } ;
struct vscsifrnt_info {TYPE_2__ ring; } ;
struct TYPE_4__ {scalar_t__ rsp_prod; scalar_t__ rsp_event; } ;
typedef scalar_t__ RING_IDX ;


 int FUNC_0 (TYPE_2__*,int) ;
 struct vscsiif_response* FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (struct vscsifrnt_info*,struct vscsiif_response*) ;

__attribute__((used)) static int FUNC_4(struct vscsifrnt_info *VAR_0)
{
 struct vscsiif_response *VAR_1;
 RING_IDX VAR_2, VAR_3;
 int VAR_4 = 0;

 VAR_3 = VAR_0->ring.sring->rsp_prod;
 FUNC_2();
 for (VAR_2 = VAR_0->ring.rsp_cons; VAR_2 != VAR_3; VAR_2++) {
  VAR_1 = FUNC_1(&VAR_0->ring, VAR_2);
  FUNC_3(VAR_0, VAR_1);
 }

 VAR_0->ring.rsp_cons = VAR_2;

 if (VAR_2 != VAR_0->ring.req_prod_pvt)
  FUNC_0(&VAR_0->ring, VAR_4);
 else
  VAR_0->ring.sring->rsp_event = VAR_2 + 1;

 return VAR_4;
}
