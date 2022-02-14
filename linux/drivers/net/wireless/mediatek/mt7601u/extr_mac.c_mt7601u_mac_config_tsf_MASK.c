
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7601u_dev {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mt7601u_dev*,int ) ;
 int FUNC_2 (struct mt7601u_dev*,int ,int) ;

void FUNC_3(struct mt7601u_dev *VAR_5, bool VAR_6, int VAR_7)
{
 u32 VAR_8 = FUNC_1(VAR_5, VAR_0);

 VAR_8 &= ~(VAR_4 |
   VAR_2 |
   VAR_3);

 if (!VAR_6) {
  FUNC_2(VAR_5, VAR_0, VAR_8);
  return;
 }

 VAR_8 &= ~VAR_1;
 VAR_8 |= FUNC_0(VAR_1, VAR_7 << 4) |
  VAR_4 |
  VAR_2 |
  VAR_3;
}
