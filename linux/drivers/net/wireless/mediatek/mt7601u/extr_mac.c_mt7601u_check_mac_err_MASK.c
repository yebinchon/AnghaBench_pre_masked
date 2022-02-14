
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7601u_dev {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mt7601u_dev*,int) ;
 int FUNC_3 (struct mt7601u_dev*,int ,int ) ;
 int FUNC_4 (struct mt7601u_dev*,int ,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct mt7601u_dev *VAR_2)
{
 u32 VAR_3 = FUNC_2(VAR_2, 0x10f4);

 if (!(VAR_3 & FUNC_0(29)) || !(VAR_3 & (FUNC_0(7) | FUNC_0(5))))
  return;

 FUNC_1(VAR_2->dev, "Error: MAC specific condition occurred\n");

 FUNC_4(VAR_2, VAR_0, VAR_1);
 FUNC_5(10);
 FUNC_3(VAR_2, VAR_0, VAR_1);
}
