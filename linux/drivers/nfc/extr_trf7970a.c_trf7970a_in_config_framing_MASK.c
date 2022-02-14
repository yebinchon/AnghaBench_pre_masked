
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct trf7970a {scalar_t__ iso_ctrl_tech; int framing; scalar_t__ chip_status_ctrl; scalar_t__ iso_ctrl; scalar_t__ modulator_sys_clk_ctrl; scalar_t__ guard_time; int dev; void* tx_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct trf7970a*,int*) ;
 int FUNC_2 (struct trf7970a*,int ,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct trf7970a *VAR_9, int VAR_10)
{
 u8 VAR_11 = VAR_9->iso_ctrl_tech;
 bool VAR_12 = 0;
 int VAR_13;

 FUNC_0(VAR_9->dev, "framing: %d\n", VAR_10);

 switch (VAR_10) {
 case 137:
 case 136:
  VAR_9->tx_cmd = VAR_5;
  VAR_11 |= VAR_7;
  break;
 case 135:
 case 133:
 case 132:
 case 131:
 case 130:
 case 128:
 case 140:
 case 139:
 case 138:
 case 129:
  VAR_9->tx_cmd = VAR_4;
  VAR_11 &= ~VAR_7;
  break;
 case 134:
  VAR_9->tx_cmd = VAR_4;
  VAR_11 |= VAR_7;
  break;
 default:
  FUNC_0(VAR_9->dev, "Unsupported Framing: %d\n", VAR_10);
  return -VAR_1;
 }

 VAR_9->framing = VAR_10;

 if (!(VAR_9->chip_status_ctrl & VAR_3)) {
  VAR_13 = FUNC_1(VAR_9, &VAR_12);
  if (VAR_13)
   return VAR_13;

  if (VAR_12)
   return -VAR_0;
 }

 if (VAR_11 != VAR_9->iso_ctrl) {
  VAR_13 = FUNC_2(VAR_9, VAR_6, VAR_11);
  if (VAR_13)
   return VAR_13;

  VAR_9->iso_ctrl = VAR_11;

  VAR_13 = FUNC_2(VAR_9, VAR_8,
         VAR_9->modulator_sys_clk_ctrl);
  if (VAR_13)
   return VAR_13;
 }

 if (!(VAR_9->chip_status_ctrl & VAR_3)) {
  VAR_13 = FUNC_2(VAR_9, VAR_2,
         VAR_9->chip_status_ctrl |
         VAR_3);
  if (VAR_13)
   return VAR_13;

  VAR_9->chip_status_ctrl |= VAR_3;

  FUNC_3(VAR_9->guard_time, VAR_9->guard_time + 1000);
 }

 return 0;
}
