
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fimc_dev {int irq_queue; } ;
struct fimc_ctx {struct fimc_dev* fimc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct fimc_ctx*) ;
 int FUNC_1 (int ,struct fimc_ctx*) ;
 int FUNC_2 (struct fimc_dev*) ;
 int FUNC_3 (int ,int,int ) ;

__attribute__((used)) static void FUNC_4(struct fimc_ctx *VAR_2)
{
 struct fimc_dev *VAR_3 = VAR_2->fimc_dev;

 if (!FUNC_2(VAR_3))
  return;

 FUNC_1(VAR_0, VAR_2);

 FUNC_3(VAR_3->irq_queue,
   !FUNC_0(VAR_0, VAR_2),
   VAR_1);
}
