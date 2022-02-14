
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7601u_dev {int dev; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct mt7601u_dev*,int) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int) ;

bool FUNC_4(struct mt7601u_dev *VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4,
        int VAR_5)
{
 u32 VAR_6;

 VAR_5 /= 10;
 do {
  if (FUNC_2(VAR_0, &VAR_1->state))
   return 0;

  VAR_6 = FUNC_1(VAR_1, VAR_2) & VAR_3;
  if (VAR_6 == VAR_4)
   return 1;

  FUNC_3(10);
 } while (VAR_5-- > 0);

 FUNC_0(VAR_1->dev, "Error: Time out with reg %08x\n", VAR_2);

 return 0;
}
