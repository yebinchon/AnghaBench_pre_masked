
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
union qed_llh_filter {TYPE_1__ mac; } ;
typedef int u8 ;
typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct qed_dev {int mf_bits; } ;


 int FUNC_0 (struct qed_dev*,char*,int*,int) ;
 int FUNC_1 (struct qed_dev*,int ,char*,int*,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct qed_hwfn* FUNC_2 (struct qed_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int*,int ) ;
 int FUNC_4 (struct qed_dev*,int,int*) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*,int,int,int ,int,int) ;
 int FUNC_6 (struct qed_dev*,int,int ,union qed_llh_filter*,int*,int*) ;
 struct qed_ptt* FUNC_7 (struct qed_hwfn*) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_9 (int ,int *) ;

int FUNC_10(struct qed_dev *VAR_5,
      u8 VAR_6, u8 VAR_7[VAR_1])
{
 struct qed_hwfn *VAR_8 = FUNC_2(VAR_5);
 struct qed_ptt *VAR_9 = FUNC_7(VAR_8);
 union qed_llh_filter VAR_10 = {};
 u8 VAR_11, VAR_12;
 u32 VAR_13, VAR_14, VAR_15;
 int VAR_16 = 0;

 if (!VAR_9)
  return -VAR_0;

 if (!FUNC_9(VAR_3, &VAR_5->mf_bits))
  goto out;

 FUNC_3(VAR_10.mac.addr, VAR_7, VAR_1);
 VAR_16 = FUNC_6(VAR_5, VAR_6,
           VAR_2,
           &VAR_10, &VAR_11, &VAR_15);
 if (VAR_16)
  goto err;


 if (VAR_15 == 1) {
  VAR_16 = FUNC_4(VAR_5, VAR_6, &VAR_12);
  if (VAR_16)
   goto err;

  VAR_13 = VAR_7[1] | (VAR_7[0] << 8);
  VAR_14 = VAR_7[5] | (VAR_7[4] << 8) | (VAR_7[3] << 16) |
        (VAR_7[2] << 24);
  VAR_16 = FUNC_5(VAR_8, VAR_9, VAR_12, VAR_11,
     0, VAR_13, VAR_14);
  if (VAR_16)
   goto err;
 }

 FUNC_1(VAR_5,
     VAR_4,
     "LLH: Added MAC filter [%pM] to ppfid %hhd [abs %hhd] at idx %hhd [ref_cnt %d]\n",
     VAR_7, VAR_6, VAR_12, VAR_11, VAR_15);

 goto out;

err: FUNC_0(VAR_5,
    "LLH: Failed to add MAC filter [%pM] to ppfid %hhd\n",
    VAR_7, VAR_6);
out:
 FUNC_8(VAR_8, VAR_9);

 return VAR_16;
}
