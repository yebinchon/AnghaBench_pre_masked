
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt7603_dev {int ed_strict_mode; int ed_time; scalar_t__ ed_strong_signal; scalar_t__ ed_monitor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (struct mt7603_dev*,int) ;
 int FUNC_3 (struct mt7603_dev*,int ,int ) ;
 int FUNC_4 (struct mt7603_dev*,int ,int ,int) ;
 int FUNC_5 (struct mt7603_dev*,int ) ;
 int FUNC_6 (struct mt7603_dev*,int ,int ) ;

void FUNC_7(struct mt7603_dev *VAR_4)
{

 FUNC_4(VAR_4, FUNC_0(8), VAR_3, 0x23);


 FUNC_5(VAR_4, VAR_2);

 if (VAR_4->ed_monitor)
  FUNC_6(VAR_4, VAR_0, VAR_1);
 else
  FUNC_3(VAR_4, VAR_0, VAR_1);

 VAR_4->ed_strict_mode = 0xff;
 VAR_4->ed_strong_signal = 0;
 VAR_4->ed_time = FUNC_1();

 FUNC_2(VAR_4, 0);
}
