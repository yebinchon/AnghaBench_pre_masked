
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int antenna_mask; } ;
struct mt7603_dev {void* agc3; void* agc0; TYPE_1__ mt76; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mt7603_dev*,int ,int,int) ;
 int FUNC_4 (struct mt7603_dev*,int ,int ,int) ;
 void* FUNC_5 (struct mt7603_dev*,int ) ;

__attribute__((used)) static void
FUNC_6(struct mt7603_dev *VAR_5)
{
 int VAR_6 = VAR_5->mt76.antenna_mask;
 int VAR_7 = FUNC_2(VAR_6) - 1;

 FUNC_3(VAR_5, VAR_2,
   (VAR_4 |
    VAR_3),
   (FUNC_0(VAR_4, 3) |
    FUNC_0(VAR_3, VAR_6)));

 FUNC_4(VAR_5, VAR_0, VAR_1,
         VAR_7);

 VAR_5->agc0 = FUNC_5(VAR_5, FUNC_1(0));
 VAR_5->agc3 = FUNC_5(VAR_5, FUNC_1(3));
}
