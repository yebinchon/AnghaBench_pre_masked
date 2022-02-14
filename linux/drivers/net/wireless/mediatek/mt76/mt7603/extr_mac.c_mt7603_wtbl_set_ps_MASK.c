
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int idx; } ;
struct mt7603_sta {int ps; TYPE_1__ wcid; } ;
struct mt7603_dev {int ps_lock; } ;


 int FUNC_0 (int ,int) ;
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
 int FUNC_1 (struct mt7603_dev*,int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct mt7603_dev*,int ,int ) ;
 int FUNC_4 (struct mt7603_dev*,int ,int,int ,int) ;
 int FUNC_5 (struct mt7603_dev*,scalar_t__,int,int) ;
 int FUNC_6 (struct mt7603_dev*,int ,int ) ;
 int FUNC_7 (struct mt7603_dev*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct mt7603_dev *VAR_10, struct mt7603_sta *VAR_11,
   bool VAR_12)
{
 int VAR_13 = VAR_11->wcid.idx;
 u32 VAR_14;

 FUNC_8(&VAR_10->ps_lock);

 if (VAR_11->ps == VAR_12)
  goto out;

 FUNC_7(VAR_10, VAR_0,
  FUNC_0(VAR_5, VAR_13) |
  FUNC_0(VAR_2, 0) |
  FUNC_0(VAR_3, 1) |
  FUNC_0(VAR_4, VAR_12) |
  VAR_6 | VAR_1);

 FUNC_4(VAR_10, VAR_0, VAR_1, 0, 5000);

 if (VAR_12)
  FUNC_1(VAR_10, VAR_13, 0);

 VAR_14 = FUNC_2(VAR_13);
 FUNC_6(VAR_10, VAR_7, VAR_8);
 FUNC_5(VAR_10, VAR_14 + 3 * 4, VAR_9,
   VAR_12 * VAR_9);
 FUNC_3(VAR_10, VAR_7, VAR_8);
 VAR_11->ps = VAR_12;

out:
 FUNC_9(&VAR_10->ps_lock);
}
