
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef scalar_t__ u32 ;
struct ath10k_pci {scalar_t__ mem_len; scalar_t__ mem; } ;
struct ath10k {int dummy; } ;


 struct ath10k_pci* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*,char*,scalar_t__,int,...) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static u32 FUNC_6(struct ath10k *VAR_0, u32 VAR_1)
{
 struct ath10k_pci *VAR_2 = FUNC_0(VAR_0);
 u32 VAR_3;
 int VAR_4;

 if (FUNC_5(VAR_1 + sizeof(VAR_3) > VAR_2->mem_len)) {
  FUNC_3(VAR_0, "refusing to read mmio out of bounds at 0x%08x - 0x%08zx (max 0x%08zx)\n",
       VAR_1, VAR_1 + sizeof(VAR_3), VAR_2->mem_len);
  return 0;
 }

 VAR_4 = FUNC_2(VAR_0);
 if (VAR_4) {
  FUNC_3(VAR_0, "failed to wake target for read32 at 0x%08x: %d\n",
       VAR_1, VAR_4);
  return 0xffffffff;
 }

 VAR_3 = FUNC_4(VAR_2->mem + VAR_1);
 FUNC_1(VAR_0);

 return VAR_3;
}
