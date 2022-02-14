
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7603_dev {int ed_strict_mode; scalar_t__ ed_monitor; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct mt7603_dev*,int ,int ,int) ;
 int FUNC_3 (struct mt7603_dev*,int ,int) ;

void
FUNC_4(struct mt7603_dev *VAR_3, bool VAR_4)
{
 u32 VAR_5 = 0xd7c80000;

 if (VAR_4 == VAR_3->ed_strict_mode)
  return;

 VAR_3->ed_strict_mode = VAR_4;


 if (!VAR_3->ed_monitor)
  VAR_5 |= FUNC_0(VAR_2, 0x34);
 else
  VAR_5 |= FUNC_0(VAR_2, 0x7d);

 if (VAR_3->ed_monitor && !VAR_3->ed_strict_mode)
  VAR_5 |= FUNC_0(VAR_1, 0x0f);
 else
  VAR_5 |= FUNC_0(VAR_1, 0x10);

 FUNC_3(VAR_3, FUNC_1(6), VAR_5);

 FUNC_2(VAR_3, FUNC_1(13), VAR_0,
         VAR_3->ed_monitor && !VAR_3->ed_strict_mode);
}
