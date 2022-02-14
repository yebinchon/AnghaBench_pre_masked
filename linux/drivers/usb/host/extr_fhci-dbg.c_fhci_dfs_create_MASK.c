
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fhci_hcd {int dfs_root; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device* controller; } ;
struct TYPE_4__ {TYPE_1__ self; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int,int ,struct fhci_hcd*,int *) ;
 int FUNC_2 (struct device*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_3 (struct fhci_hcd*) ;
 int VAR_4 ;

void FUNC_4(struct fhci_hcd *VAR_5)
{
 struct device *VAR_6 = FUNC_3(VAR_5)->self.controller;

 VAR_5->dfs_root = FUNC_0(FUNC_2(VAR_6), VAR_4);

 FUNC_1("regs", VAR_0 | VAR_1, VAR_5->dfs_root, VAR_5,
       &VAR_3);
 FUNC_1("irq_stat", VAR_0 | VAR_1, VAR_5->dfs_root, VAR_5,
       &VAR_2);
}
