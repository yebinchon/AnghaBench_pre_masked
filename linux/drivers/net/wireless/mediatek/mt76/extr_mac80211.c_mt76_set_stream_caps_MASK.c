
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int sband; } ;
struct TYPE_5__ {scalar_t__ has_5ghz; scalar_t__ has_2ghz; } ;
struct TYPE_4__ {int sband; } ;
struct mt76_dev {TYPE_3__ sband_5g; TYPE_2__ cap; TYPE_1__ sband_2g; } ;


 int FUNC_0 (struct mt76_dev*,int *,int) ;

void FUNC_1(struct mt76_dev *VAR_0, bool VAR_1)
{
 if (VAR_0->cap.has_2ghz)
  FUNC_0(VAR_0, &VAR_0->sband_2g.sband, 0);
 if (VAR_0->cap.has_5ghz)
  FUNC_0(VAR_0, &VAR_0->sband_5g.sband, VAR_1);
}
