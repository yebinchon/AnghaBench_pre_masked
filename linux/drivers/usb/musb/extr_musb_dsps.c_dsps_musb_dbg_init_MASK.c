
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct musb {int ctrl_base; int controller; } ;
struct TYPE_2__ {int base; int nregs; int regs; } ;
struct dsps_glue {TYPE_1__ regset; struct dentry* dbgfs_root; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct dentry* FUNC_1 (char*,int *) ;
 int FUNC_2 (char*,int ,struct dentry*,TYPE_1__*) ;
 char* FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (char*,char*,char*) ;

__attribute__((used)) static int FUNC_5(struct musb *VAR_2, struct dsps_glue *VAR_3)
{
 struct dentry *VAR_4;
 char VAR_5[128];

 FUNC_4(VAR_5, "%s.dsps", FUNC_3(VAR_2->controller));
 VAR_4 = FUNC_1(VAR_5, ((void*)0));
 VAR_3->dbgfs_root = VAR_4;

 VAR_3->regset.regs = VAR_1;
 VAR_3->regset.nregs = FUNC_0(VAR_1);
 VAR_3->regset.base = VAR_2->ctrl_base;

 FUNC_2("regdump", VAR_0, VAR_4, &VAR_3->regset);
 return 0;
}
