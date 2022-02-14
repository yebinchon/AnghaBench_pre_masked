
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct iwl_txq {int n_window; } ;



__attribute__((used)) static inline u16 FUNC_0(const struct iwl_txq *VAR_0, u32 VAR_1)
{
 return VAR_1 & (VAR_0->n_window - 1);
}
