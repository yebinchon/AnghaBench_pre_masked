
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stfsm {int dev; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct stfsm*) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct stfsm *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4 = 0;

 VAR_3 = VAR_1 + FUNC_2(VAR_0);

 while (!VAR_4) {
  if (FUNC_4(VAR_1, VAR_3))
   VAR_4 = 1;

  if (FUNC_3(VAR_2))
   return;

  FUNC_0();
 }

 FUNC_1(VAR_2->dev, "timeout on sequence completion\n");
}
