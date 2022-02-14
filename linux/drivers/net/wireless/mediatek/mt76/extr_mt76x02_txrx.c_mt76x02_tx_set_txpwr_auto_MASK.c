
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ofdm; } ;
struct TYPE_4__ {TYPE_1__ rate_power; } ;
struct mt76x02_dev {TYPE_2__ mt76; } ;
typedef int s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mt76x02_dev*,int ,int ,int ) ;
 int FUNC_1 (struct mt76x02_dev*,int ,int ) ;

void FUNC_2(struct mt76x02_dev *VAR_3, s8 VAR_4)
{
 s8 VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_4,
          VAR_3->mt76.rate_power.ofdm[4]);
 FUNC_0(VAR_3, VAR_0,
         VAR_2, VAR_5);
 FUNC_0(VAR_3, VAR_0,
         VAR_1, VAR_5);
}
