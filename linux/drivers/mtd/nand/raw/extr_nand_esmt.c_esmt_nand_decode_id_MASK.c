
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int step_size; int strength; } ;
struct TYPE_6__ {TYPE_2__ eccreq; } ;
struct TYPE_4__ {int len; int* data; } ;
struct nand_chip {TYPE_3__ base; TYPE_1__ id; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct nand_chip*) ;
 scalar_t__ FUNC_2 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_0)
{
 FUNC_1(VAR_0);


 if (VAR_0->id.len >= 5 && FUNC_2(VAR_0)) {
  VAR_0->base.eccreq.step_size = 512;
  switch (VAR_0->id.data[4] & 0x3) {
  case 0x0:
   VAR_0->base.eccreq.strength = 4;
   break;
  case 0x1:
   VAR_0->base.eccreq.strength = 2;
   break;
  case 0x2:
   VAR_0->base.eccreq.strength = 1;
   break;
  default:
   FUNC_0(1, "Could not get ECC info");
   VAR_0->base.eccreq.step_size = 0;
   break;
  }
 }
}
