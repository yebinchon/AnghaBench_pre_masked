
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {unsigned long long beacon_int; int dev; } ;
struct mt76x02_dev {int pre_tbtt_timer; TYPE_1__ mt76; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct mt76x02_dev*,int ,int ) ;
 int FUNC_3 (struct mt76x02_dev*,int ) ;

__attribute__((used)) static void FUNC_4(struct mt76x02_dev *VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9;
 u64 VAR_10, VAR_11;


 VAR_7 = FUNC_2(VAR_6, VAR_1, VAR_2);
 VAR_7 *= 32;

 VAR_8 = FUNC_3(VAR_6, VAR_3);
 VAR_9 = FUNC_3(VAR_6, VAR_4);
 VAR_10 = (u64)VAR_8 << 32 | VAR_9;
 FUNC_0(VAR_6->mt76.dev, "TSF: %llu us TBTT %u us\n", VAR_10, VAR_7);


 VAR_11 = ((1000000000ull * VAR_6->mt76.beacon_int) >> 10);


 if (VAR_7 < VAR_5)
  VAR_11 -= (VAR_5 - VAR_7) * 1000ull;
 else
  VAR_11 += (VAR_7 - VAR_5) * 1000ull;

 FUNC_1(&VAR_6->pre_tbtt_timer, VAR_11, VAR_0);
}
