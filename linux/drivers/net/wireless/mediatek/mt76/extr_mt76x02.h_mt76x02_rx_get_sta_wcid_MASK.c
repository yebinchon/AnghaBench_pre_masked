
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt76_wcid {int dummy; } ;
struct mt76x02_sta {TYPE_1__* vif; struct mt76_wcid wcid; } ;
struct TYPE_2__ {struct mt76_wcid group_wcid; } ;



__attribute__((used)) static inline struct mt76_wcid *
FUNC_0(struct mt76x02_sta *VAR_0, bool VAR_1)
{
 if (!VAR_0)
  return ((void*)0);

 if (VAR_1)
  return &VAR_0->wcid;
 else
  return &VAR_0->vif->group_wcid;
}
