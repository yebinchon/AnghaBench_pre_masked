
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; void* dest_port; void* source_port_or_eth_type; } ;
union qed_llh_filter {TYPE_1__ protocol; } ;
typedef int u8 ;
typedef int u32 ;
typedef void* u16 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct qed_dev {int mf_bits; } ;
typedef int str ;
typedef enum qed_llh_prot_filter_type_t { ____Placeholder_qed_llh_prot_filter_type_t } qed_llh_prot_filter_type_t ;


 int FUNC_0 (struct qed_dev*,char*,int *,int ) ;
 int FUNC_1 (struct qed_dev*,int ,char*,int *,int ,int ,int ,int ) ;
 struct qed_hwfn* FUNC_2 (struct qed_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct qed_dev*,int ,int *) ;
 int FUNC_4 (struct qed_dev*,int,void*,void*,int *,int) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*,int ,int ) ;
 int FUNC_6 (struct qed_dev*,int ,union qed_llh_filter*,int *,int *) ;
 struct qed_ptt* FUNC_7 (struct qed_hwfn*) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_9 (int ,int *) ;

void FUNC_10(struct qed_dev *VAR_2,
        u8 VAR_3,
        enum qed_llh_prot_filter_type_t VAR_4,
        u16 VAR_5, u16 VAR_6)
{
 struct qed_hwfn *VAR_7 = FUNC_2(VAR_2);
 struct qed_ptt *VAR_8 = FUNC_7(VAR_7);
 u8 VAR_9, VAR_10, VAR_11[32];
 union qed_llh_filter VAR_12 = {};
 int VAR_13 = 0;
 u32 VAR_14;

 if (!VAR_8)
  return;

 if (!FUNC_9(VAR_0, &VAR_2->mf_bits))
  goto out;

 VAR_13 = FUNC_4(VAR_2, VAR_4,
            VAR_5,
            VAR_6, VAR_11, sizeof(VAR_11));
 if (VAR_13)
  goto err;

 VAR_12.protocol.type = VAR_4;
 VAR_12.protocol.source_port_or_eth_type = VAR_5;
 VAR_12.protocol.dest_port = VAR_6;
 VAR_13 = FUNC_6(VAR_2, VAR_3, &VAR_12, &VAR_9,
       &VAR_14);
 if (VAR_13)
  goto err;

 VAR_13 = FUNC_3(VAR_2, VAR_3, &VAR_10);
 if (VAR_13)
  goto err;


 if (!VAR_14) {
  VAR_13 = FUNC_5(VAR_7, VAR_8, VAR_10,
        VAR_9);
  if (VAR_13)
   goto err;
 }

 FUNC_1(VAR_2,
     VAR_1,
     "LLH: Removed protocol filter [%s] from ppfid %hhd [abs %hhd] at idx %hhd [ref_cnt %d]\n",
     VAR_11, VAR_3, VAR_10, VAR_9, VAR_14);

 goto out;

err: FUNC_0(VAR_2,
    "LLH: Failed to remove protocol filter [%s] from ppfid %hhd\n",
    VAR_11, VAR_3);
out:
 FUNC_8(VAR_7, VAR_8);
}
