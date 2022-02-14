
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt76x02_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct mt76x02_dev*,int,int) ;
 int FUNC_3 (struct mt76x02_dev*,int,int) ;
 int FUNC_4 (struct mt76x02_dev*) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct mt76x02_dev *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_2 ? 8 : 0;
 u32 VAR_4 = (FUNC_0(1) | FUNC_0(3) | FUNC_0(4) | FUNC_0(5)) << VAR_3;


 FUNC_3(VAR_1, FUNC_1(VAR_0, 0x130), FUNC_0(0) << VAR_3);
 FUNC_5(10, 20);


 FUNC_3(VAR_1, FUNC_1(VAR_0, 0x130), VAR_4);
 FUNC_5(10, 20);


 FUNC_2(VAR_1, FUNC_1(VAR_0, 0x130), FUNC_0(2) << VAR_3);
 FUNC_5(10, 20);

 FUNC_4(VAR_1);

 FUNC_3(VAR_1, 0x530, 0xf);
}
