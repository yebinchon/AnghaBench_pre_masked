
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mt76x02_dev*,int,int *,int,int ) ;

__attribute__((used)) static int
FUNC_2(struct mt76x02_dev *VAR_5)
{
 u8 VAR_6[VAR_4 * 16];
 int VAR_7, VAR_8;
 u32 VAR_9 = 0, VAR_10 = 0, VAR_11;

 VAR_7 = FUNC_1(VAR_5, VAR_2, VAR_6,
         sizeof(VAR_6), VAR_1);
 if (VAR_7)
  return VAR_7;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  if (!VAR_6[VAR_8]) {
   if (!VAR_9)
    VAR_9 = VAR_2 + VAR_8;
   VAR_10 = VAR_2 + VAR_8;
  }
 VAR_11 = VAR_10 - VAR_9 + 1;

 if (VAR_3 - VAR_11 < 5) {
  FUNC_0(VAR_5->mt76.dev,
   "driver does not support default EEPROM\n");
  return -VAR_0;
 }

 return 0;
}
