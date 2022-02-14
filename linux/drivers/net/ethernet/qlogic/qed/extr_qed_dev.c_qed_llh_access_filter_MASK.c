
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct qed_ptt {int dummy; } ;
struct qed_llh_filter_details {int enable; int hdr_sel; int protocol_type; int mode; int value; } ;
struct qed_hwfn {int rel_pf_id; TYPE_1__* cdev; } ;
struct qed_dmae_params {int dst_pfid; int flags; int member_0; } ;
struct TYPE_2__ {int num_ports_in_engine; } ;


 int FUNC_0 (struct qed_hwfn*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int ,scalar_t__,int,struct qed_dmae_params*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_5(struct qed_hwfn *VAR_7,
        struct qed_ptt *VAR_8,
        u8 VAR_9,
        u8 VAR_10,
        struct qed_llh_filter_details *VAR_11)
{
 struct qed_dmae_params VAR_12 = {0};
 u32 VAR_13;
 u8 VAR_14;
 int VAR_15;
 if (FUNC_1(VAR_7->cdev))
  VAR_14 = VAR_9;
 else
  VAR_14 = VAR_9 * VAR_7->cdev->num_ports_in_engine +
      FUNC_0(VAR_7);


 if (!VAR_11->enable) {
  FUNC_3(VAR_7, VAR_8,
    VAR_14 << VAR_5);

  VAR_13 = VAR_0 + VAR_10 * 0x4;
  FUNC_4(VAR_7, VAR_8, VAR_13, VAR_11->enable);

  FUNC_3(VAR_7, VAR_8,
    VAR_7->rel_pf_id <<
    VAR_5);
 }


 VAR_13 = VAR_4 + 2 * VAR_10 * 0x4;

 VAR_12.flags = VAR_6;
 VAR_12.dst_pfid = VAR_14;
 VAR_15 = FUNC_2(VAR_7,
          VAR_8,
          (u64)(uintptr_t)&VAR_11->value,
          VAR_13, 2 ,
          &VAR_12);
 if (VAR_15)
  return VAR_15;

 FUNC_3(VAR_7, VAR_8,
   VAR_14 << VAR_5);


 VAR_13 = VAR_2 + VAR_10 * 0x4;
 FUNC_4(VAR_7, VAR_8, VAR_13, VAR_11->mode);


 VAR_13 = VAR_3 + VAR_10 * 0x4;
 FUNC_4(VAR_7, VAR_8, VAR_13, VAR_11->protocol_type);


 VAR_13 = VAR_1 + VAR_10 * 0x4;
 FUNC_4(VAR_7, VAR_8, VAR_13, VAR_11->hdr_sel);


 if (VAR_11->enable) {
  VAR_13 = VAR_0 + VAR_10 * 0x4;
  FUNC_4(VAR_7, VAR_8, VAR_13, VAR_11->enable);
 }

 FUNC_3(VAR_7, VAR_8,
   VAR_7->rel_pf_id <<
   VAR_5);

 return 0;
}
