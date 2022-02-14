
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct esp {scalar_t__ dma_regs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct esp*,int,int ) ;
 int FUNC_2 (struct esp*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static void FUNC_8(struct esp *VAR_5, u32 VAR_6, u32 VAR_7,
      u32 VAR_8, int VAR_9, u8 VAR_10)
{
 FUNC_0(!(VAR_10 & VAR_2));

 FUNC_1(VAR_5, (VAR_7 >> 0) & 0xff, VAR_3);
 FUNC_1(VAR_5, (VAR_7 >> 8) & 0xff, VAR_4);
 FUNC_3 ((int)VAR_5->dma_regs);
 if (VAR_9)
  FUNC_7 ((int)VAR_5->dma_regs, VAR_0);
 else
  FUNC_7 ((int)VAR_5->dma_regs, VAR_1);

 FUNC_5 ((int)VAR_5->dma_regs, VAR_6);
 FUNC_6 ((int)VAR_5->dma_regs, VAR_8);
 FUNC_4 ((int)VAR_5->dma_regs);

 FUNC_2(VAR_5, VAR_10);
}
