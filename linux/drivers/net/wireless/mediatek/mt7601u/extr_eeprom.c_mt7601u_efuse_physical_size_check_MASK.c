
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mt7601u_dev {int dev; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mt7601u_dev*,int,int *,int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int
FUNC_4(struct mt7601u_dev *VAR_4)
{
 const int VAR_5 = FUNC_0(VAR_3, 16);
 u8 VAR_6[FUNC_3(VAR_3, 16)];
 int VAR_7, VAR_8;
 u32 VAR_9 = 0, VAR_10 = 0, VAR_11;

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  VAR_7 = FUNC_2(VAR_4, VAR_2 + VAR_8 * 16,
      VAR_6 + VAR_8 * 16, VAR_1);
  if (VAR_7)
   return VAR_7;
 }

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  if (!VAR_6[VAR_8]) {
   if (!VAR_9)
    VAR_9 = VAR_2 + VAR_8;
   VAR_10 = VAR_2 + VAR_8;
  }
 VAR_11 = VAR_10 - VAR_9 + 1;

 if (VAR_3 - VAR_11 < 5) {
  FUNC_1(VAR_4->dev, "Error: your device needs default EEPROM file and this driver doesn't support it!\n");
  return -VAR_0;
 }

 return 0;
}
