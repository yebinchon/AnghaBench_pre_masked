
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mt76x02_dev*,int) ;
 int FUNC_3 (struct mt76x02_dev*,int ,int ) ;
 int FUNC_4 (struct mt76x02_dev*,int ,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct mt76x02_dev *VAR_4)
{
 u32 VAR_5 = FUNC_2(VAR_4, 0x10f4);

 if (!(VAR_5 & FUNC_0(29)) || !(VAR_5 & (FUNC_0(7) | FUNC_0(5))))
  return;

 FUNC_1(VAR_4->mt76.dev, "mac specific condition occurred\n");

 FUNC_3(VAR_4, VAR_0, VAR_3);
 FUNC_5(10);
 FUNC_4(VAR_4, VAR_0,
  VAR_2 | VAR_1);
}
