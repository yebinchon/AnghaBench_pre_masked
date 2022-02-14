
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mt76x02_dev*,int ,int) ;
 int FUNC_3 (struct mt76x02_dev*,int ,int ,int ,int) ;
 int FUNC_4 (struct mt76x02_dev*,int) ;

void FUNC_5(struct mt76x02_dev *VAR_9)
{
 int VAR_10 = 200, VAR_11 = 0;

 FUNC_2(VAR_9, VAR_7, VAR_8);


 while (VAR_10-- && ((FUNC_4(VAR_9, 0x0438) & 0xffffffff) ||
         (FUNC_4(VAR_9, 0x0a30) & 0x000000ff) ||
         (FUNC_4(VAR_9, 0x0a34) & 0x00ff00ff)))
  FUNC_1(10);

 if (!FUNC_3(VAR_9, VAR_0, VAR_2, 0, 1000))
  FUNC_0(VAR_9->mt76.dev, "Warning: MAC TX did not stop!\n");

 FUNC_2(VAR_9, VAR_3, VAR_4 |
      VAR_5);


 for (VAR_10 = 0; VAR_10 < 200; VAR_10++) {
  if (!(FUNC_4(VAR_9, VAR_6) & 0x00ff0000) &&
      !FUNC_4(VAR_9, 0x0a30) &&
      !FUNC_4(VAR_9, 0x0a34)) {
   if (VAR_11++ > 5)
    break;
   continue;
  }
  FUNC_1(1);
 }

 if (!FUNC_3(VAR_9, VAR_0, VAR_1, 0, 1000))
  FUNC_0(VAR_9->mt76.dev, "Warning: MAC RX did not stop!\n");
}
