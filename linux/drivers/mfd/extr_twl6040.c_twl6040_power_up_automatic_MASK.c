
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl6040 {int audpwron; int dev; int ready; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct twl6040*,int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct twl6040 *VAR_3)
{
 int VAR_4;

 FUNC_2(VAR_3->audpwron, 1);

 VAR_4 = FUNC_5(&VAR_3->ready,
      FUNC_3(144));
 if (!VAR_4) {
  u8 VAR_5;

  FUNC_1(VAR_3->dev, "timeout waiting for READYINT\n");
  VAR_5 = FUNC_4(VAR_3, VAR_2);
  if (!(VAR_5 & VAR_1)) {
   FUNC_0(VAR_3->dev, "automatic power-up failed\n");
   FUNC_2(VAR_3->audpwron, 0);
   return -VAR_0;
  }
 }

 return 0;
}
