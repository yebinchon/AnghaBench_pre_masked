
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76x02_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mt76x02_dev*,int,int) ;
 int FUNC_2 (struct mt76x02_dev*,int,int) ;
 int FUNC_3 (struct mt76x02_dev*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct mt76x02_dev *VAR_0, int VAR_1)
{
 int VAR_2 = VAR_1 ? 8 : 0;


 FUNC_2(VAR_0, 0x10130, FUNC_0(0) << VAR_2);
 FUNC_4(10);


 FUNC_2(VAR_0, 0x10130, (FUNC_0(1) | FUNC_0(3) | FUNC_0(4) | FUNC_0(5)) << VAR_2);
 FUNC_4(10);


 FUNC_1(VAR_0, 0x10130, FUNC_0(2) << VAR_2);
 FUNC_4(10);

 FUNC_3(VAR_0);

 FUNC_2(VAR_0, 0x530, 0xf);
}
