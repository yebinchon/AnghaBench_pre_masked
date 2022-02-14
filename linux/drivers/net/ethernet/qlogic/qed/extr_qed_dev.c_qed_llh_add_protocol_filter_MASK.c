
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


 int FUNC_0 (struct qed_hwfn*,char*,int*,int) ;
 int FUNC_1 (struct qed_dev*,int ,char*,int*,int,int,int,int) ;
 int VAR_0 ;
 struct qed_hwfn* FUNC_2 (struct qed_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct qed_dev*,int,int*) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,int,int,int,int,int) ;
 int FUNC_5 (struct qed_dev*,int,void*,void*,int*,int) ;
 int FUNC_6 (struct qed_dev*,int,void*,void*,int*,int*) ;
 int FUNC_7 (struct qed_dev*,int,int ,union qed_llh_filter*,int*,int*) ;
 struct qed_ptt* FUNC_8 (struct qed_hwfn*) ;
 int FUNC_9 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_10 (int ,int *) ;

int
FUNC_11(struct qed_dev *VAR_4,
       u8 VAR_5,
       enum qed_llh_prot_filter_type_t VAR_6,
       u16 VAR_7, u16 VAR_8)
{
 struct qed_hwfn *VAR_9 = FUNC_2(VAR_4);
 struct qed_ptt *VAR_10 = FUNC_8(VAR_9);
 u8 VAR_11, VAR_12, VAR_13[32], VAR_14;
 union qed_llh_filter VAR_15 = {};
 u32 VAR_16, VAR_17, VAR_18;
 int VAR_19 = 0;

 if (!VAR_10)
  return -VAR_0;

 if (!FUNC_10(VAR_2, &VAR_4->mf_bits))
  goto out;

 VAR_19 = FUNC_5(VAR_4, VAR_6,
            VAR_7,
            VAR_8, VAR_13, sizeof(VAR_13));
 if (VAR_19)
  goto err;

 VAR_15.protocol.type = VAR_6;
 VAR_15.protocol.source_port_or_eth_type = VAR_7;
 VAR_15.protocol.dest_port = VAR_8;
 VAR_19 = FUNC_7(VAR_4,
           VAR_5,
           VAR_1,
           &VAR_15, &VAR_11, &VAR_18);
 if (VAR_19)
  goto err;

 VAR_19 = FUNC_3(VAR_4, VAR_5, &VAR_12);
 if (VAR_19)
  goto err;


 if (VAR_18 == 1) {
  VAR_19 = FUNC_6(VAR_4, VAR_6,
           VAR_7,
           VAR_8, &VAR_16, &VAR_17);
  if (VAR_19)
   goto err;

  VAR_14 = 0x1 << VAR_6;
  VAR_19 = FUNC_4(VAR_9, VAR_10, VAR_12,
     VAR_11, VAR_14, VAR_16, VAR_17);
  if (VAR_19)
   goto err;
 }

 FUNC_1(VAR_4,
     VAR_3,
     "LLH: Added protocol filter [%s] to ppfid %hhd [abs %hhd] at idx %hhd [ref_cnt %d]\n",
     VAR_13, VAR_5, VAR_12, VAR_11, VAR_18);

 goto out;

err: FUNC_0(VAR_9,
    "LLH: Failed to add protocol filter [%s] to ppfid %hhd\n",
    VAR_13, VAR_5);
out:
 FUNC_9(VAR_9, VAR_10);

 return VAR_19;
}
