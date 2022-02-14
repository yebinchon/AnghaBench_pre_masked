
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mt7601u_dev {int dev; TYPE_1__* ee; } ;
typedef int s8 ;
struct TYPE_2__ {int* rssi_offset; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_1(struct mt7601u_dev *VAR_1, u8 *VAR_2)
{
 int VAR_3;
 s8 *VAR_4 = VAR_1->ee->rssi_offset;

 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  VAR_4[VAR_3] = VAR_2[VAR_0 + VAR_3];

  if (VAR_4[VAR_3] < -10 || VAR_4[VAR_3] > 10) {
   FUNC_0(VAR_1->dev,
     "Warning: EEPROM RSSI is invalid %02hhx\n",
     VAR_4[VAR_3]);
   VAR_4[VAR_3] = 0;
  }
 }
}
