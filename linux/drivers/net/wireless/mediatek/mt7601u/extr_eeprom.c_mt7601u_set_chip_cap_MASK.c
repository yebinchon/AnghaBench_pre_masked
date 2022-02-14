
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mt7601u_dev {int dev; TYPE_1__* ee; } ;
struct TYPE_2__ {int tssi_enabled; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct mt7601u_dev*,int *) ;

__attribute__((used)) static void
FUNC_5(struct mt7601u_dev *VAR_6, u8 *VAR_7)
{
 u16 VAR_8 = FUNC_3(VAR_7 + VAR_0);
 u16 VAR_9 = FUNC_3(VAR_7 + VAR_3);

 if (!FUNC_2(VAR_9 & 0xff))
  VAR_9 &= 0xff00;

 VAR_6->ee->tssi_enabled = FUNC_4(VAR_6, VAR_7) &&
    !(VAR_9 & VAR_5);

 if (VAR_9 & VAR_4)
  FUNC_1(VAR_6->dev,
   "Error: this driver does not support HW RF ctrl\n");

 if (!FUNC_2(VAR_8 >> 8))
  return;

 if (FUNC_0(VAR_1, VAR_8) > 1 ||
     FUNC_0(VAR_2, VAR_8) > 1)
  FUNC_1(VAR_6->dev,
   "Error: device has more than 1 RX/TX stream!\n");
}
