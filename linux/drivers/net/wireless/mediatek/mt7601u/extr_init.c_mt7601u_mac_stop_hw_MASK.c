
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt7601u_dev {int dev; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mt7601u_dev*,int ,int) ;
 int FUNC_3 (struct mt7601u_dev*,int ,int ,int ,int) ;
 int FUNC_4 (struct mt7601u_dev*,int) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct mt7601u_dev *VAR_16)
{
 int VAR_17, VAR_18;

 if (FUNC_5(VAR_0, &VAR_16->state))
  return;

 FUNC_2(VAR_16, VAR_1, VAR_5 |
     VAR_3 | VAR_4 |
     VAR_2);

 if (!FUNC_3(VAR_16, VAR_13, VAR_15, 0, 1000))
  FUNC_0(VAR_16->dev, "Warning: TX DMA did not stop!\n");


 VAR_17 = 200;
 while (VAR_17-- && ((FUNC_4(VAR_16, 0x0438) & 0xffffffff) ||
         (FUNC_4(VAR_16, 0x0a30) & 0x000000ff) ||
         (FUNC_4(VAR_16, 0x0a34) & 0x00ff00ff)))
  FUNC_1(10);

 if (!FUNC_3(VAR_16, VAR_6, VAR_8, 0, 1000))
  FUNC_0(VAR_16->dev, "Warning: MAC TX did not stop!\n");

 FUNC_2(VAR_16, VAR_9, VAR_10 |
      VAR_11);


 VAR_18 = 0;
 VAR_17 = 200;
 while (VAR_17--) {
  if (!(FUNC_4(VAR_16, VAR_12) & 0x00ff0000) &&
      !FUNC_4(VAR_16, 0x0a30) &&
      !FUNC_4(VAR_16, 0x0a34)) {
   if (VAR_18++ > 5)
    break;
   continue;
  }
  FUNC_1(1);
 }

 if (!FUNC_3(VAR_16, VAR_6, VAR_7, 0, 1000))
  FUNC_0(VAR_16->dev, "Warning: MAC RX did not stop!\n");

 if (!FUNC_3(VAR_16, VAR_13, VAR_14, 0, 1000))
  FUNC_0(VAR_16->dev, "Warning: RX DMA did not stop!\n");
}
