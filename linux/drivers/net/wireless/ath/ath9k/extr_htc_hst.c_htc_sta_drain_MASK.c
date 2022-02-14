
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct htc_target {int hif_dev; TYPE_1__* hif; } ;
struct TYPE_2__ {int (* sta_drain ) (int ,int ) ;} ;


 int FUNC_0 (int ,int ) ;

void FUNC_1(struct htc_target *VAR_0, u8 VAR_1)
{
 VAR_0->hif->sta_drain(VAR_0->hif_dev, VAR_1);
}
