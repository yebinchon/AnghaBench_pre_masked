
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct ath10k_ce {size_t* vaddr_rri; } ;
struct ath10k {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct ath10k_ce* FUNC_0 (struct ath10k*) ;

__attribute__((used)) static inline
 u32 FUNC_1(struct ath10k *VAR_2, u32 VAR_3)
{
 struct ath10k_ce *VAR_4 = FUNC_0(VAR_2);

 return (VAR_4->vaddr_rri[VAR_3] >> VAR_0) &
  VAR_1;
}
