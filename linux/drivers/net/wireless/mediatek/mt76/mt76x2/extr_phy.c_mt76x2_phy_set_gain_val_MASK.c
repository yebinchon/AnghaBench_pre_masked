
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_7__ {scalar_t__ width; TYPE_2__* chan; } ;
struct TYPE_8__ {TYPE_3__ chandef; } ;
struct TYPE_5__ {scalar_t__ agc_gain_adjust; scalar_t__* agc_gain_cur; } ;
struct mt76x02_dev {TYPE_4__ mt76; TYPE_1__ cal; } ;
struct TYPE_6__ {scalar_t__ band; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct mt76x02_dev*,int ,int) ;
 int FUNC_3 (struct mt76x02_dev*) ;
 scalar_t__ FUNC_4 (struct mt76x02_dev*) ;

__attribute__((used)) static void
FUNC_5(struct mt76x02_dev *VAR_5)
{
 u32 VAR_6;
 u8 VAR_7[2];

 VAR_7[0] = VAR_5->cal.agc_gain_cur[0] - VAR_5->cal.agc_gain_adjust;
 VAR_7[1] = VAR_5->cal.agc_gain_cur[1] - VAR_5->cal.agc_gain_adjust;

 VAR_6 = 0x1836 << 16;
 if (!FUNC_4(VAR_5) &&
     VAR_5->mt76.chandef.width >= VAR_4)
  VAR_6 = 0x1e42 << 16;

 if (FUNC_4(VAR_5) &&
     VAR_5->mt76.chandef.chan->band == VAR_3 &&
     VAR_5->mt76.chandef.width < VAR_4)
  VAR_6 = 0x0f36 << 16;

 VAR_6 |= 0xf8;

 FUNC_2(VAR_5, FUNC_1(VAR_0, 8),
  VAR_6 | FUNC_0(VAR_2, VAR_7[0]));
 FUNC_2(VAR_5, FUNC_1(VAR_0, 9),
  VAR_6 | FUNC_0(VAR_2, VAR_7[1]));

 if (VAR_5->mt76.chandef.chan->flags & VAR_1)
  FUNC_3(VAR_5);
}
