
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mac_work; int mutex; int state; int survey_time; } ;
struct mt7615_dev {TYPE_1__ mt76; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct mt7615_dev*) ;
 int FUNC_6 (struct mt7615_dev*) ;
 int FUNC_7 (struct mt7615_dev*) ;
 int FUNC_8 (struct mt7615_dev*) ;
 int FUNC_9 (struct mt7615_dev*) ;
 int FUNC_10 (struct mt7615_dev*,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int *) ;

__attribute__((used)) static int FUNC_16(struct mt7615_dev *VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_2->mt76.mac_work);

 FUNC_13(&VAR_2->mt76.mutex);
 FUNC_15(VAR_1, &VAR_2->mt76.state);

 FUNC_5(VAR_2);

 FUNC_11(&VAR_2->mt76);

 VAR_3 = FUNC_8(VAR_2);
 if (VAR_3)
  goto out;

 VAR_3 = FUNC_6(VAR_2);
 FUNC_7(VAR_2);
 VAR_2->mt76.survey_time = FUNC_4();

 FUNC_10(VAR_2, FUNC_0(0));

out:
 FUNC_2(VAR_1, &VAR_2->mt76.state);
 FUNC_14(&VAR_2->mt76.mutex);

 FUNC_12(&VAR_2->mt76);
 FUNC_3(FUNC_9(VAR_2), &VAR_2->mt76.mac_work,
         VAR_0);
 return VAR_3;
}
