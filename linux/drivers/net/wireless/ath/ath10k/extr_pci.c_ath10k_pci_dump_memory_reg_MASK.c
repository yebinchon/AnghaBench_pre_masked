
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct ath10k_pci {scalar_t__ mem; } ;
struct ath10k_mem_region {scalar_t__ len; scalar_t__ start; } ;
struct ath10k {int dummy; } ;


 struct ath10k_pci* FUNC_0 (struct ath10k*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct ath10k *VAR_0,
          const struct ath10k_mem_region *VAR_1,
          u8 *VAR_2)
{
 struct ath10k_pci *VAR_3 = FUNC_0(VAR_0);
 u32 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->len; VAR_4 += 4)
  *(u32 *)(VAR_2 + VAR_4) = FUNC_1(VAR_3->mem + VAR_1->start + VAR_4);

 return VAR_1->len;
}
