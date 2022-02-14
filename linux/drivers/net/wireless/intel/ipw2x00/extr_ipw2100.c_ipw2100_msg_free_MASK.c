
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ipw2100_priv {TYPE_3__* msg_buffers; int pci_dev; } ;
struct ipw2100_cmd_header {int dummy; } ;
struct TYPE_4__ {int cmd_phys; int cmd; } ;
struct TYPE_5__ {TYPE_1__ c_struct; } ;
struct TYPE_6__ {TYPE_2__ info; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ipw2100_priv *VAR_1)
{
 int VAR_2;

 if (!VAR_1->msg_buffers)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_1(VAR_1->pci_dev,
        sizeof(struct ipw2100_cmd_header),
        VAR_1->msg_buffers[VAR_2].info.c_struct.cmd,
        VAR_1->msg_buffers[VAR_2].info.c_struct.
        cmd_phys);
 }

 FUNC_0(VAR_1->msg_buffers);
 VAR_1->msg_buffers = ((void*)0);
}
