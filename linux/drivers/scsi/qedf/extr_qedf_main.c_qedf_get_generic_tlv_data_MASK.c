
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedf_ctx {int mac; } ;
struct qed_generic_tlvs {int * mac; } ;


 int FUNC_0 (int *,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct qed_generic_tlvs*,int ,int) ;

void FUNC_3(void *VAR_1, struct qed_generic_tlvs *VAR_2)
{
 struct qedf_ctx *VAR_3;

 if (!VAR_1) {
  FUNC_0(((void*)0), VAR_0,
     "dev is NULL so ignoring get_generic_tlv_data request.\n");
  return;
 }
 VAR_3 = (struct qedf_ctx *)VAR_1;

 FUNC_2(VAR_2, 0, sizeof(struct qed_generic_tlvs));
 FUNC_1(VAR_2->mac[0], VAR_3->mac);
}
