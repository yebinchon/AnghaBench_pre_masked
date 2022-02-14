
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7603_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct mt7603_dev*,int,int) ;
 int FUNC_5 (struct mt7603_dev*,int,int,int) ;

void FUNC_6(struct mt7603_dev *VAR_3, int VAR_4, int VAR_5,
       int VAR_6)
{
 u32 VAR_7 = FUNC_3(VAR_4);
 u32 VAR_8 = FUNC_1(VAR_0, FUNC_0(VAR_5)) |
         (VAR_1 <<
   (VAR_5 * VAR_2));
 u32 VAR_9;
 int VAR_10;

 if (VAR_6 < 0) {

  FUNC_4(VAR_3, VAR_7 + (15 * 4), VAR_8);
  return;
 }

 for (VAR_10 = 7; VAR_10 > 0; VAR_10--) {
  if (VAR_6 >= FUNC_2(VAR_10))
   break;
 }

 VAR_9 = FUNC_1(VAR_0, FUNC_0(VAR_5)) |
    VAR_10 << (VAR_5 * VAR_2);

 FUNC_5(VAR_3, VAR_7 + (15 * 4), VAR_8, VAR_9);
}
