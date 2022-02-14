
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6xxx_chip {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct mv88e6xxx_chip *VAR_2, int VAR_3)
{
 int VAR_4;




 VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_0,
      VAR_1);
 if (FUNC_2(VAR_4)) {
  FUNC_0(VAR_2->dev,
   "failed to restore PHY %d page Copper (%d)\n",
   VAR_3, VAR_4);
 }
}
