
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctl_src_addr; int get_src_addr; int send; } ;
struct qedf_ctx {int mac; TYPE_1__ ctlr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct qedf_ctx *VAR_3)
{
 FUNC_1(&VAR_3->ctlr, VAR_0);

 VAR_3->ctlr.send = VAR_1;
 VAR_3->ctlr.get_src_addr = VAR_2;
 FUNC_0(VAR_3->ctlr.ctl_src_addr, VAR_3->mac);
}
