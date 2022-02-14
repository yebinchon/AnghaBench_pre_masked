
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stmmac_priv {int ioaddr; int device; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int) ;

__attribute__((used)) static u32 FUNC_3(struct stmmac_priv *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = FUNC_2(VAR_0->ioaddr + VAR_1);

 if (!VAR_2) {
  FUNC_1(VAR_0->device, "Version ID not available\n");
  return 0x0;
 }

 FUNC_1(VAR_0->device, "User ID: 0x%x, Synopsys ID: 0x%x\n",
   (unsigned int)(VAR_2 & FUNC_0(15, 8)) >> 8,
   (unsigned int)(VAR_2 & FUNC_0(7, 0)));
 return VAR_2 & FUNC_0(7, 0);
}
