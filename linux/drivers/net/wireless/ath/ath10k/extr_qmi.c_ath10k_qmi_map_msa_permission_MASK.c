
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qcom_scm_vmperm {void* perm; int vmid; } ;
struct ath10k_qmi {struct ath10k* ar; } ;
struct ath10k_msa_mem_info {int size; int addr; scalar_t__ secure; } ;
struct ath10k {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 int FUNC_2 (int ,int ,unsigned int*,struct qcom_scm_vmperm*,int) ;

__attribute__((used)) static int FUNC_3(struct ath10k_qmi *VAR_5,
      struct ath10k_msa_mem_info *VAR_6)
{
 struct qcom_scm_vmperm VAR_7[3];
 struct ath10k *VAR_8 = VAR_5->ar;
 unsigned int VAR_9;
 u32 VAR_10;
 int VAR_11;

 VAR_9 = FUNC_0(VAR_1);

 VAR_7[0].vmid = VAR_2;
 VAR_7[0].perm = VAR_0;
 VAR_7[1].vmid = VAR_3;
 VAR_7[1].perm = VAR_0;

 if (VAR_6->secure) {
  VAR_10 = 2;
 } else {
  VAR_7[2].vmid = VAR_4;
  VAR_7[2].perm = VAR_0;
  VAR_10 = 3;
 }

 VAR_11 = FUNC_2(VAR_6->addr, VAR_6->size,
      &VAR_9, VAR_7, VAR_10);
 if (VAR_11 < 0)
  FUNC_1(VAR_8, "failed to assign msa map permissions: %d\n", VAR_11);

 return VAR_11;
}
