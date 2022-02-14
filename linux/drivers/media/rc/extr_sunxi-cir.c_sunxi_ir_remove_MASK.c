
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_ir {int rc; int ir_lock; scalar_t__ base; int rst; int apb_clk; int clk; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 struct sunxi_ir* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_4)
{
 unsigned long VAR_5;
 struct sunxi_ir *VAR_6 = FUNC_1(VAR_4);

 FUNC_0(VAR_6->clk);
 FUNC_0(VAR_6->apb_clk);
 FUNC_3(VAR_6->rst);

 FUNC_4(&VAR_6->ir_lock, VAR_5);

 FUNC_6(0, VAR_6->base + VAR_2);

 FUNC_6(VAR_0, VAR_6->base + VAR_3);

 FUNC_6(0, VAR_6->base + VAR_1);
 FUNC_5(&VAR_6->ir_lock, VAR_5);

 FUNC_2(VAR_6->rc);
 return 0;
}
