
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt7601u_dev {int tssi_read_trig; int dev; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mt7601u_dev*,int ,int) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct mt7601u_dev *VAR_2, int VAR_3)
{
 int VAR_4;

 if (!FUNC_2(VAR_1, &VAR_2->state))
  return 0;

 VAR_4 = FUNC_1(VAR_2, VAR_0,
       VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_2->dev, "Warning: MCU TSSI read kick failed\n");
  return VAR_4;
 }

 VAR_2->tssi_read_trig = 1;

 return 0;
}
