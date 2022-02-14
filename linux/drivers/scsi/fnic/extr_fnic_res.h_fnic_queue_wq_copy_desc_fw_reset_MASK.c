
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct vnic_wq_copy {int dummy; } ;
struct TYPE_4__ {int req_id; } ;
struct TYPE_5__ {TYPE_1__ u; } ;
struct TYPE_6__ {TYPE_2__ tag; scalar_t__ _resvd; scalar_t__ status; int type; } ;
struct fcpio_host_req {TYPE_3__ hdr; } ;


 int VAR_0 ;
 struct fcpio_host_req* FUNC_0 (struct vnic_wq_copy*) ;
 int FUNC_1 (struct vnic_wq_copy*) ;

__attribute__((used)) static inline void FUNC_2(struct vnic_wq_copy *VAR_1,
          u32 VAR_2)
{
 struct fcpio_host_req *VAR_3 = FUNC_0(VAR_1);

 VAR_3->hdr.type = VAR_0;
 VAR_3->hdr.status = 0;
 VAR_3->hdr._resvd = 0;
 VAR_3->hdr.tag.u.req_id = VAR_2;

 FUNC_1(VAR_1);
}
