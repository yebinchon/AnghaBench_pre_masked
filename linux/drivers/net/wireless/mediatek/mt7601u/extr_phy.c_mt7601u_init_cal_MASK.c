
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mt7601u_dev {int raw_temp; int curr_temp; int dpd_temp; TYPE_1__* ee; } ;
struct TYPE_2__ {int ref_temp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mt7601u_dev*,int ,int) ;
 int FUNC_2 (struct mt7601u_dev*) ;
 int FUNC_3 (struct mt7601u_dev*,int ,int) ;
 int FUNC_4 (struct mt7601u_dev*,int ,int,int) ;
 int FUNC_5 (struct mt7601u_dev*,int ) ;
 int FUNC_6 (struct mt7601u_dev*) ;
 int FUNC_7 (struct mt7601u_dev*,int) ;
 int FUNC_8 (struct mt7601u_dev*,int) ;
 int FUNC_9 (struct mt7601u_dev*) ;
 int FUNC_10 (struct mt7601u_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct mt7601u_dev *VAR_8)
{
 u32 VAR_9;
 int VAR_10;

 VAR_8->raw_temp = FUNC_2(VAR_8);
 VAR_8->curr_temp = (VAR_8->raw_temp - VAR_8->ee->ref_temp) *
  VAR_6;
 VAR_8->dpd_temp = VAR_8->curr_temp;

 VAR_9 = FUNC_5(VAR_8, VAR_7);

 VAR_10 = FUNC_1(VAR_8, VAR_2, 0);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_3(VAR_8, 0, 4);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_10 |= 0x80;
 VAR_10 = FUNC_4(VAR_8, 0, 4, VAR_10);
 if (VAR_10)
  return VAR_10;
 FUNC_0(2);

 VAR_10 = FUNC_1(VAR_8, VAR_4, 0);
 if (VAR_10)
  return VAR_10;

 FUNC_6(VAR_8);

 VAR_10 = FUNC_7(VAR_8, 1);
 if (VAR_10)
  return VAR_10;
 VAR_10 = FUNC_1(VAR_8, VAR_1, 0);
 if (VAR_10)
  return VAR_10;
 VAR_10 = FUNC_1(VAR_8, VAR_5, 0);
 if (VAR_10)
  return VAR_10;
 VAR_10 = FUNC_1(VAR_8, VAR_3, 0);
 if (VAR_10)
  return VAR_10;
 VAR_10 = FUNC_1(VAR_8, VAR_0, VAR_8->dpd_temp);
 if (VAR_10)
  return VAR_10;

 FUNC_6(VAR_8);

 FUNC_9(VAR_8);

 FUNC_10(VAR_8, VAR_7, VAR_9);

 FUNC_8(VAR_8, 1);

 return 0;
}
