
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct iwl_trans {int dummy; } ;
struct iwl_tfd_tb {int hi_n_len; int lo; } ;
struct iwl_tfd {size_t num_tbs; struct iwl_tfd_tb* tbs; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static inline void FUNC_3(struct iwl_trans *VAR_0, void *VAR_1,
           u8 VAR_2, dma_addr_t VAR_3, u16 VAR_4)
{
 struct iwl_tfd *VAR_5 = (void *)VAR_1;
 struct iwl_tfd_tb *VAR_6 = &VAR_5->tbs[VAR_2];

 u16 VAR_7 = VAR_4 << 4;

 FUNC_2(VAR_3, &VAR_6->lo);
 VAR_7 |= FUNC_1(VAR_3);

 VAR_6->hi_n_len = FUNC_0(VAR_7);

 VAR_5->num_tbs = VAR_2 + 1;
}
