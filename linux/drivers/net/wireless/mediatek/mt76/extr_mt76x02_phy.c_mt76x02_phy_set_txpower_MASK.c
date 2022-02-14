
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt76_rate_power {int * stbc; int * ht; int * vht; int * ofdm; int * cck; } ;
struct TYPE_2__ {struct mt76_rate_power rate_power; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct mt76x02_dev*,int ,int ,int) ;
 int FUNC_1 (struct mt76x02_dev*,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

void FUNC_3(struct mt76x02_dev *VAR_11, int VAR_12, int VAR_13)
{
 struct mt76_rate_power *VAR_14 = &VAR_11->mt76.rate_power;

 FUNC_0(VAR_11, VAR_0, VAR_1, VAR_12);
 FUNC_0(VAR_11, VAR_0, VAR_2, VAR_13);

 FUNC_1(VAR_11, VAR_3,
  FUNC_2(VAR_14->cck[0], VAR_14->cck[2], VAR_14->ofdm[0],
          VAR_14->ofdm[2]));
 FUNC_1(VAR_11, VAR_4,
  FUNC_2(VAR_14->ofdm[4], VAR_14->ofdm[6], VAR_14->ht[0],
          VAR_14->ht[2]));
 FUNC_1(VAR_11, VAR_5,
  FUNC_2(VAR_14->ht[4], VAR_14->ht[6], VAR_14->ht[8],
          VAR_14->ht[10]));
 FUNC_1(VAR_11, VAR_6,
  FUNC_2(VAR_14->ht[12], VAR_14->ht[14], VAR_14->stbc[0],
          VAR_14->stbc[2]));
 FUNC_1(VAR_11, VAR_7,
  FUNC_2(VAR_14->stbc[4], VAR_14->stbc[6], 0, 0));
 FUNC_1(VAR_11, VAR_8,
  FUNC_2(VAR_14->ofdm[7], VAR_14->vht[8], VAR_14->ht[7],
          VAR_14->vht[9]));
 FUNC_1(VAR_11, VAR_9,
  FUNC_2(VAR_14->ht[14], 0, VAR_14->vht[8], VAR_14->vht[9]));
 FUNC_1(VAR_11, VAR_10,
  FUNC_2(VAR_14->ht[7], 0, VAR_14->stbc[8], VAR_14->stbc[9]));
}
