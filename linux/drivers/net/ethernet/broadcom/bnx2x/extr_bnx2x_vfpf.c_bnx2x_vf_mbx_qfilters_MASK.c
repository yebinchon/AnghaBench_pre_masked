
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vfpf_set_q_filters_tlv {int flags; int rx_mask; int vf_qid; int n_multicast; int multicast; } ;
struct pf_vf_bulletin_content {int valid_bitmap; } ;
struct bnx2x_virtf {int cfg_flags; int abs_vfid; int index; } ;
struct bnx2x_vf_mac_vlan_filters {int dummy; } ;
struct bnx2x {int dummy; } ;
struct TYPE_6__ {TYPE_2__* msg; } ;
struct TYPE_4__ {struct vfpf_set_q_filters_tlv set_q_filters; } ;
struct TYPE_5__ {TYPE_1__ req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ,int) ;
 struct pf_vf_bulletin_content* FUNC_1 (struct bnx2x*,int ) ;
 TYPE_3__* FUNC_2 (struct bnx2x*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int ,unsigned long*) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vf_mac_vlan_filters*,int ,int) ;
 int FUNC_5 (struct bnx2x*,struct bnx2x_virtf*,struct vfpf_set_q_filters_tlv*,struct bnx2x_vf_mac_vlan_filters**,int ) ;
 int FUNC_6 (struct bnx2x*,struct bnx2x_virtf*,int ,int ,int) ;
 int FUNC_7 (struct bnx2x*,struct bnx2x_virtf*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct bnx2x *VAR_14, struct bnx2x_virtf *VAR_15)
{
 int VAR_16 = 0;

 struct vfpf_set_q_filters_tlv *VAR_17 =
  &FUNC_2(VAR_14, VAR_15->index)->msg->req.set_q_filters;


 if (VAR_17->flags & VAR_7) {
  struct bnx2x_vf_mac_vlan_filters *VAR_18 = ((void*)0);


  VAR_16 = FUNC_5(VAR_14, VAR_15, VAR_17, &VAR_18,
            VAR_11);
  if (VAR_16)
   goto op_err;

  if (VAR_18) {


   VAR_16 = FUNC_4(VAR_14, VAR_15, VAR_18,
          VAR_17->vf_qid,
          0);
   if (VAR_16)
    goto op_err;
  }


  VAR_18 = ((void*)0);

  VAR_16 = FUNC_5(VAR_14, VAR_15, VAR_17, &VAR_18,
            VAR_4);
  if (VAR_16)
   goto op_err;

  if (VAR_18) {

   VAR_16 = FUNC_4(VAR_14, VAR_15, VAR_18,
          VAR_17->vf_qid,
          0);
   if (VAR_16)
    goto op_err;
  }


  VAR_18 = ((void*)0);

  VAR_16 = FUNC_5(VAR_14, VAR_15, VAR_17, &VAR_18,
            VAR_10);
  if (VAR_16)
   goto op_err;

  if (VAR_18) {

   VAR_16 = FUNC_4(VAR_14, VAR_15, VAR_18,
          VAR_17->vf_qid,
          0);
   if (VAR_16)
    goto op_err;
  }

 }

 if (VAR_17->flags & VAR_9) {
  unsigned long VAR_19 = 0;
  struct pf_vf_bulletin_content *VAR_20 =
     FUNC_1(VAR_14, VAR_15->index);


  if (VAR_17->rx_mask != VAR_6) {
   FUNC_3(VAR_3, &VAR_19);
   FUNC_3(VAR_2, &VAR_19);
   FUNC_3(VAR_1, &VAR_19);
  }







  if (!(VAR_20->valid_bitmap & (1 << VAR_13)) &&
      (!(VAR_15->cfg_flags & VAR_12) ||
       VAR_17->rx_mask & VAR_5))
   FUNC_3(VAR_0, &VAR_19);


  VAR_16 = FUNC_7(VAR_14, VAR_15, VAR_17->vf_qid, VAR_19);
  if (VAR_16)
   goto op_err;
 }

 if (VAR_17->flags & VAR_8) {

  VAR_16 = FUNC_6(VAR_14, VAR_15, VAR_17->multicast,
        VAR_17->n_multicast, 0);
  if (VAR_16)
   goto op_err;
 }
op_err:
 if (VAR_16)
  FUNC_0("QFILTERS[%d:%d] error: rc %d\n",
     VAR_15->abs_vfid, VAR_17->vf_qid, VAR_16);
 return VAR_16;
}
