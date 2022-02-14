
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
typedef void* u16 ;
struct pl022 {TYPE_2__* vendor; int exp_fifo_level; TYPE_1__* adev; int virtbase; } ;
struct TYPE_4__ {int fifodepth; scalar_t__ extended_cr; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int ,...) ;
 void* FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct pl022 *VAR_0)
{
 u32 VAR_1;
 u16 VAR_2, VAR_3, VAR_4;

 if (VAR_0->vendor->extended_cr)
  VAR_1 = FUNC_5(FUNC_0(VAR_0->virtbase));
 else
  VAR_1 = FUNC_6(FUNC_0(VAR_0->virtbase));
 VAR_2 = FUNC_6(FUNC_1(VAR_0->virtbase));
 VAR_3 = FUNC_6(FUNC_2(VAR_0->virtbase));
 VAR_4 = FUNC_6(FUNC_3(VAR_0->virtbase));

 FUNC_4(&VAR_0->adev->dev, "spi-pl022 CR0: %x\n", VAR_1);
 FUNC_4(&VAR_0->adev->dev, "spi-pl022 CR1: %x\n", VAR_2);
 FUNC_4(&VAR_0->adev->dev, "spi-pl022 DMACR: %x\n", VAR_3);
 FUNC_4(&VAR_0->adev->dev, "spi-pl022 SR: %x\n", VAR_4);
 FUNC_4(&VAR_0->adev->dev,
   "spi-pl022 exp_fifo_level/fifodepth: %u/%d\n",
   VAR_0->exp_fifo_level,
   VAR_0->vendor->fifodepth);

}
