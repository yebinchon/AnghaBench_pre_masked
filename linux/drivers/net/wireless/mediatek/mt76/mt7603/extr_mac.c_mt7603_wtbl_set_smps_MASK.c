
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int idx; } ;
struct mt7603_sta {int smps; TYPE_1__ wcid; } ;
struct mt7603_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct mt7603_dev*,scalar_t__,int ,int) ;

void FUNC_2(struct mt7603_dev *VAR_1, struct mt7603_sta *VAR_2,
     bool VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_2->wcid.idx);

 if (VAR_2->smps == VAR_3)
  return;

 FUNC_1(VAR_1, VAR_4 + 2 * 4, VAR_0, VAR_3);
 VAR_2->smps = VAR_3;
}
