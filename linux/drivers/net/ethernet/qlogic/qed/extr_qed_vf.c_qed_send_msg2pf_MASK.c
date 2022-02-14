
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int type; } ;
struct TYPE_12__ {TYPE_5__ tl; } ;
union vfpf_tlvs {TYPE_6__ first_tlv; } ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_8__ {int hi; int lo; } ;
struct TYPE_9__ {TYPE_2__ vf_pf_msg_addr; } ;
struct ustorm_vf_zone {int trigger; TYPE_3__ non_trigger; } ;
struct ustorm_trigger_vf_zone {int vf_pf_msg_valid; } ;
struct TYPE_7__ {int concrete_fid; } ;
struct qed_hwfn {TYPE_4__* vf_iov_info; TYPE_1__ hw_info; } ;
struct channel_list_end_tlv {int dummy; } ;
struct TYPE_10__ {int vf2pf_request_phys; union vfpf_tlvs* vf2pf_request; } ;


 int FUNC_0 (struct qed_hwfn*,char*,scalar_t__,...) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,scalar_t__,int,...) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct qed_hwfn*,uintptr_t,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ustorm_trigger_vf_zone*,int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct qed_hwfn*,union vfpf_tlvs*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct qed_hwfn *VAR_6, u8 *VAR_7, u32 VAR_8)
{
 union vfpf_tlvs *VAR_9 = VAR_6->vf_iov_info->vf2pf_request;
 struct ustorm_trigger_vf_zone VAR_10;
 struct ustorm_vf_zone *VAR_11;
 int VAR_12 = 0, VAR_13 = 100;

 VAR_11 = (struct ustorm_vf_zone *)VAR_4;


 FUNC_7(VAR_6, VAR_9);


 VAR_8 += sizeof(struct channel_list_end_tlv);


 FUNC_5(&VAR_10, 0, sizeof(struct ustorm_trigger_vf_zone));
 VAR_10.vf_pf_msg_valid = 1;

 FUNC_1(VAR_6,
     VAR_5,
     "VF -> PF [%02x] message: [%08x, %08x] --> %p, %08x --> %p\n",
     FUNC_2(VAR_6->hw_info.concrete_fid,
        VAR_3),
     FUNC_8(VAR_6->vf_iov_info->vf2pf_request_phys),
     FUNC_4(VAR_6->vf_iov_info->vf2pf_request_phys),
     &VAR_11->non_trigger.vf_pf_msg_addr,
     *((u32 *)&VAR_10), &VAR_11->trigger);

 FUNC_3(VAR_6,
        (uintptr_t)&VAR_11->non_trigger.vf_pf_msg_addr.lo,
        FUNC_4(VAR_6->vf_iov_info->vf2pf_request_phys));

 FUNC_3(VAR_6,
        (uintptr_t)&VAR_11->non_trigger.vf_pf_msg_addr.hi,
        FUNC_8(VAR_6->vf_iov_info->vf2pf_request_phys));




 FUNC_9();

 FUNC_3(VAR_6, (uintptr_t)&VAR_11->trigger, *((u32 *)&VAR_10));




 while ((!*VAR_7) && VAR_13) {
  FUNC_6(25);
  VAR_13--;
 }

 if (!*VAR_7) {
  FUNC_0(VAR_6,
     "VF <-- PF Timeout [Type %d]\n",
     VAR_9->first_tlv.tl.type);
  VAR_12 = -VAR_0;
 } else {
  if ((*VAR_7 != VAR_2) &&
      (*VAR_7 != VAR_1))
   FUNC_0(VAR_6,
      "PF response: %d [Type %d]\n",
      *VAR_7, VAR_9->first_tlv.tl.type);
  else
   FUNC_1(VAR_6, VAR_5,
       "PF response: %d [Type %d]\n",
       *VAR_7, VAR_9->first_tlv.tl.type);
 }

 return VAR_12;
}
