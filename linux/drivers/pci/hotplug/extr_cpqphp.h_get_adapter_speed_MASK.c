
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct controller {scalar_t__ pcix_support; scalar_t__ hpc_reg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline u8 FUNC_2(struct controller *VAR_5, u8 VAR_6)
{
 u32 VAR_7 = FUNC_1(VAR_5->hpc_reg + VAR_0);
 FUNC_0("slot: %d, PCIXCAP: %8x\n", VAR_6, VAR_7);
 if (VAR_5->pcix_support) {
  if (VAR_7 & (0x10000 << VAR_6))
   return VAR_1;
  if (VAR_7 & (0x100 << VAR_6))
   return VAR_4;
 }

 if (VAR_7 & (0x01 << VAR_6))
  return VAR_3;

 return VAR_2;
}
