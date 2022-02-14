
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u8 ;
typedef void* u64 ;
typedef void* u32 ;
typedef int u16 ;
struct vnic_wq_copy {int dummy; } ;
struct TYPE_9__ {void* e_d_tov; void* r_a_tov; int mss; int d_id; scalar_t__ _resvd2; int lun; void* data_len; int scsi_cdb; void* flags; scalar_t__ _resvd1; void* pri_ta; void* crn; void* sense_addr; void* sgl_addr; void* sense_len; void* sgl_cnt; scalar_t__* _resvd0; void* special_req_flags; void* lunmap_id; } ;
struct TYPE_10__ {TYPE_4__ icmnd_16; } ;
struct TYPE_6__ {void* req_id; } ;
struct TYPE_7__ {TYPE_1__ u; } ;
struct TYPE_8__ {TYPE_2__ tag; scalar_t__ _resvd; scalar_t__ status; int type; } ;
struct fcpio_host_req {TYPE_5__ u; TYPE_3__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int ,void*) ;
 int FUNC_1 (int ,void**,void*) ;
 int FUNC_2 (int ,int ,int ) ;
 struct fcpio_host_req* FUNC_3 (struct vnic_wq_copy*) ;
 int FUNC_4 (struct vnic_wq_copy*) ;

__attribute__((used)) static inline void FUNC_5(struct vnic_wq_copy *VAR_3,
          u32 VAR_4,
          u32 VAR_5, u8 VAR_6,
          u32 VAR_7, u32 VAR_8,
          u64 VAR_9, u64 VAR_10,
          u8 VAR_11, u8 VAR_12,
          u8 VAR_13, u8 *VAR_14,
          u8 VAR_15,
          u32 VAR_16, u8 *VAR_17,
          u32 VAR_18, u16 VAR_19,
          u32 VAR_20, u32 VAR_21)
{
 struct fcpio_host_req *VAR_22 = FUNC_3(VAR_3);

 VAR_22->hdr.type = VAR_1;
 VAR_22->hdr.status = 0;
 VAR_22->hdr._resvd = 0;
 VAR_22->hdr.tag.u.req_id = VAR_4;

 VAR_22->u.icmnd_16.lunmap_id = VAR_5;
 VAR_22->u.icmnd_16.special_req_flags = VAR_6;
 VAR_22->u.icmnd_16._resvd0[0] = 0;
 VAR_22->u.icmnd_16._resvd0[1] = 0;
 VAR_22->u.icmnd_16._resvd0[2] = 0;
 VAR_22->u.icmnd_16.sgl_cnt = VAR_7;
 VAR_22->u.icmnd_16.sense_len = VAR_8;
 VAR_22->u.icmnd_16.sgl_addr = VAR_9;
 VAR_22->u.icmnd_16.sense_addr = VAR_10;
 VAR_22->u.icmnd_16.crn = VAR_11;
 VAR_22->u.icmnd_16.pri_ta = VAR_12;
 VAR_22->u.icmnd_16._resvd1 = 0;
 VAR_22->u.icmnd_16.flags = VAR_13;
 FUNC_2(VAR_22->u.icmnd_16.scsi_cdb, 0, VAR_0);
 FUNC_1(VAR_22->u.icmnd_16.scsi_cdb, VAR_14, VAR_15);
 VAR_22->u.icmnd_16.data_len = VAR_16;
 FUNC_1(VAR_22->u.icmnd_16.lun, VAR_17, VAR_2);
 VAR_22->u.icmnd_16._resvd2 = 0;
 FUNC_0(VAR_22->u.icmnd_16.d_id, VAR_18);
 VAR_22->u.icmnd_16.mss = VAR_19;
 VAR_22->u.icmnd_16.r_a_tov = VAR_20;
 VAR_22->u.icmnd_16.e_d_tov = VAR_21;

 FUNC_4(VAR_3);
}
