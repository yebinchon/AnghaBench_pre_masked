
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7601u_dev {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mt7601u_dev*,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int) ;

int FUNC_3(struct mt7601u_dev *VAR_3)
{
 int VAR_4 = 100;
 u32 VAR_5;

 do {
  if (FUNC_1(VAR_1, &VAR_3->state))
   return -VAR_0;

  VAR_5 = FUNC_0(VAR_3, VAR_2);
  if (VAR_5 && ~VAR_5)
   return 0;

  FUNC_2(10);
 } while (VAR_4--);

 return -VAR_0;
}
