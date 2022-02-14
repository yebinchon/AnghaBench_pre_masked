
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mt76x02_dev*,int ) ;
 int FUNC_2 (struct mt76x02_dev*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct mt76x02_dev *VAR_6)
{
 u32 VAR_7;

 VAR_7 = FUNC_1(VAR_6, VAR_1);

 VAR_7 |= VAR_3 |
        VAR_5;




 VAR_7 &= ~VAR_2;
 FUNC_2(VAR_6, VAR_1, VAR_7);

 VAR_7 = FUNC_1(VAR_6, VAR_0);
 if (VAR_7 & 1)
  FUNC_0(VAR_6->mt76.dev, "MCU not ready\n");

 VAR_7 = FUNC_1(VAR_6, VAR_1);

 VAR_7 |= VAR_4;
 FUNC_2(VAR_6, VAR_1, VAR_7);
 VAR_7 &= ~VAR_4;
 FUNC_2(VAR_6, VAR_1, VAR_7);
}
