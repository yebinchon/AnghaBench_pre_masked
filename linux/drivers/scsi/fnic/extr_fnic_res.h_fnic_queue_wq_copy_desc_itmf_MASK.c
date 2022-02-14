
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
struct vnic_wq_copy {int dummy; } ;
struct TYPE_9__ {void* e_d_tov; void* r_a_tov; int d_id; scalar_t__ _resvd1; int lun; scalar_t__ _resvd; void* t_tag; void* tm_req; void* lunmap_id; } ;
struct TYPE_10__ {TYPE_4__ itmf; } ;
struct TYPE_6__ {void* req_id; } ;
struct TYPE_7__ {TYPE_1__ u; } ;
struct TYPE_8__ {TYPE_2__ tag; scalar_t__ _resvd; scalar_t__ status; int type; } ;
struct fcpio_host_req {TYPE_5__ u; TYPE_3__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,void*) ;
 int FUNC_1 (int ,int *,int ) ;
 struct fcpio_host_req* FUNC_2 (struct vnic_wq_copy*) ;
 int FUNC_3 (struct vnic_wq_copy*) ;

__attribute__((used)) static inline void FUNC_4(struct vnic_wq_copy *VAR_2,
      u32 VAR_3, u32 VAR_4,
      u32 VAR_5, u32 VAR_6, u8 *VAR_7,
      u32 VAR_8, u32 VAR_9,
      u32 VAR_10)
{
 struct fcpio_host_req *VAR_11 = FUNC_2(VAR_2);

 VAR_11->hdr.type = VAR_0;
 VAR_11->hdr.status = 0;
 VAR_11->hdr._resvd = 0;
 VAR_11->hdr.tag.u.req_id = VAR_3;

 VAR_11->u.itmf.lunmap_id = VAR_4;
 VAR_11->u.itmf.tm_req = VAR_5;
 VAR_11->u.itmf.t_tag = VAR_6;
 VAR_11->u.itmf._resvd = 0;
 FUNC_1(VAR_11->u.itmf.lun, VAR_7, VAR_1);
 VAR_11->u.itmf._resvd1 = 0;
 FUNC_0(VAR_11->u.itmf.d_id, VAR_8);
 VAR_11->u.itmf.r_a_tov = VAR_9;
 VAR_11->u.itmf.e_d_tov = VAR_10;

 FUNC_3(VAR_2);
}
