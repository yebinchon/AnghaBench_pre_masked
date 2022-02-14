
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int napi; int irq; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

void FUNC_8(void)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++) {
  if (!(VAR_3 & FUNC_1(VAR_4)))
   continue;


  if (FUNC_4(VAR_0))
   FUNC_5(FUNC_3(VAR_4), 0);
  else
   FUNC_5(FUNC_2(VAR_4), 0);


  FUNC_6(VAR_2[VAR_4].irq, VAR_1);

  FUNC_7(&VAR_2[VAR_4].napi);
 }
}
