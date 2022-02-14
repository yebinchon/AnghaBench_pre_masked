
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct riowd {int regs; int lock; } ;
struct platform_device {int * resource; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct riowd* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct platform_device*,struct riowd*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ,int ) ;
 struct riowd* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_7)
{
 struct riowd *VAR_8;
 int VAR_9 = -VAR_1;

 if (VAR_4)
  goto out;

 VAR_9 = -VAR_2;
 VAR_8 = FUNC_0(&VAR_7->dev, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  goto out;

 FUNC_7(&VAR_8->lock);

 VAR_8->regs = FUNC_2(&VAR_7->resource[0], 0, 2, VAR_0);
 if (!VAR_8->regs) {
  FUNC_5("Cannot map registers\n");
  goto out;
 }

 VAR_4 = VAR_8;

 VAR_9 = FUNC_1(&VAR_5);
 if (VAR_9) {
  FUNC_5("Cannot register watchdog misc device\n");
  goto out_iounmap;
 }

 FUNC_6("Hardware watchdog [%i minutes], regs at %p\n",
  VAR_6, VAR_8->regs);

 FUNC_4(VAR_7, VAR_8);
 return 0;

out_iounmap:
 VAR_4 = ((void*)0);
 FUNC_3(&VAR_7->resource[0], VAR_8->regs, 2);

out:
 return VAR_9;
}
