
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mt7601u_dev {int dummy; } ;
typedef int s8 ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mt7601u_dev*) ;
 int FUNC_4 (struct mt7601u_dev*,int ,int,int) ;
 int FUNC_5 (struct mt7601u_dev*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_6(struct mt7601u_dev *VAR_2, u8 *VAR_3)
{
 u32 VAR_4;
 s8 VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_3[VAR_0]);

 for (VAR_6 = 0; VAR_6 < 5; VAR_6++) {
  VAR_4 = FUNC_2(VAR_3 + FUNC_0(VAR_6));

  FUNC_4(VAR_2, VAR_5, VAR_4, VAR_6);

  if (~VAR_4)
   FUNC_5(VAR_2, VAR_1 + VAR_6 * 4, VAR_4);
 }

 FUNC_3(VAR_2);
}
