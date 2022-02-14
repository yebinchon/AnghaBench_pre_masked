
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76x02_dev {int aggr_stats; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct mt76x02_dev*,int ) ;
 int FUNC_3 (struct mt76x02_dev*) ;

int FUNC_4(struct mt76x02_dev *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 16; VAR_2++)
  FUNC_2(VAR_1, FUNC_0(VAR_2));

 for (VAR_2 = 0; VAR_2 < 16; VAR_2++)
  FUNC_2(VAR_1, VAR_0);

 FUNC_1(VAR_1->aggr_stats, 0, sizeof(VAR_1->aggr_stats));
 FUNC_3(VAR_1);

 return 0;
}
