
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt76x02_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mt76x02_dev*,int,int) ;
 int FUNC_2 (struct mt76x02_dev*,int,int,int,int) ;
 int FUNC_3 (struct mt76x02_dev*,int,int) ;
 int FUNC_4 (struct mt76x02_dev*,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct mt76x02_dev *VAR_5)
{
 u32 VAR_6;


 FUNC_3(VAR_5, VAR_0, VAR_1);

 VAR_6 = VAR_4 |
       VAR_2 |
       VAR_3;

 FUNC_2(VAR_5, VAR_0, VAR_6, VAR_6, 1000);

 FUNC_1(VAR_5, VAR_0, 0x7f << 16);
 FUNC_5(10);

 FUNC_1(VAR_5, VAR_0, 0xf << 24);
 FUNC_5(10);

 FUNC_3(VAR_5, VAR_0, 0xf << 24);
 FUNC_1(VAR_5, VAR_0, 0xfff);


 FUNC_1(VAR_5, 0x11204, FUNC_0(3));


 FUNC_3(VAR_5, 0x10080, FUNC_0(0));


 FUNC_1(VAR_5, 0x10064, FUNC_0(18));

 FUNC_4(VAR_5, 0);
 FUNC_4(VAR_5, 1);
}
