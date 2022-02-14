
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emac_board_info {scalar_t__ membase; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct emac_board_info *VAR_2)
{
 FUNC_0(VAR_2->dev, "resetting device\n");


 FUNC_2(0, VAR_2->membase + VAR_0);
 FUNC_1(200);
 FUNC_2(VAR_1, VAR_2->membase + VAR_0);
 FUNC_1(200);
}
