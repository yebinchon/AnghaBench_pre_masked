
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_7__ {TYPE_2__* chan; } ;
struct TYPE_8__ {TYPE_3__ chandef; } ;
struct TYPE_5__ {scalar_t__ agc_gain_adjust; scalar_t__* agc_gain_cur; } ;
struct mt76x02_dev {TYPE_4__ mt76; TYPE_1__ cal; } ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int FUNC_1 (struct mt76x02_dev*) ;
 int FUNC_2 (struct mt76x02_dev*,int ,int ,scalar_t__) ;
 int FUNC_3 (struct mt76x02_dev*) ;

__attribute__((used)) static void FUNC_4(struct mt76x02_dev *VAR_3)
{
 u8 VAR_4 = VAR_3->cal.agc_gain_cur[0] - VAR_3->cal.agc_gain_adjust;

 FUNC_2(VAR_3, FUNC_0(VAR_0, 8), VAR_2, VAR_4);

 if ((VAR_3->mt76.chandef.chan->flags & VAR_1) &&
     !FUNC_1(VAR_3))
  FUNC_3(VAR_3);
}
