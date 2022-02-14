
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; } ;
struct mt7615_dev {int scs_en; TYPE_1__ mt76; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct mt7615_dev*) ;
 int FUNC_2 (struct mt7615_dev*,int ,int) ;
 int FUNC_3 (struct mt7615_dev*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct mt7615_dev *VAR_5, bool VAR_6)
{
 FUNC_4(&VAR_5->mt76.mutex);

 if (VAR_5->scs_en == VAR_6)
  goto out;

 if (VAR_6) {

  FUNC_3(VAR_5, VAR_1,
    VAR_2);
  if (FUNC_0(&VAR_5->mt76)) {
   FUNC_3(VAR_5, VAR_0, 0x7 << 8);
   FUNC_3(VAR_5, VAR_0, 0x7);
  }
 } else {
  FUNC_2(VAR_5, VAR_1,
      VAR_2);
  FUNC_2(VAR_5, VAR_3,
      VAR_4);
 }

 FUNC_1(VAR_5);
 VAR_5->scs_en = VAR_6;

out:
 FUNC_5(&VAR_5->mt76.mutex);
}
