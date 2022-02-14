
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct fw_wr_hdr {int hi; } ;
struct TYPE_2__ {int fcoe_rdev; } ;
struct fw_rdev_wr {size_t event_cause; scalar_t__ protocol; TYPE_1__ u; int flags_to_assoc_flowid; int alloc_to_len16; } ;
struct fw_fcoe_link_cmd {int lstatus; int vnpi_pkd; int sub_opcode_fcfi; int op_to_portid; } ;
struct fw_fcoe_els_ct_wr {int dummy; } ;
struct csio_rnode {int dummy; } ;
struct csio_lnode {size_t prev_evt; size_t cur_evt; int lock; int sm; } ;
struct csio_hw {size_t prev_evt; size_t cur_evt; int lock; int sm; } ;
typedef enum fw_fcoe_link_status { ____Placeholder_fw_fcoe_link_status } fw_fcoe_link_status ;
typedef enum csio_ln_ev { ____Placeholder_csio_ln_ev } csio_ln_ev ;
typedef scalar_t__ __u8 ;
typedef int __be64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (struct csio_lnode*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (int ) ;
 struct csio_rnode* FUNC_9 (struct csio_lnode*,scalar_t__,int *) ;
 int FUNC_10 (struct csio_lnode*,char*,scalar_t__,size_t,scalar_t__) ;
 int FUNC_11 (struct csio_lnode*,char*,scalar_t__,scalar_t__) ;
 int FUNC_12 (struct csio_lnode*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_13 (struct csio_lnode*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_14 (struct csio_lnode*,char*,int,...) ;
 struct csio_lnode* FUNC_15 (struct csio_lnode*,scalar_t__) ;
 int FUNC_16 (struct csio_lnode*,struct fw_wr_hdr*,int) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (struct csio_rnode*,size_t) ;
 int FUNC_19 (struct csio_lnode*,char*,scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;

void
FUNC_23(struct csio_hw *VAR_11, __u8 VAR_12, __be64 *VAR_13)
{
 struct csio_lnode *VAR_14;
 struct csio_rnode *VAR_15;
 uint8_t VAR_16, VAR_17 = *(uint8_t *)VAR_13;
 struct fw_fcoe_link_cmd *VAR_18;
 struct fw_wr_hdr *VAR_19;
 struct fw_rdev_wr *VAR_20;
 enum fw_fcoe_link_status VAR_21;
 uint32_t VAR_22, VAR_23, VAR_24;
 enum csio_ln_ev VAR_25;

 if (VAR_12 == VAR_0 && VAR_17 == VAR_5) {

  VAR_18 = (struct fw_fcoe_link_cmd *)VAR_13;
  VAR_21 = VAR_18->lstatus;
  VAR_16 = FUNC_3(
     FUNC_20(VAR_18->op_to_portid));
  VAR_22 = FUNC_2(FUNC_20(VAR_18->sub_opcode_fcfi));
  VAR_24 = FUNC_4(FUNC_20(VAR_18->vnpi_pkd));

  if (VAR_21 == VAR_3) {


   FUNC_21(&VAR_11->lock);
   FUNC_13(VAR_11, VAR_16, VAR_22, VAR_24);
   FUNC_22(&VAR_11->lock);


  } else if (VAR_21 == VAR_2) {


   FUNC_21(&VAR_11->lock);
   FUNC_12(VAR_11, VAR_16, VAR_22, VAR_24);
   FUNC_22(&VAR_11->lock);

  } else {
   FUNC_19(VAR_11, "Unexpected FCOE LINK status:0x%x\n",
      VAR_18->lstatus);
   FUNC_1(VAR_11, VAR_8);
  }
 } else if (VAR_12 == VAR_1) {
  VAR_19 = (struct fw_wr_hdr *) (VAR_13 + 4);
  if (FUNC_7(FUNC_8(VAR_19->hi))
   == VAR_6) {

   VAR_20 = (struct fw_rdev_wr *) (VAR_13 + 4);

   VAR_23 = FUNC_6(
     FUNC_20(VAR_20->alloc_to_len16));
   VAR_24 = FUNC_5(
        FUNC_20(VAR_20->flags_to_assoc_flowid));

   FUNC_10(VAR_11,
    "FW_RDEV_WR: flowid:x%x ev_cause:x%x "
    "vnpi:0x%x\n", VAR_23,
    VAR_20->event_cause, VAR_24);

   if (VAR_20->protocol != VAR_7) {
    FUNC_11(VAR_11,
     "FW_RDEV_WR: invalid proto:x%x "
     "received with flowid:x%x\n",
     VAR_20->protocol,
     VAR_23);
    FUNC_1(VAR_11, VAR_9);
    return;
   }


   FUNC_21(&VAR_11->lock);
   VAR_14 = FUNC_15(VAR_11, VAR_24);
   if (!VAR_14) {
    FUNC_11(VAR_11,
     "FW_DEV_WR: invalid vnpi:x%x received "
     "with flowid:x%x\n", VAR_24, VAR_23);
    FUNC_1(VAR_11, VAR_9);
    goto out_pld;
   }

   VAR_15 = FUNC_9(VAR_14, VAR_23,
     &VAR_20->u.fcoe_rdev);
   if (!VAR_15) {
    FUNC_14(VAR_14,
     "Failed to confirm rnode "
     "for flowid:x%x\n", VAR_23);
    FUNC_1(VAR_11, VAR_9);
    goto out_pld;
   }


   VAR_14->prev_evt = VAR_14->cur_evt;
   VAR_14->cur_evt = VAR_20->event_cause;
   FUNC_1(VAR_14, VAR_10[VAR_20->event_cause]);


   VAR_25 = FUNC_0(VAR_20->event_cause);
   if (VAR_25) {
    FUNC_14(VAR_14,
     "Posting event to lnode event:%d "
     "cause:%d flowid:x%x\n", VAR_25,
     VAR_20->event_cause, VAR_23);
    FUNC_17(&VAR_14->sm, VAR_25);
   }


   FUNC_18(VAR_15, VAR_20->event_cause);
out_pld:
   FUNC_22(&VAR_11->lock);
   return;
  } else {
   FUNC_19(VAR_11, "unexpected WR op(0x%x) recv\n",
      FUNC_7(FUNC_8((VAR_19->hi))));
   FUNC_1(VAR_11, VAR_8);
  }
 } else if (VAR_12 == VAR_0) {
  VAR_19 = (struct fw_wr_hdr *) (VAR_13);
  if (FUNC_7(FUNC_8(VAR_19->hi)) == VAR_4) {
   FUNC_16(VAR_11, VAR_19,
     sizeof(struct fw_fcoe_els_ct_wr));
  } else {
   FUNC_19(VAR_11, "unexpected WR op(0x%x) recv\n",
      FUNC_7(FUNC_8((VAR_19->hi))));
   FUNC_1(VAR_11, VAR_8);
  }
 } else {
  FUNC_19(VAR_11, "unexpected CPL op(0x%x) recv\n", VAR_17);
  FUNC_1(VAR_11, VAR_8);
 }
}
