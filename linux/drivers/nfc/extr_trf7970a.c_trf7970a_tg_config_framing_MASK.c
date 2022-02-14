
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct trf7970a {scalar_t__ iso_ctrl_tech; scalar_t__ iso_ctrl; int framing; scalar_t__ modulator_sys_clk_ctrl; scalar_t__ chip_status_ctrl; int dev; void* tx_cmd; } ;


 int VAR_0 ;






 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct trf7970a*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct trf7970a *VAR_8, int VAR_9)
{
 u8 VAR_10 = VAR_8->iso_ctrl_tech;
 int VAR_11;

 FUNC_0(VAR_8->dev, "framing: %d\n", VAR_9);

 switch (VAR_9) {
 case 132:
  VAR_8->tx_cmd = VAR_4;
  VAR_10 |= VAR_6;
  break;
 case 131:
 case 130:
 case 133:

  VAR_10 = VAR_8->iso_ctrl;
  break;
 case 129:
  VAR_8->tx_cmd = VAR_3;
  VAR_10 &= ~VAR_6;
  break;
 case 128:
  VAR_8->tx_cmd = VAR_3;
  VAR_10 &= ~VAR_6;
  break;
 default:
  FUNC_0(VAR_8->dev, "Unsupported Framing: %d\n", VAR_9);
  return -VAR_0;
 }

 VAR_8->framing = VAR_9;

 if (VAR_10 != VAR_8->iso_ctrl) {
  VAR_11 = FUNC_1(VAR_8, VAR_5, VAR_10);
  if (VAR_11)
   return VAR_11;

  VAR_8->iso_ctrl = VAR_10;

  VAR_11 = FUNC_1(VAR_8, VAR_7,
         VAR_8->modulator_sys_clk_ctrl);
  if (VAR_11)
   return VAR_11;
 }

 if (!(VAR_8->chip_status_ctrl & VAR_2)) {
  VAR_11 = FUNC_1(VAR_8, VAR_1,
         VAR_8->chip_status_ctrl |
         VAR_2);
  if (VAR_11)
   return VAR_11;

  VAR_8->chip_status_ctrl |= VAR_2;
 }

 return 0;
}
