
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sm501_devdata {int irq; struct sm501_devdata* regs_claim; int regs; TYPE_1__* io_res; void* mem_res; int platdata; int pdev_id; int * dev; } ;
struct platform_device {int dev; int id; } ;
struct TYPE_2__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sm501_devdata*) ;
 struct sm501_devdata* FUNC_4 (int,int ) ;
 int FUNC_5 (struct platform_device*,int ) ;
 void* FUNC_6 (struct platform_device*,int ,int) ;
 int FUNC_7 (struct platform_device*,struct sm501_devdata*) ;
 int FUNC_8 (struct sm501_devdata*) ;
 struct sm501_devdata* FUNC_9 (int ,int,char*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct sm501_devdata*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_6)
{
 struct sm501_devdata *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_4);
 if (!VAR_7) {
  VAR_8 = -VAR_3;
  goto err1;
 }

 VAR_7->dev = &VAR_6->dev;
 VAR_7->pdev_id = VAR_6->id;
 VAR_7->platdata = FUNC_1(&VAR_6->dev);

 VAR_8 = FUNC_5(VAR_6, 0);
 if (VAR_8 < 0)
  goto err_res;
 VAR_7->irq = VAR_8;

 VAR_7->io_res = FUNC_6(VAR_6, VAR_5, 1);
 VAR_7->mem_res = FUNC_6(VAR_6, VAR_5, 0);
 if (!VAR_7->io_res || !VAR_7->mem_res) {
  FUNC_0(&VAR_6->dev, "failed to get IO resource\n");
  VAR_8 = -VAR_2;
  goto err_res;
 }

 VAR_7->regs_claim = FUNC_9(VAR_7->io_res->start,
         0x100, "sm501");
 if (!VAR_7->regs_claim) {
  FUNC_0(&VAR_6->dev, "cannot claim registers\n");
  VAR_8 = -VAR_0;
  goto err_res;
 }

 FUNC_7(VAR_6, VAR_7);

 VAR_7->regs = FUNC_2(VAR_7->io_res->start, FUNC_10(VAR_7->io_res));
 if (!VAR_7->regs) {
  FUNC_0(&VAR_6->dev, "cannot remap registers\n");
  VAR_8 = -VAR_1;
  goto err_claim;
 }

 return FUNC_11(VAR_7);

 err_claim:
 FUNC_8(VAR_7->regs_claim);
 FUNC_3(VAR_7->regs_claim);
 err_res:
 FUNC_3(VAR_7);
 err1:
 return VAR_8;

}
