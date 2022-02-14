
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tCCS_min; } ;
struct TYPE_5__ {TYPE_1__ sdr; } ;
struct TYPE_6__ {TYPE_2__ timings; } ;
struct nand_chip {int options; TYPE_3__ data_interface; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_1)
{




 if (!(VAR_1->options & VAR_0))
  return;





 if (FUNC_0(VAR_1))
  FUNC_1(VAR_1->data_interface.timings.sdr.tCCS_min / 1000);
 else
  FUNC_1(500);
}
