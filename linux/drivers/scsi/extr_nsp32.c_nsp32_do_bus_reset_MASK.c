
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ sync_flag; } ;
typedef TYPE_1__ nsp32_target ;
struct TYPE_8__ {unsigned int BaseAddress; int * CurrentSC; TYPE_1__* target; } ;
typedef TYPE_2__ nsp32_hw_data ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 unsigned short FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (unsigned int,int ,int ) ;
 int FUNC_6 (unsigned int,int ,int ) ;
 int FUNC_7 (unsigned int,int ,int ) ;

__attribute__((used)) static void FUNC_8(nsp32_hw_data *VAR_9)
{
 unsigned int VAR_10 = VAR_9->BaseAddress;
 unsigned short VAR_11;
 int VAR_12;

 FUNC_2(VAR_5, "in");






 FUNC_6(VAR_10, VAR_8, 0);
 FUNC_7(VAR_10, VAR_0, 0);
 FUNC_7(VAR_10, VAR_3, VAR_2);





 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_9->target); VAR_12++) {
  nsp32_target *VAR_13 = &VAR_9->target[VAR_12];

  VAR_13->sync_flag = 0;
  FUNC_4(VAR_9, VAR_13);
 }




 FUNC_5(VAR_10, VAR_7, VAR_1);
 FUNC_1(VAR_6 / 1000);
 FUNC_5(VAR_10, VAR_7, 0);
 for(VAR_12 = 0; VAR_12 < 5; VAR_12++) {
  VAR_11 = FUNC_3(VAR_10, VAR_4);
  FUNC_2(VAR_5, "irq:1: 0x%x", VAR_11);
        }

 VAR_9->CurrentSC = ((void*)0);
}
