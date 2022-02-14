
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int step_size; int strength; } ;
struct TYPE_6__ {TYPE_2__ eccreq; } ;
struct TYPE_4__ {int* data; } ;
struct nand_chip {TYPE_3__ base; TYPE_1__ id; } ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static void FUNC_1(struct nand_chip *VAR_0,
      bool VAR_1)
{
 u8 VAR_2 = (VAR_0->id.data[4] >> 4) & 0x7;

 if (VAR_1) {

  VAR_0->base.eccreq.step_size = 1024;

  switch (VAR_2) {
  case 0:
   VAR_0->base.eccreq.step_size = 0;
   VAR_0->base.eccreq.strength = 0;
   break;
  case 1:
   VAR_0->base.eccreq.strength = 4;
   break;
  case 2:
   VAR_0->base.eccreq.strength = 24;
   break;
  case 3:
   VAR_0->base.eccreq.strength = 32;
   break;
  case 4:
   VAR_0->base.eccreq.strength = 40;
   break;
  case 5:
   VAR_0->base.eccreq.strength = 50;
   break;
  case 6:
   VAR_0->base.eccreq.strength = 60;
   break;
  default:






   FUNC_0(1, "Invalid ECC requirements");
  }
 } else {




  u8 VAR_3 = VAR_0->id.data[5] & 0x7;

  if (VAR_3 < 3) {

   if (VAR_2 < 5) {
    VAR_0->base.eccreq.step_size = 512;
    VAR_0->base.eccreq.strength = 1 << VAR_2;
   } else if (VAR_2 < 7) {
    if (VAR_2 == 5)
     VAR_0->base.eccreq.step_size = 2048;
    else
     VAR_0->base.eccreq.step_size = 1024;
    VAR_0->base.eccreq.strength = 24;
   } else {






    FUNC_0(1, "Invalid ECC requirements");
   }
  } else {

   if (!VAR_2) {
    VAR_0->base.eccreq.step_size = 0;
    VAR_0->base.eccreq.strength = 0;
   } else if (VAR_2 < 5) {
    VAR_0->base.eccreq.step_size = 512;
    VAR_0->base.eccreq.strength = 1 << (VAR_2 - 1);
   } else {
    VAR_0->base.eccreq.step_size = 1024;
    VAR_0->base.eccreq.strength = 24 +
       (8 * (VAR_2 - 5));
   }
  }
 }
}
