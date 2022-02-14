
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int idx; int hw_key_idx; } ;
struct TYPE_3__ {TYPE_2__ global_wcid; int * wcid; int wcid_mask; int state; } ;
struct mt7615_dev {TYPE_1__ mt76; int token; int token_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mt7615_dev*) ;
 int FUNC_2 (struct mt7615_dev*) ;
 int FUNC_3 (struct mt7615_dev*) ;
 int FUNC_4 (struct mt7615_dev*,int ) ;
 int FUNC_5 (struct mt7615_dev*) ;
 int FUNC_6 (struct mt7615_dev*) ;
 int FUNC_7 (struct mt7615_dev*) ;
 int FUNC_8 (struct mt7615_dev*) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (struct mt7615_dev*,int ,int ) ;
 int FUNC_11 (int ,TYPE_2__*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct mt7615_dev *VAR_4)
{
 int VAR_5, VAR_6;

 FUNC_10(VAR_4, VAR_3, ~0);

 FUNC_13(&VAR_4->token_lock);
 FUNC_0(&VAR_4->token);

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_12(VAR_2, &VAR_4->mt76.state);

 VAR_5 = FUNC_6(VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_7(VAR_4);
 FUNC_3(VAR_4);
 FUNC_8(VAR_4);
 FUNC_4(VAR_4, 0);
 FUNC_5(VAR_4);


 VAR_6 = FUNC_9(VAR_4->mt76.wcid_mask, VAR_1 - 1);
 if (VAR_6)
  return -VAR_0;

 VAR_4->mt76.global_wcid.idx = VAR_6;
 VAR_4->mt76.global_wcid.hw_key_idx = -1;
 FUNC_11(VAR_4->mt76.wcid[VAR_6], &VAR_4->mt76.global_wcid);

 return 0;
}
