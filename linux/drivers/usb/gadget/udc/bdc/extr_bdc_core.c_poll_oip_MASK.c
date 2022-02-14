
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bdc {int dev; int regs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct bdc *VAR_3, int VAR_4)
{
 u32 VAR_5;

 while (VAR_4) {
  VAR_5 = FUNC_1(VAR_3->regs, VAR_0);
  if (FUNC_0(VAR_5) != VAR_1) {
   FUNC_2(VAR_3->dev,
    "poll_oip complete status=%d",
    FUNC_0(VAR_5));
   return 0;
  }
  FUNC_4(10);
  VAR_4 -= 10;
 }
 FUNC_3(VAR_3->dev, "Err: operation timedout BDCSC: 0x%08x\n", VAR_5);

 return -VAR_2;
}
