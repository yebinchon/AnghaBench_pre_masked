
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvu {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct rvu*) ;
 int FUNC_3 (struct rvu*,int,int ,int ,int) ;
 int FUNC_4 (struct rvu*,int,int ,int ) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct rvu *VAR_1, int VAR_2)
{
 int VAR_3;


 FUNC_4(VAR_1, VAR_2, VAR_0, FUNC_0(0));
 VAR_3 = FUNC_3(VAR_1, VAR_2, VAR_0, FUNC_0(0), 1);
 if (VAR_3)
  FUNC_1(VAR_1->dev, "NIX RX software sync failed\n");




 if (FUNC_2(VAR_1))
  FUNC_5(50, 60);
}
