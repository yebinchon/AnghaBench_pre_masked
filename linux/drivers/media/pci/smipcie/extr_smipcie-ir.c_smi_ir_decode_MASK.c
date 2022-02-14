
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct smi_rc {int* irData; struct rc_dev* rc_dev; struct smi_dev* dev; } ;
struct smi_dev {int dummy; } ;
struct rc_dev {int dummy; } ;
struct ir_raw_event {int duration; scalar_t__ pulse; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rc_dev*) ;
 int FUNC_2 (struct rc_dev*,struct ir_raw_event*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct rc_dev*,int*,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_6(struct smi_rc *VAR_7)
{
 struct smi_dev *VAR_8 = VAR_7->dev;
 struct rc_dev *VAR_9 = VAR_7->rc_dev;
 u32 VAR_10, VAR_11;
 u8 VAR_12, VAR_13, VAR_14;

 VAR_10 = FUNC_4(VAR_2);

 if (VAR_10 & VAR_5) {
  VAR_13 = (u8) FUNC_4(VAR_1);

  VAR_14 = VAR_13/4;
  if (VAR_13 % 4)
   VAR_14 += 1;
  for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++) {
   VAR_11 = FUNC_4(VAR_0 + (VAR_12 * 4));

   VAR_7->irData[VAR_12*4 + 0] = (u8)(VAR_11);
   VAR_7->irData[VAR_12*4 + 1] = (u8)(VAR_11 >> 8);
   VAR_7->irData[VAR_12*4 + 2] = (u8)(VAR_11 >> 16);
   VAR_7->irData[VAR_12*4 + 3] = (u8)(VAR_11 >> 24);
  }
  FUNC_3(VAR_9, VAR_7->irData, VAR_13);
  FUNC_5(VAR_2, VAR_5);
 }

 if (VAR_10 & VAR_6) {
  struct ir_raw_event VAR_15 = {};

  VAR_15.pulse = 0;
  VAR_15.duration = FUNC_0(VAR_4 *
       VAR_3);
  FUNC_2(VAR_9, &VAR_15);
  FUNC_5(VAR_2, VAR_6);
 }

 FUNC_1(VAR_9);
}
