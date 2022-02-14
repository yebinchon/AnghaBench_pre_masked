
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct isci_host {TYPE_3__* scu_registers; } ;
struct TYPE_4__ {int * output_data_select; } ;
struct TYPE_5__ {TYPE_1__ sgpio; } ;
struct TYPE_6__ {TYPE_2__ peg0; } ;


 int VAR_0 ;
 int FUNC_0 (struct isci_host*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,scalar_t__*,scalar_t__,scalar_t__) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static int FUNC_4(struct isci_host *VAR_1, u8 VAR_2, u8 VAR_3, u8 *VAR_4)
{
 int VAR_5;


 if (VAR_2 == 0)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  u32 VAR_6 = 0x444;
  int VAR_7;

  for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
   int VAR_8;

   VAR_8 = FUNC_2(FUNC_1(VAR_5, VAR_7),
             VAR_4, VAR_2,
             VAR_3);
   if (VAR_8 < 0)
    break;


   VAR_6 &= ~(VAR_8 << ((VAR_7 << 2) + 2));
  }

  if (VAR_7 < 3)
   break;
  FUNC_3(VAR_6, &VAR_1->scu_registers->peg0.sgpio.output_data_select[VAR_5]);
 }




 return VAR_5 > 0;
}
