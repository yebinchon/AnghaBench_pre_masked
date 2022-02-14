
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dwc2_hsotg {struct dentry* debug_root; TYPE_1__* regset; int regs; int dev; } ;
struct dentry {int dummy; } ;
struct TYPE_3__ {int base; int nregs; int regs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,int,struct dentry*,struct dwc2_hsotg*,int *) ;
 int FUNC_3 (char*,int,struct dentry*,TYPE_1__*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int ,int,int ) ;
 int VAR_2 ;
 int FUNC_7 (struct dwc2_hsotg*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_8(struct dwc2_hsotg *VAR_6)
{
 int VAR_7;
 struct dentry *VAR_8;

 VAR_8 = FUNC_1(FUNC_5(VAR_6->dev), ((void*)0));
 VAR_6->debug_root = VAR_8;

 FUNC_2("params", 0444, VAR_8, VAR_6, &VAR_5);
 FUNC_2("hw_params", 0444, VAR_8, VAR_6, &VAR_4);
 FUNC_2("dr_mode", 0444, VAR_8, VAR_6, &VAR_2);


 FUNC_7(VAR_6);

 VAR_6->regset = FUNC_6(VAR_6->dev, sizeof(*VAR_6->regset),
        VAR_1);
 if (!VAR_6->regset) {
  VAR_7 = -VAR_0;
  goto err;
 }

 VAR_6->regset->regs = VAR_3;
 VAR_6->regset->nregs = FUNC_0(VAR_3);
 VAR_6->regset->base = VAR_6->regs;

 FUNC_3("regdump", 0444, VAR_8, VAR_6->regset);

 return 0;
err:
 FUNC_4(VAR_6->debug_root);
 return VAR_7;
}
