
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct reg_channel_bounds {int member_0; int member_1; scalar_t__ num; scalar_t__ start; } ;
struct mt7601u_dev {TYPE_1__* ee; int dev; } ;
struct TYPE_2__ {struct reg_channel_bounds reg; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,char*,int,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct mt7601u_dev *VAR_1, u8 *VAR_2)
{



 static const struct reg_channel_bounds VAR_3[] = {

  { 1, 11 }, { 1, 13 }, { 10, 2 }, { 10, 4 },
  { 14, 1 }, { 1, 14 }, { 3, 7 }, { 5, 9 },

  { 1, 11 }, { 1, 14 }
 };
 u8 VAR_4 = VAR_2[VAR_0];
 int VAR_5 = -1;

 if (VAR_4 < 8)
  VAR_5 = VAR_4;
 if (VAR_4 > 31 && VAR_4 < 33)
  VAR_5 = VAR_4 - 32 + 8;

 if (VAR_5 != -1)
  FUNC_0(VAR_1->dev,
    "EEPROM country region %02hhx (channels %hhd-%hhd)\n",
    VAR_4, VAR_3[VAR_5].start,
    VAR_3[VAR_5].start + VAR_3[VAR_5].num - 1);
 else
  VAR_5 = 5;

 VAR_1->ee->reg = VAR_3[VAR_5];




}
