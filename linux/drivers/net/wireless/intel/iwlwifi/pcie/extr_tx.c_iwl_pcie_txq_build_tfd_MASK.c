
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct iwl_txq {int write_ptr; void* tfds; } ;
struct iwl_trans_pcie {int tfd_size; scalar_t__ max_tbs; } ;
struct iwl_trans {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_trans*,char*,scalar_t__) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int,char*,unsigned long long) ;
 scalar_t__ FUNC_3 (struct iwl_trans*,void*) ;
 int FUNC_4 (struct iwl_trans*,void*,scalar_t__,int,int ) ;
 int FUNC_5 (void*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct iwl_trans *VAR_2, struct iwl_txq *VAR_3,
      dma_addr_t VAR_4, u16 VAR_5, bool VAR_6)
{
 struct iwl_trans_pcie *VAR_7 = FUNC_1(VAR_2);
 void *VAR_8;
 u32 VAR_9;

 VAR_8 = VAR_3->tfds + VAR_7->tfd_size * VAR_3->write_ptr;

 if (VAR_6)
  FUNC_5(VAR_8, 0, VAR_7->tfd_size);

 VAR_9 = FUNC_3(VAR_2, VAR_8);


 if (VAR_9 >= VAR_7->max_tbs) {
  FUNC_0(VAR_2, "Error can not send more than %d chunks\n",
   VAR_7->max_tbs);
  return -VAR_0;
 }

 if (FUNC_2(VAR_4 & ~VAR_1,
   "Unaligned address = %llx\n", (unsigned long long)VAR_4))
  return -VAR_0;

 FUNC_4(VAR_2, VAR_8, VAR_9, VAR_4, VAR_5);

 return VAR_9;
}
