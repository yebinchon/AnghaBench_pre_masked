
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mxic_nand_ctlr {int dev; scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (void*,int*,unsigned int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int,int,int ,int ) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct mxic_nand_ctlr *VAR_5, const void *VAR_6,
         void *VAR_7, unsigned int VAR_8)
{
 unsigned int VAR_9 = 0;

 while (VAR_9 < VAR_8) {
  unsigned int VAR_10 = VAR_8 - VAR_9;
  u32 VAR_11 = 0xffffffff;
  u32 VAR_12;
  int VAR_13;

  if (VAR_10 > 4)
   VAR_10 = 4;

  if (VAR_6)
   FUNC_2(&VAR_11, VAR_6 + VAR_9, VAR_10);

  VAR_13 = FUNC_4(VAR_5->regs + VAR_1, VAR_12,
      VAR_12 & VAR_2, 0, VAR_4);
  if (VAR_13)
   return VAR_13;

  FUNC_5(VAR_11, VAR_5->regs + FUNC_0(VAR_10 % 4));

  VAR_13 = FUNC_4(VAR_5->regs + VAR_1, VAR_12,
      VAR_12 & VAR_2, 0, VAR_4);
  if (VAR_13)
   return VAR_13;

  VAR_13 = FUNC_4(VAR_5->regs + VAR_1, VAR_12,
      VAR_12 & VAR_0, 0,
      VAR_4);
  if (VAR_13)
   return VAR_13;

  VAR_11 = FUNC_3(VAR_5->regs + VAR_3);
  if (VAR_7) {
   VAR_11 >>= (8 * (4 - VAR_10));
   FUNC_2(VAR_7 + VAR_9, &VAR_11, VAR_10);
  }
  if (FUNC_3(VAR_5->regs + VAR_1) & VAR_0)
   FUNC_1(VAR_5->dev, "RX FIFO not empty\n");

  VAR_9 += VAR_10;
 }

 return 0;
}
