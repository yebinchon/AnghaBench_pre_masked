
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_scm_vmperm {int perm; int vmid; } ;
struct ath10k_qmi {struct ath10k* ar; } ;
struct ath10k_msa_mem_info {int size; int addr; int secure; } ;
struct ath10k {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 int FUNC_2 (int ,int ,unsigned int*,struct qcom_scm_vmperm*,int) ;

__attribute__((used)) static int FUNC_3(struct ath10k_qmi *VAR_5,
        struct ath10k_msa_mem_info *VAR_6)
{
 struct qcom_scm_vmperm VAR_7;
 struct ath10k *VAR_8 = VAR_5->ar;
 unsigned int VAR_9;
 int VAR_10;

 VAR_9 = FUNC_0(VAR_2) | FUNC_0(VAR_3);

 if (!VAR_6->secure)
  VAR_9 |= FUNC_0(VAR_4);

 VAR_7.vmid = VAR_1;
 VAR_7.perm = VAR_0;

 VAR_10 = FUNC_2(VAR_6->addr, VAR_6->size,
      &VAR_9, &VAR_7, 1);
 if (VAR_10 < 0)
  FUNC_1(VAR_8, "failed to unmap msa permissions: %d\n", VAR_10);

 return VAR_10;
}
