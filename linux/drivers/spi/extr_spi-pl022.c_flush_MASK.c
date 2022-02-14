
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pl022 {scalar_t__ exp_fifo_level; int virtbase; TYPE_1__* adev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,char*) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct pl022 *VAR_3)
{
 unsigned long VAR_4 = VAR_2 << 1;

 FUNC_2(&VAR_3->adev->dev, "flush\n");
 do {
  while (FUNC_3(FUNC_1(VAR_3->virtbase)) & VAR_1)
   FUNC_3(FUNC_0(VAR_3->virtbase));
 } while ((FUNC_3(FUNC_1(VAR_3->virtbase)) & VAR_0) && VAR_4--);

 VAR_3->exp_fifo_level = 0;

 return VAR_4;
}
