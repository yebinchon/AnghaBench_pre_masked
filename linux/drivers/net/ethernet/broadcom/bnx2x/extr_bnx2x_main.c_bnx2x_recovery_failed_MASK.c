
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int recovery_state; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2x*,int ) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct bnx2x *VAR_2)
{
 FUNC_2(VAR_2->dev, "Recovery has failed. Power cycle is needed.\n");


 FUNC_3(VAR_2->dev);





 FUNC_1(VAR_2);


 FUNC_0(VAR_2, VAR_1);

 VAR_2->recovery_state = VAR_0;

 FUNC_4();
}
