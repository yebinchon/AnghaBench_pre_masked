
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sg_en; } ;
struct TYPE_4__ {int state; TYPE_1__ usb; struct ieee80211_hw* hw; } ;
struct mt76x02_dev {TYPE_2__ mt76; } ;
struct ieee80211_hw {int max_tx_fragments; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct mt76x02_dev*) ;
 int FUNC_2 (struct mt76x02_dev*) ;
 int FUNC_3 (struct mt76x02_dev*,int) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct mt76x02_dev *VAR_2)
{
 struct ieee80211_hw *VAR_3 = VAR_2->mt76.hw;
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_2->mt76);
 if (VAR_4 < 0)
  goto out_err;

 VAR_4 = FUNC_3(VAR_2, 1);
 if (VAR_4 < 0)
  goto out_err;

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 < 0)
  goto out_err;


 if (VAR_2->mt76.usb.sg_en)
  VAR_3->max_tx_fragments = VAR_1;
 else
  VAR_3->max_tx_fragments = 1;

 FUNC_4(VAR_0, &VAR_2->mt76.state);

 return 0;

out_err:
 FUNC_2(VAR_2);
 return VAR_4;
}
