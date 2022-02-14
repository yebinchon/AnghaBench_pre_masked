
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__ ord; scalar_t__ ird; } ;
struct qed_iwarp_ep {int rtr_type; TYPE_2__ cm_info; TYPE_1__* ep_buffer_virt; int mpa_rev; } ;
struct qed_hwfn {int dummy; } ;
struct mpa_v2_hdr {void* ord; void* ird; } ;
struct TYPE_3__ {scalar_t__ out_pdata; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,void*,void*,int ,int,int,int,int,int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct qed_hwfn *VAR_10,
        struct qed_iwarp_ep *VAR_11, u8 *VAR_12)
{
 struct mpa_v2_hdr *VAR_13;
 u16 VAR_14, VAR_15;

 *VAR_12 = 0;
 if (FUNC_1(VAR_11->mpa_rev)) {
  VAR_13 =
      (struct mpa_v2_hdr *)VAR_11->ep_buffer_virt->out_pdata;
  *VAR_12 = sizeof(*VAR_13);

  VAR_14 = (u16)VAR_11->cm_info.ird;
  VAR_15 = (u16)VAR_11->cm_info.ord;

  if (VAR_11->rtr_type != VAR_0) {
   VAR_14 |= VAR_5;

   if (VAR_11->rtr_type & VAR_2)
    VAR_14 |= VAR_7;

   if (VAR_11->rtr_type & VAR_3)
    VAR_15 |= VAR_8;

   if (VAR_11->rtr_type & VAR_1)
    VAR_15 |= VAR_6;
  }

  VAR_13->ird = FUNC_2(VAR_14);
  VAR_13->ord = FUNC_2(VAR_15);

  FUNC_0(VAR_10,
      VAR_9,
      "MPA_NEGOTIATE Header: [%x ord:%x ird] %x ord:%x ird:%x peer2peer:%x rtr_send:%x rtr_write:%x rtr_read:%x\n",
      VAR_13->ird,
      VAR_13->ord,
      *((u32 *)VAR_13),
      VAR_15 & VAR_4,
      VAR_14 & VAR_4,
      !!(VAR_14 & VAR_5),
      !!(VAR_14 & VAR_7),
      !!(VAR_15 & VAR_8),
      !!(VAR_15 & VAR_6));
 }
}
