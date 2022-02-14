
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct ath10k_pci {scalar_t__ mem; } ;
struct ath10k_mem_region {scalar_t__ start; scalar_t__ len; } ;
struct ath10k {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ath10k_pci* FUNC_0 (struct ath10k*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct ath10k *VAR_3,
           const struct ath10k_mem_region *VAR_4,
           u8 *VAR_5)
{
 struct ath10k_pci *VAR_6 = FUNC_0(VAR_3);
 u32 VAR_7, VAR_8;

 VAR_7 = FUNC_1(VAR_6->mem + VAR_2);
 VAR_7 += VAR_4->start;

 for (VAR_8 = 0; VAR_8 < VAR_4->len; VAR_8 += 4) {
  FUNC_2(VAR_7 + VAR_8, VAR_6->mem + VAR_0);
  *(u32 *)(VAR_5 + VAR_8) = FUNC_1(VAR_6->mem + VAR_1);
 }

 return VAR_4->len;
}
