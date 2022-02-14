
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct icom_port {int * xmitRestart; int xmitRestart_pci; int * statStg; int statStg_pci; int * xmit_buf; int xmit_buf_pci; int * recv_buf; int recv_buf_pci; TYPE_1__* adapter; } ;
struct TYPE_2__ {struct pci_dev* pci_dev; } ;


 int FUNC_0 (struct pci_dev*,int,int *,int ) ;
 int FUNC_1 (struct icom_port*,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct icom_port *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->adapter->pci_dev;

 FUNC_1(VAR_0, "RET_PORT_MEM", 0);
 if (VAR_0->recv_buf) {
  FUNC_0(VAR_1, 4096, VAR_0->recv_buf,
        VAR_0->recv_buf_pci);
  VAR_0->recv_buf = ((void*)0);
 }
 if (VAR_0->xmit_buf) {
  FUNC_0(VAR_1, 4096, VAR_0->xmit_buf,
        VAR_0->xmit_buf_pci);
  VAR_0->xmit_buf = ((void*)0);
 }
 if (VAR_0->statStg) {
  FUNC_0(VAR_1, 4096, VAR_0->statStg,
        VAR_0->statStg_pci);
  VAR_0->statStg = ((void*)0);
 }

 if (VAR_0->xmitRestart) {
  FUNC_0(VAR_1, 4096, VAR_0->xmitRestart,
        VAR_0->xmitRestart_pci);
  VAR_0->xmitRestart = ((void*)0);
 }
}
