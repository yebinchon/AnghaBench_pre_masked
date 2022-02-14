
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76x02_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mt76x02_dev*,int ,int) ;
 int FUNC_1 (struct mt76x02_dev*,int ,int ) ;
 int FUNC_2 (struct mt76x02_dev*,int ,int) ;
 int FUNC_3 (struct mt76x02_dev*,int,int *) ;
 int FUNC_4 (struct mt76x02_dev*) ;

void FUNC_5(struct mt76x02_dev *VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_6, VAR_1, (VAR_5 |
          VAR_4 |
          VAR_2));
 FUNC_1(VAR_6, VAR_1, VAR_3);
 FUNC_2(VAR_6, VAR_0, 0xffff);

 for (VAR_7 = 0; VAR_7 < 8; VAR_7++)
  FUNC_3(VAR_6, VAR_7, ((void*)0));

 FUNC_4(VAR_6);
}
