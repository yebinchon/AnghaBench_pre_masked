
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7601u_dev {int dev; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mt7601u_dev*,int ) ;
 int FUNC_3 (struct mt7601u_dev*,int ,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct mt7601u_dev *VAR_7, u32 VAR_8, bool VAR_9)
{
 int VAR_10;







 if (VAR_9)
  VAR_8 |= (VAR_6 |
   VAR_5);
 else
  VAR_8 &= ~(VAR_6);

 FUNC_3(VAR_7, VAR_4, VAR_8);
 FUNC_5(20);

 if (VAR_9) {
  FUNC_4(VAR_0, &VAR_7->state);
 } else {
  FUNC_0(VAR_0, &VAR_7->state);
  return;
 }

 for (VAR_10 = 200; VAR_10; VAR_10--) {
  VAR_8 = FUNC_2(VAR_7, VAR_1);

  if (VAR_8 & VAR_3 && VAR_8 & VAR_2)
   break;

  FUNC_5(20);
 }





 if (!VAR_10)
  FUNC_1(VAR_7->dev, "Error: PLL and XTAL check failed!\n");
}
