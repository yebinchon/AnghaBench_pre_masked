
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct iwl_tfh_tfd {struct iwl_tfh_tb* tbs; } ;
struct iwl_tfh_tb {int addr; } ;
struct iwl_tfd_tb {int hi_n_len; int lo; } ;
struct iwl_tfd {struct iwl_tfd_tb* tbs; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {scalar_t__ use_tfh; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline dma_addr_t FUNC_3(struct iwl_trans *VAR_0,
        void *VAR_1, u8 VAR_2)
{

 if (VAR_0->trans_cfg->use_tfh) {
  struct iwl_tfh_tfd *VAR_3 = VAR_1;
  struct iwl_tfh_tb *VAR_4 = &VAR_3->tbs[VAR_2];

  return (dma_addr_t)(FUNC_2(VAR_4->addr));
 } else {
  struct iwl_tfd *VAR_5 = VAR_1;
  struct iwl_tfd_tb *VAR_6 = &VAR_5->tbs[VAR_2];
  dma_addr_t VAR_7 = FUNC_0(&VAR_6->lo);
  dma_addr_t VAR_8;

  if (sizeof(dma_addr_t) <= sizeof(u32))
   return VAR_7;

  VAR_8 = FUNC_1(VAR_6->hi_n_len) & 0xF;






  return VAR_7 | ((VAR_8 << 16) << 16);
 }
}
