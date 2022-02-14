
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bdc {int dev; int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 int FUNC_4 (int ,char*,scalar_t__) ;
 int FUNC_5 (int ,char*,scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct bdc *VAR_8, u32 VAR_9, u32 VAR_10,
       u32 VAR_11, u32 VAR_12)
{
 u32 VAR_13 = VAR_7;
 u32 VAR_14;
 u32 VAR_15;

 FUNC_2(VAR_8->regs, VAR_0, VAR_10);
 FUNC_2(VAR_8->regs, VAR_1, VAR_11);
 FUNC_2(VAR_8->regs, VAR_2, VAR_12);



 FUNC_7();
 FUNC_2(VAR_8->regs, VAR_3, VAR_9 | VAR_5 | VAR_6);
 do {
  VAR_15 = FUNC_1(VAR_8->regs, VAR_3);
  FUNC_4(VAR_8->dev, "cmdsc=%x", VAR_15);
  VAR_14 = FUNC_0(VAR_15);
  if (VAR_14 != VAR_4) {
   FUNC_3(VAR_8->dev,
    "command completed cmd_sts:%x\n", VAR_14);
   return VAR_14;
  }
  FUNC_6(1);
 } while (VAR_13--);

 FUNC_5(VAR_8->dev,
  "command operation timedout cmd_status=%d\n", VAR_14);

 return VAR_14;
}
