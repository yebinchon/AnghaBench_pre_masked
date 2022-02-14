
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ region; int mutex; } ;
struct mt7603_dev {int ed_monitor_enabled; int ed_monitor; TYPE_1__ mt76; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mt7603_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(void *VAR_1, u64 VAR_2)
{
 struct mt7603_dev *VAR_3 = VAR_1;

 FUNC_1(&VAR_3->mt76.mutex);

 VAR_3->ed_monitor_enabled = !!VAR_2;
 VAR_3->ed_monitor = VAR_3->ed_monitor_enabled &&
     VAR_3->mt76.region == VAR_0;
 FUNC_0(VAR_3);

 FUNC_2(&VAR_3->mt76.mutex);

 return 0;
}
