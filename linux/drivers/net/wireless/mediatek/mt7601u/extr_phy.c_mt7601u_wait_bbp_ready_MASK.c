
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mt7601u_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mt7601u_dev*,int ) ;

int FUNC_2(struct mt7601u_dev *VAR_2)
{
 int VAR_3 = 20;
 u8 VAR_4;

 do {
  VAR_4 = FUNC_1(VAR_2, VAR_1);
  if (VAR_4 && ~VAR_4)
   break;
 } while (--VAR_3);

 if (!VAR_3) {
  FUNC_0(VAR_2->dev, "Error: BBP is not ready\n");
  return -VAR_0;
 }

 return 0;
}
