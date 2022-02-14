
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct board_info {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct board_info*,int ) ;
 int FUNC_3 (struct board_info*,int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct board_info *VAR_3)
{
 FUNC_0(VAR_3->dev, "resetting device\n");





 FUNC_3(VAR_3, VAR_0, VAR_2 | VAR_1);
 FUNC_4(100);
 if (FUNC_2(VAR_3, VAR_0) & 1)
  FUNC_1(VAR_3->dev, "dm9000 did not respond to first reset\n");

 FUNC_3(VAR_3, VAR_0, 0);
 FUNC_3(VAR_3, VAR_0, VAR_2 | VAR_1);
 FUNC_4(100);
 if (FUNC_2(VAR_3, VAR_0) & 1)
  FUNC_1(VAR_3->dev, "dm9000 did not respond to second reset\n");
}
