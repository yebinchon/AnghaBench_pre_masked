
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int sband; } ;
struct TYPE_7__ {scalar_t__ has_2ghz; scalar_t__ has_5ghz; } ;
struct TYPE_5__ {int sband; } ;
struct TYPE_8__ {TYPE_2__ sband_2g; TYPE_3__ cap; TYPE_1__ sband_5g; } ;
struct mt76x02_dev {TYPE_4__ mt76; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,int,int ,int ) ;
 int FUNC_2 (struct mt76x02_dev*) ;
 int FUNC_3 (struct mt76x02_dev*) ;
 int FUNC_4 (struct mt76x02_dev*) ;
 int VAR_0 ;
 int FUNC_5 (struct mt76x02_dev*,int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct mt76x02_dev *VAR_1)
{
 int VAR_2;

 FUNC_4(VAR_1);
 FUNC_2(VAR_1);

 VAR_2 = FUNC_1(&VAR_1->mt76, 1, VAR_0,
       FUNC_0(VAR_0));
 if (VAR_2)
  return VAR_2;

 if (VAR_1->mt76.cap.has_5ghz) {

  FUNC_6(&VAR_1->mt76.sband_5g.sband);
  FUNC_5(VAR_1, &VAR_1->mt76.sband_5g.sband);
 }

 if (VAR_1->mt76.cap.has_2ghz)
  FUNC_5(VAR_1, &VAR_1->mt76.sband_2g.sband);

 FUNC_3(VAR_1);

 return 0;
}
