
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dwc3 {TYPE_1__* regset; struct dentry* root; int dev; scalar_t__ regs; int dbg_lsp_select; } ;
struct dentry {int dummy; } ;
struct TYPE_3__ {scalar_t__ base; int nregs; int regs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 struct dentry* FUNC_2 (int ,int *) ;
 int FUNC_3 (char*,int,struct dentry*,struct dwc3*,int *) ;
 int FUNC_4 (char*,int,struct dentry*,TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct dwc3*,struct dentry*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__* FUNC_7 (int,int ) ;

void FUNC_8(struct dwc3 *VAR_12)
{
 struct dentry *VAR_13;

 VAR_12->regset = FUNC_7(sizeof(*VAR_12->regset), VAR_4);
 if (!VAR_12->regset)
  return;

 VAR_12->dbg_lsp_select = VAR_3;

 VAR_12->regset->regs = VAR_10;
 VAR_12->regset->nregs = FUNC_0(VAR_10);
 VAR_12->regset->base = VAR_12->regs - VAR_2;

 VAR_13 = FUNC_2(FUNC_5(VAR_12->dev), ((void*)0));
 VAR_12->root = VAR_13;

 FUNC_4("regdump", VAR_5, VAR_13, VAR_12->regset);

 FUNC_3("lsp_dump", VAR_5 | VAR_6, VAR_13, VAR_12,
       &VAR_8);

 if (FUNC_1(VAR_0)) {
  FUNC_3("mode", VAR_5 | VAR_6, VAR_13, VAR_12,
        &VAR_9);
 }

 if (FUNC_1(VAR_0) ||
   FUNC_1(VAR_1)) {
  FUNC_3("testmode", VAR_5 | VAR_6, VAR_13, VAR_12,
        &VAR_11);
  FUNC_3("link_state", VAR_5 | VAR_6, VAR_13, VAR_12,
        &VAR_7);
  FUNC_6(VAR_12, VAR_13);
 }
}
