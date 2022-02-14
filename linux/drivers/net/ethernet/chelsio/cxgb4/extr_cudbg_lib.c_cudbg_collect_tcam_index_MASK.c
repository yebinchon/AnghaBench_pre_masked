
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct fw_ldst_mps_rplc {int rplc255_224; int rplc223_192; int rplc191_160; int rplc159_128; int rplc127_96; int rplc95_64; int rplc63_32; int rplc31_0; int fid_idx; } ;
struct TYPE_5__ {struct fw_ldst_mps_rplc rplc; } ;
struct TYPE_6__ {TYPE_1__ mps; } ;
struct fw_ldst_cmd {TYPE_2__ u; void* cycles_to_len16; void* op_to_addrspace; } ;
struct cudbg_mps_tcam {int vniy; int dip_hit; int vlan_vld; int ivlan; int vnix; int cls_lo; int cls_hi; int repli; int idx; scalar_t__ rplc_size; int mask; int addr; void** rplc; int lookup_type; int port_num; } ;
struct cudbg_init {struct adapter* adap; } ;
struct TYPE_7__ {scalar_t__ mps_rplc_size; } ;
struct TYPE_8__ {TYPE_3__ arch; int chip; } ;
struct adapter {TYPE_4__ params; int mbox; } ;
typedef int ldst_cmd ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int) ;
 int VAR_3 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_4 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int) ;
 int VAR_9 ;
 int FUNC_14 (struct fw_ldst_cmd) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_19 (int) ;
 int FUNC_20 (struct adapter*,struct fw_ldst_mps_rplc*) ;
 int FUNC_21 (int,int,int ,int *) ;
 void* FUNC_22 (int) ;
 int FUNC_23 (int) ;
 scalar_t__ FUNC_24 (struct cudbg_init*) ;
 scalar_t__ FUNC_25 (int ) ;
 scalar_t__ FUNC_26 (int ) ;
 int FUNC_27 (struct fw_ldst_cmd*,int ,int) ;
 void* FUNC_28 (int ) ;
 int FUNC_29 (struct adapter*,int ) ;
 int FUNC_30 (struct adapter*,int ) ;
 int FUNC_31 (struct adapter*,int ,struct fw_ldst_cmd*,int,struct fw_ldst_cmd*) ;
 int FUNC_32 (struct adapter*,int ,int) ;

__attribute__((used)) static int FUNC_33(struct cudbg_init *VAR_16,
        struct cudbg_mps_tcam *VAR_17, u32 VAR_18)
{
 struct adapter *VAR_19 = VAR_16->adap;
 u64 VAR_20, VAR_21, VAR_22;
 u32 VAR_23, VAR_24;
 int VAR_25 = 0;

 if (FUNC_0(VAR_19->params.chip) >= VAR_0) {







  VAR_23 = FUNC_2(1) | FUNC_1(0) | FUNC_5(0);
  if (VAR_18 < 256)
   VAR_23 |= FUNC_3(VAR_18) | FUNC_4(0);
  else
   VAR_23 |= FUNC_3(VAR_18 - 256) | FUNC_4(1);

  FUNC_32(VAR_19, VAR_10, VAR_23);
  VAR_22 = FUNC_29(VAR_19, VAR_12);
  VAR_20 = FUNC_9(VAR_22) << 32;
  VAR_20 |= FUNC_29(VAR_19, VAR_11);
  VAR_24 = FUNC_29(VAR_19, VAR_13);
  VAR_17->lookup_type = FUNC_6(VAR_24);





  if (VAR_17->lookup_type && VAR_17->lookup_type != VAR_3) {

   VAR_17->vniy = (VAR_24 & VAR_4) | FUNC_8(VAR_24);
   VAR_17->vniy = (VAR_17->vniy << 16) | FUNC_19(VAR_22);
   VAR_17->dip_hit = VAR_24 & VAR_2;
  } else {
   VAR_17->vlan_vld = VAR_24 & VAR_4;
   VAR_17->ivlan = FUNC_19(VAR_22);
  }

  VAR_17->port_num = FUNC_7(VAR_24);


  VAR_23 |= FUNC_5(1);
  FUNC_32(VAR_19, VAR_10, VAR_23);
  VAR_22 = FUNC_29(VAR_19, VAR_12);
  VAR_21 = FUNC_9(VAR_22) << 32;
  VAR_21 |= FUNC_29(VAR_19, VAR_11);
  VAR_24 = FUNC_29(VAR_19, VAR_13);
  if (VAR_17->lookup_type && VAR_17->lookup_type != VAR_3) {

   VAR_17->vnix = (VAR_24 & VAR_4) | FUNC_8(VAR_24);
   VAR_17->vnix = (VAR_17->vnix << 16) | FUNC_19(VAR_22);
  }
 } else {
  VAR_20 = FUNC_30(VAR_19, FUNC_18(VAR_18));
  VAR_21 = FUNC_30(VAR_19, FUNC_17(VAR_18));
 }


 if (VAR_21 & VAR_20)
  return VAR_25;

 VAR_17->cls_lo = FUNC_29(VAR_19, FUNC_16(VAR_18));
 VAR_17->cls_hi = FUNC_29(VAR_19, FUNC_15(VAR_18));

 if (FUNC_25(VAR_19->params.chip))
  VAR_17->repli = (VAR_17->cls_lo & VAR_14);
 else if (FUNC_26(VAR_19->params.chip))
  VAR_17->repli = (VAR_17->cls_lo & VAR_15);

 if (VAR_17->repli) {
  struct fw_ldst_cmd VAR_26;
  struct fw_ldst_mps_rplc VAR_27;

  FUNC_27(&VAR_26, 0, sizeof(VAR_26));
  VAR_26.op_to_addrspace =
   FUNC_22(FUNC_10(VAR_8) |
         VAR_6 | VAR_5 |
         FUNC_11(VAR_7));
  VAR_26.cycles_to_len16 = FUNC_22(FUNC_14(VAR_26));
  VAR_26.u.mps.rplc.fid_idx =
   FUNC_23(FUNC_12(VAR_9) |
         FUNC_13(VAR_18));




  if (FUNC_24(VAR_16))
   VAR_25 = FUNC_31(VAR_19, VAR_19->mbox, &VAR_26,
     sizeof(VAR_26), &VAR_26);

  if (VAR_25 || !FUNC_24(VAR_16)) {
   FUNC_20(VAR_19, &VAR_27);



   VAR_25 = 0;
  } else {
   VAR_27 = VAR_26.u.mps.rplc;
  }

  VAR_17->rplc[0] = FUNC_28(VAR_27.rplc31_0);
  VAR_17->rplc[1] = FUNC_28(VAR_27.rplc63_32);
  VAR_17->rplc[2] = FUNC_28(VAR_27.rplc95_64);
  VAR_17->rplc[3] = FUNC_28(VAR_27.rplc127_96);
  if (VAR_19->params.arch.mps_rplc_size > VAR_1) {
   VAR_17->rplc[4] = FUNC_28(VAR_27.rplc159_128);
   VAR_17->rplc[5] = FUNC_28(VAR_27.rplc191_160);
   VAR_17->rplc[6] = FUNC_28(VAR_27.rplc223_192);
   VAR_17->rplc[7] = FUNC_28(VAR_27.rplc255_224);
  }
 }
 FUNC_21(VAR_21, VAR_20, VAR_17->addr, &VAR_17->mask);
 VAR_17->idx = VAR_18;
 VAR_17->rplc_size = VAR_19->params.arch.mps_rplc_size;
 return VAR_25;
}
