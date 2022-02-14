
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7603_dev {int agc0; int agc3; int sensitivity; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mt7603_dev*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct mt7603_dev *VAR_0)
{
 u32 VAR_1 = VAR_0->agc0, VAR_2 = VAR_0->agc3;
 u32 VAR_3;

 if (!VAR_0->sensitivity || VAR_0->sensitivity < -100) {
  VAR_0->sensitivity = 0;
 } else if (VAR_0->sensitivity <= -84) {
  VAR_3 = 7 + (VAR_0->sensitivity + 92) / 2;

  VAR_1 = 0x56f0076f;
  VAR_1 |= VAR_3 << 12;
  VAR_1 |= VAR_3 << 16;
  VAR_2 = 0x81d0d5e3;
 } else if (VAR_0->sensitivity <= -72) {
  VAR_3 = 7 + (VAR_0->sensitivity + 80) / 2;

  VAR_1 = 0x6af0006f;
  VAR_1 |= VAR_3 << 8;
  VAR_1 |= VAR_3 << 12;
  VAR_1 |= VAR_3 << 16;

  VAR_2 = 0x8181d5e3;
 } else {
  if (VAR_0->sensitivity > -54)
   VAR_0->sensitivity = -54;

  VAR_3 = 7 + (VAR_0->sensitivity + 80) / 2;

  VAR_1 = 0x7ff0000f;
  VAR_1 |= VAR_3 << 4;
  VAR_1 |= VAR_3 << 8;
  VAR_1 |= VAR_3 << 12;
  VAR_1 |= VAR_3 << 16;

  VAR_2 = 0x818181e3;
 }

 FUNC_2(VAR_0, FUNC_0(0), VAR_1);
 FUNC_2(VAR_0, FUNC_1(0), VAR_1);

 FUNC_2(VAR_0, FUNC_0(3), VAR_2);
 FUNC_2(VAR_0, FUNC_1(3), VAR_2);
}
