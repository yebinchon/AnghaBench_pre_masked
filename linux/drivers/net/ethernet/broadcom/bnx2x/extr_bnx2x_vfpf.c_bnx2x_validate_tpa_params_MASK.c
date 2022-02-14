
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ max_sges_for_packet; scalar_t__ max_tpa_queues; } ;
struct vfpf_tpa_tlv {TYPE_1__ tpa_client_info; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_2(struct bnx2x *VAR_2,
           struct vfpf_tpa_tlv *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_3->tpa_client_info.max_sges_for_packet >
     VAR_1) {
  VAR_4 = -VAR_0;
  FUNC_0("TPA update: max_sges received %d, max is %d\n",
     VAR_3->tpa_client_info.max_sges_for_packet,
     VAR_1);
 }

 if (VAR_3->tpa_client_info.max_tpa_queues > FUNC_1(VAR_2)) {
  VAR_4 = -VAR_0;
  FUNC_0("TPA update: max_tpa_queues received %d, max is %d\n",
     VAR_3->tpa_client_info.max_tpa_queues,
     FUNC_1(VAR_2));
 }

 return VAR_4;
}
