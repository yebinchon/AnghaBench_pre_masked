
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mt7601u_dev {int* beacon_offsets; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct mt7601u_dev*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct mt7601u_dev *VAR_1)
{
 u16 VAR_2 = VAR_0;
 u32 VAR_3[4] = {};
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
  u16 VAR_5 = VAR_1->beacon_offsets[VAR_4];

  VAR_3[VAR_4 / 4] |= ((VAR_5 - VAR_2) / 64) << (8 * (VAR_4 % 4));
 }

 for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
  FUNC_1(VAR_1, FUNC_0(VAR_4), VAR_3[VAR_4]);
}
