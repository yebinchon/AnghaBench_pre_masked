
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iwl_trans_pcie {scalar_t__ max_tbs; } ;
struct iwl_trans {int dummy; } ;
struct iwl_tfh_tfd {void* num_tbs; struct iwl_tfh_tb* tbs; } ;
struct iwl_tfh_tb {void* tb_len; int addr; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_trans*,char*,scalar_t__) ;
 int VAR_1 ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 scalar_t__ FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct iwl_trans*,struct iwl_tfh_tfd*) ;
 scalar_t__ FUNC_5 (void*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct iwl_trans *VAR_2,
    struct iwl_tfh_tfd *VAR_3, dma_addr_t VAR_4,
    u16 VAR_5)
{
 struct iwl_trans_pcie *VAR_6 = FUNC_1(VAR_2);
 int VAR_7 = FUNC_4(VAR_2, VAR_3);
 struct iwl_tfh_tb *VAR_8;

 if (FUNC_2(VAR_7 >= VAR_1))
  return -VAR_0;
 VAR_8 = &VAR_3->tbs[VAR_7];


 if (FUNC_5(VAR_3->num_tbs) >= VAR_6->max_tbs) {
  FUNC_0(VAR_2, "Error can not send more than %d chunks\n",
   VAR_6->max_tbs);
  return -VAR_0;
 }

 FUNC_6(VAR_4, &VAR_8->addr);
 VAR_8->tb_len = FUNC_3(VAR_5);

 VAR_3->num_tbs = FUNC_3(VAR_7 + 1);

 return VAR_7;
}
