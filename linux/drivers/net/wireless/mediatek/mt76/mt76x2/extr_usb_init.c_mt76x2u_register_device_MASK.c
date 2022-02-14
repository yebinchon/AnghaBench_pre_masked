
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int sband; } ;
struct TYPE_7__ {int sband; } ;
struct TYPE_6__ {scalar_t__ sg_en; } ;
struct TYPE_9__ {TYPE_3__ sband_5g; TYPE_2__ sband_2g; int state; TYPE_1__ usb; } ;
struct mt76x02_dev {TYPE_4__ mt76; int cal_work; } ;
struct ieee80211_hw {int max_tx_fragments; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_hw* FUNC_2 (struct mt76x02_dev*) ;
 int FUNC_3 (TYPE_4__*,int,int ,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (struct mt76x02_dev*) ;
 int FUNC_6 (struct mt76x02_dev*) ;
 int VAR_2 ;
 int FUNC_7 (struct mt76x02_dev*,int *) ;
 int FUNC_8 (struct mt76x02_dev*) ;
 int FUNC_9 (struct mt76x02_dev*) ;
 int FUNC_10 (struct mt76x02_dev*) ;
 int VAR_3 ;
 int FUNC_11 (int ,int *) ;

int FUNC_12(struct mt76x02_dev *VAR_4)
{
 struct ieee80211_hw *VAR_5 = FUNC_2(VAR_4);
 int VAR_6;

 FUNC_1(&VAR_4->cal_work, VAR_3);
 FUNC_6(VAR_4);

 VAR_6 = FUNC_9(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_4(&VAR_4->mt76);
 if (VAR_6 < 0)
  goto fail;

 VAR_6 = FUNC_10(VAR_4);
 if (VAR_6 < 0)
  goto fail;

 VAR_6 = FUNC_3(&VAR_4->mt76, 1, VAR_2,
       FUNC_0(VAR_2));
 if (VAR_6)
  goto fail;


 if (VAR_4->mt76.usb.sg_en)
  VAR_5->max_tx_fragments = VAR_1;
 else
  VAR_5->max_tx_fragments = 1;

 FUNC_11(VAR_0, &VAR_4->mt76.state);

 FUNC_5(VAR_4);
 FUNC_7(VAR_4, &VAR_4->mt76.sband_2g.sband);
 FUNC_7(VAR_4, &VAR_4->mt76.sband_5g.sband);

 return 0;

fail:
 FUNC_8(VAR_4);
 return VAR_6;
}
