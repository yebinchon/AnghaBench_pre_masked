
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sband; } ;
struct TYPE_4__ {int sband; } ;
struct TYPE_6__ {TYPE_2__ sband_5g; TYPE_1__ sband_2g; } ;
struct mt76x02_dev {TYPE_3__ mt76; int cal_work; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_3__*,int,int ,int ) ;
 int FUNC_3 (struct mt76x02_dev*) ;
 int FUNC_4 (struct mt76x02_dev*) ;
 int FUNC_5 (struct mt76x02_dev*) ;
 int VAR_0 ;
 int FUNC_6 (struct mt76x02_dev*) ;
 int FUNC_7 (struct mt76x02_dev*,int *) ;
 int VAR_1 ;
 int FUNC_8 (struct mt76x02_dev*) ;

int FUNC_9(struct mt76x02_dev *VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_2->cal_work, VAR_1);

 FUNC_5(VAR_2);

 VAR_3 = FUNC_6(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_3(VAR_2);

 VAR_3 = FUNC_2(&VAR_2->mt76, 1, VAR_0,
       FUNC_0(VAR_0));
 if (VAR_3)
  goto fail;

 FUNC_4(VAR_2);
 FUNC_7(VAR_2, &VAR_2->mt76.sband_2g.sband);
 FUNC_7(VAR_2, &VAR_2->mt76.sband_5g.sband);

 return 0;

fail:
 FUNC_8(VAR_2);
 return VAR_3;
}
