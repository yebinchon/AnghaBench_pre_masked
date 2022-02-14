
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct dma_desc {int des3; int des2; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (struct dma_desc*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, unsigned int VAR_1, bool VAR_2)
{
 struct dma_desc *VAR_3 = (struct dma_desc *)VAR_0;
 int VAR_4;

 FUNC_0("%s descriptor ring:\n", VAR_2 ? "RX" : "TX");

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  u64 VAR_5;

  VAR_5 = *(u64 *)VAR_3;
  FUNC_0("%03d [0x%x]: 0x%x 0x%x 0x%x 0x%x",
   VAR_4, (unsigned int)FUNC_1(VAR_3),
   (unsigned int)VAR_5, (unsigned int)(VAR_5 >> 32),
   VAR_3->des2, VAR_3->des3);
  VAR_3++;
 }
 FUNC_0("\n");
}
