
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int speed; scalar_t__ duplex; scalar_t__ port; } ;
struct TYPE_3__ {int data; int addr; } ;
struct sxgbe_ops {TYPE_2__ link; TYPE_1__ mii; int mtl; int dma; int desc; int mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct sxgbe_ops * const VAR_3)
{
 VAR_3->mac = FUNC_0();
 VAR_3->desc = FUNC_1();
 VAR_3->dma = FUNC_2();
 VAR_3->mtl = FUNC_3();


 VAR_3->mii.addr = VAR_0;
 VAR_3->mii.data = VAR_1;





 VAR_3->link.port = 0;
 VAR_3->link.duplex = 0;
 VAR_3->link.speed = VAR_2;
}
