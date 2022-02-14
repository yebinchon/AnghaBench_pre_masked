
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct solo_p2m_desc {int ctrl; int dma_addr; int ext_addr; int cfg; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int) ;

void FUNC_6(struct solo_p2m_desc *VAR_3, int VAR_4,
   dma_addr_t VAR_5, u32 VAR_6, u32 VAR_7,
   int VAR_8, u32 VAR_9)
{
 FUNC_5(VAR_5 & 0x03);
 FUNC_5(!VAR_7);

 VAR_3->cfg = FUNC_1(VAR_7 >> 2);
 VAR_3->ctrl = FUNC_0(VAR_0) |
  (VAR_4 ? VAR_2 : 0) | VAR_1;

 if (VAR_8) {
  VAR_3->cfg |= FUNC_2(VAR_9 >> 2);
  VAR_3->ctrl |= FUNC_3(VAR_7 >> 2) |
    FUNC_4(VAR_8);
 }

 VAR_3->dma_addr = VAR_5;
 VAR_3->ext_addr = VAR_6;
}
