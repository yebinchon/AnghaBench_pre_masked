
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sunxi_nfc {int dev; scalar_t__ regs; int complete; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (scalar_t__,int,int,int,unsigned int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct sunxi_nfc *VAR_6, u32 VAR_7,
     bool VAR_8, unsigned int VAR_9)
{
 int VAR_10;

 if (VAR_7 & ~VAR_3)
  return -VAR_0;

 if (!VAR_9)
  VAR_9 = VAR_2;

 if (!VAR_8) {
  FUNC_1(&VAR_6->complete);

  FUNC_5(VAR_7, VAR_6->regs + VAR_4);

  VAR_10 = FUNC_4(&VAR_6->complete,
      FUNC_2(VAR_9));
  if (!VAR_10)
   VAR_10 = -VAR_1;
  else
   VAR_10 = 0;

  FUNC_5(0, VAR_6->regs + VAR_4);
 } else {
  u32 VAR_11;

  VAR_10 = FUNC_3(VAR_6->regs + VAR_5, VAR_11,
      (VAR_11 & VAR_7) == VAR_7, 1,
      VAR_9 * 1000);
 }

 FUNC_5(VAR_7 & VAR_3, VAR_6->regs + VAR_5);

 if (VAR_10)
  FUNC_0(VAR_6->dev, "wait interrupt timedout\n");

 return VAR_10;
}
