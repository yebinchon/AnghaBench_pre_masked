
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sunxi_nfc {int dev; scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct sunxi_nfc *VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3->regs + VAR_2, VAR_4,
     !(VAR_4 & VAR_0), 1,
     VAR_1 * 1000);
 if (VAR_5)
  FUNC_0(VAR_3->dev, "wait for empty cmd FIFO timedout\n");

 return VAR_5;
}
