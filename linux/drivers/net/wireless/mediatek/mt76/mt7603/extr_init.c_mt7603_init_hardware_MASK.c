
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct mt7603_dev {TYPE_1__ mt76; int rxfilter; } ;


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
 int FUNC_1 (struct mt7603_dev*) ;
 int FUNC_2 (struct mt7603_dev*) ;
 int FUNC_3 (struct mt7603_dev*) ;
 int FUNC_4 (struct mt7603_dev*) ;
 int FUNC_5 (struct mt7603_dev*) ;
 int FUNC_6 (struct mt7603_dev*) ;
 int FUNC_7 (struct mt7603_dev*) ;
 int FUNC_8 (struct mt7603_dev*) ;
 int FUNC_9 (struct mt7603_dev*,int ,int,int ,int) ;
 int FUNC_10 (struct mt7603_dev*,int ) ;
 int FUNC_11 (struct mt7603_dev*,int ,int) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static int
FUNC_13(struct mt7603_dev *VAR_9)
{
 int VAR_10, VAR_11;

 FUNC_11(VAR_9, VAR_2, ~0);

 VAR_11 = FUNC_3(VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_1(VAR_9);
 if (VAR_11)
  return VAR_11;

 FUNC_11(VAR_9, VAR_8, 0x52000850);
 FUNC_4(VAR_9);
 VAR_9->rxfilter = FUNC_10(VAR_9, VAR_7);
 FUNC_12(VAR_1, &VAR_9->mt76.state);

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  FUNC_11(VAR_9, VAR_3, VAR_4 | VAR_6 |
   FUNC_0(VAR_5, VAR_10));
  FUNC_9(VAR_9, VAR_3, VAR_4, 0, 5000);
 }

 VAR_11 = FUNC_6(VAR_9);
 if (VAR_11)
  return VAR_11;

 FUNC_2(VAR_9);
 FUNC_7(VAR_9);
 FUNC_8(VAR_9);
 FUNC_5(VAR_9);

 return 0;
}
