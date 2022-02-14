
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; int mac_work; } ;
struct mt76x02_dev {TYPE_1__ mt76; int cal_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mt76x02_dev*,int ,int ) ;
 int FUNC_3 (struct mt76x02_dev*,int ,int ,int ,int) ;
 int FUNC_4 (struct mt76x02_dev*) ;

__attribute__((used)) static void FUNC_5(struct mt76x02_dev *VAR_5)
{
 FUNC_0(&VAR_5->cal_work);
 FUNC_0(&VAR_5->mt76.mac_work);

 if (!FUNC_3(VAR_5, VAR_0, VAR_3,
         0, 1000))
  FUNC_1(VAR_5->mt76.dev, "TX DMA did not stop\n");
 FUNC_2(VAR_5, VAR_0, VAR_4);

 FUNC_4(VAR_5);

 if (!FUNC_3(VAR_5, VAR_0, VAR_1,
         0, 1000))
  FUNC_1(VAR_5->mt76.dev, "TX DMA did not stop\n");
 FUNC_2(VAR_5, VAR_0, VAR_2);
}
