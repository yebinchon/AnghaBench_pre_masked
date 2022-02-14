
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dwc3 {scalar_t__ revision; int dev; int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_6 ;

 scalar_t__ VAR_7 ;

 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct dwc3*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct dwc3 *VAR_10)
{
 int VAR_11;

 int VAR_12;
 u32 VAR_13;

 u8 VAR_14;
 u8 VAR_15;







 VAR_13 = FUNC_3(VAR_10->regs, VAR_2);

 VAR_15 = VAR_13 & VAR_3;
 if ((VAR_15 == VAR_4) ||
     (VAR_15 == VAR_5))
  return 0;

 VAR_14 = FUNC_0(VAR_13);

 switch (VAR_14) {
 case 129:
 case 128:
  break;
 default:
  return -VAR_9;
 }

 VAR_12 = FUNC_2(VAR_10, VAR_6);
 if (VAR_12 < 0) {
  FUNC_1(VAR_10->dev, "failed to put link in Recovery\n");
  return VAR_12;
 }


 if (VAR_10->revision < VAR_8) {

  VAR_13 = FUNC_3(VAR_10->regs, VAR_0);
  VAR_13 &= ~VAR_1;
  FUNC_4(VAR_10->regs, VAR_0, VAR_13);
 }


 VAR_11 = 20000;

 while (VAR_11--) {
  VAR_13 = FUNC_3(VAR_10->regs, VAR_2);


  if (FUNC_0(VAR_13) == VAR_7)
   break;
 }

 if (FUNC_0(VAR_13) != VAR_7) {
  FUNC_1(VAR_10->dev, "failed to send remote wakeup\n");
  return -VAR_9;
 }

 return 0;
}
