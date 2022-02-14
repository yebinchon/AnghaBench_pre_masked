
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_desc {int des3; int des2; int des1; int des0; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (struct dma_desc*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, unsigned int VAR_1, bool VAR_2)
{
 struct dma_desc *VAR_3 = (struct dma_desc *)VAR_0;
 int VAR_4;

 FUNC_1("%s descriptor ring:\n", VAR_2 ? "RX" : "TX");

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  FUNC_1("%03d [0x%x]: 0x%x 0x%x 0x%x 0x%x\n",
   VAR_4, (unsigned int)FUNC_2(VAR_3),
   FUNC_0(VAR_3->des0), FUNC_0(VAR_3->des1),
   FUNC_0(VAR_3->des2), FUNC_0(VAR_3->des3));
  VAR_3++;
 }
}
