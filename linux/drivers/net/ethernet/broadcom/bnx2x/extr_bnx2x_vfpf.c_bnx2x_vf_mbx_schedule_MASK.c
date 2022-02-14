
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long long u8 ;
struct vf_pf_event_data {scalar_t__ vf_id; int msg_addr_lo; int msg_addr_hi; } ;
struct bnx2x {int dummy; } ;
struct TYPE_4__ {scalar_t__ first_vf_in_pf; } ;
struct TYPE_6__ {unsigned long long event_occur; int event_mutex; TYPE_1__ sriov; } ;
struct TYPE_5__ {void* vf_addr_lo; void* vf_addr_hi; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 TYPE_3__* FUNC_2 (struct bnx2x*) ;
 TYPE_2__* FUNC_3 (struct bnx2x*,unsigned long long) ;
 int FUNC_4 (int ,char*,scalar_t__,int ,int ) ;
 int FUNC_5 (struct bnx2x*,int ) ;
 unsigned long long FUNC_6 (struct bnx2x*,scalar_t__) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct bnx2x *VAR_2,
      struct vf_pf_event_data *VAR_3)
{
 u8 VAR_4;

 FUNC_4(VAR_1,
    "vf pf event received: vfid %d, address_hi %x, address lo %x",
    VAR_3->vf_id, VAR_3->msg_addr_hi, VAR_3->msg_addr_lo);



 if (VAR_3->vf_id - FUNC_2(VAR_2)->sriov.first_vf_in_pf >
     FUNC_1(VAR_2)) {
  FUNC_0("Illegal vf_id %d max allowed: %d\n",
     VAR_3->vf_id, FUNC_1(VAR_2));
  return;
 }

 VAR_4 = FUNC_6(VAR_2, VAR_3->vf_id);


 FUNC_8(&FUNC_2(VAR_2)->event_mutex);
 FUNC_3(VAR_2, VAR_4)->vf_addr_hi =
  FUNC_7(VAR_3->msg_addr_hi);
 FUNC_3(VAR_2, VAR_4)->vf_addr_lo =
  FUNC_7(VAR_3->msg_addr_lo);
 FUNC_2(VAR_2)->event_occur |= (1ULL << VAR_4);
 FUNC_9(&FUNC_2(VAR_2)->event_mutex);

 FUNC_5(VAR_2, VAR_0);
}
