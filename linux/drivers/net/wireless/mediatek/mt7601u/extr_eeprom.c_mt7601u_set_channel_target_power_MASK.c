
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mt7601u_dev {TYPE_1__* ee; int dev; } ;
struct TYPE_2__ {int chan_pwr; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct mt7601u_dev *VAR_1,
          u8 *VAR_2, u8 VAR_3)
{
 u8 VAR_4 = VAR_2[VAR_0];

 if (VAR_4 > VAR_3 || !VAR_4) {
  FUNC_0(VAR_1->dev, "Error: EEPROM trgt power invalid %hhx!\n",
    VAR_4);
  VAR_4 = 0x20;
 }

 FUNC_1(VAR_1->ee->chan_pwr, VAR_4, sizeof(VAR_1->ee->chan_pwr));
}
