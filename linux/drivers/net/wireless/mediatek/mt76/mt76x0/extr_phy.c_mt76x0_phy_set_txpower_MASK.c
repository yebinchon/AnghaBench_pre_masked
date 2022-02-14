
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int chan; } ;
struct mt76_rate_power {int dummy; } ;
struct TYPE_4__ {int txpower_cur; int txpower_conf; TYPE_1__ chandef; struct mt76_rate_power rate_power; } ;
struct mt76x02_dev {int target_power; TYPE_2__ mt76; } ;
typedef int s8 ;


 int FUNC_0 (struct mt76_rate_power*,int ) ;
 int FUNC_1 (struct mt76_rate_power*) ;
 int FUNC_2 (struct mt76_rate_power*,int ) ;
 int FUNC_3 (struct mt76x02_dev*,int ,int ) ;
 int FUNC_4 (struct mt76x02_dev*,int ,int *) ;
 int FUNC_5 (struct mt76x02_dev*,int ,struct mt76_rate_power*) ;

void FUNC_6(struct mt76x02_dev *VAR_0)
{
 struct mt76_rate_power *VAR_1 = &VAR_0->mt76.rate_power;
 s8 VAR_2;

 FUNC_5(VAR_0, VAR_0->mt76.chandef.chan, VAR_1);
 FUNC_4(VAR_0, VAR_0->mt76.chandef.chan, &VAR_2);

 FUNC_0(VAR_1, VAR_2);
 FUNC_2(VAR_1, VAR_0->mt76.txpower_conf);
 VAR_0->mt76.txpower_cur = FUNC_1(VAR_1);
 FUNC_0(VAR_1, -VAR_2);

 VAR_0->target_power = VAR_2;
 FUNC_3(VAR_0, VAR_2, VAR_2);
}
