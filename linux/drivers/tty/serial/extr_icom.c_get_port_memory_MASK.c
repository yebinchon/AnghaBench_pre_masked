
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xmit_status_area {int dummy; } ;
struct pci_dev {int dev; } ;
struct icom_port {TYPE_2__* statStg; int recv_buf_pci; void* recv_buf; int statStg_pci; int xmit_buf_pci; void* xmit_buf; void* xmitRestart; int xmitRestart_pci; TYPE_1__* adapter; } ;
struct TYPE_8__ {unsigned short leLengthASD; void* leBuffer; } ;
struct TYPE_7__ {unsigned short WorkingLength; void* leBuffer; void* leNext; scalar_t__ leLength; } ;
struct TYPE_6__ {TYPE_3__* rcv; TYPE_4__* xmit; } ;
struct TYPE_5__ {struct pci_dev* pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct icom_port*) ;
 int FUNC_4 (TYPE_4__*,int ,int) ;
 void* FUNC_5 (struct pci_dev*,int,int *) ;
 int FUNC_6 (struct icom_port*,char*,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct icom_port *VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9;
 struct pci_dev *VAR_10 = VAR_5->adapter->pci_dev;

 VAR_5->xmit_buf =
     FUNC_5(VAR_10, 4096, &VAR_5->xmit_buf_pci);
 if (!VAR_5->xmit_buf) {
  FUNC_2(&VAR_10->dev, "Can not allocate Transmit buffer\n");
  return -VAR_0;
 }

 FUNC_6(VAR_5, "GET_PORT_MEM",
       (unsigned long) VAR_5->xmit_buf);

 VAR_5->recv_buf =
     FUNC_5(VAR_10, 4096, &VAR_5->recv_buf_pci);
 if (!VAR_5->recv_buf) {
  FUNC_2(&VAR_10->dev, "Can not allocate Receive buffer\n");
  FUNC_3(VAR_5);
  return -VAR_0;
 }
 FUNC_6(VAR_5, "GET_PORT_MEM",
       (unsigned long) VAR_5->recv_buf);

 VAR_5->statStg =
     FUNC_5(VAR_10, 4096, &VAR_5->statStg_pci);
 if (!VAR_5->statStg) {
  FUNC_2(&VAR_10->dev, "Can not allocate Status buffer\n");
  FUNC_3(VAR_5);
  return -VAR_0;
 }
 FUNC_6(VAR_5, "GET_PORT_MEM",
       (unsigned long) VAR_5->statStg);

 VAR_5->xmitRestart =
     FUNC_5(VAR_10, 4096, &VAR_5->xmitRestart_pci);
 if (!VAR_5->xmitRestart) {
  FUNC_2(&VAR_10->dev,
   "Can not allocate xmit Restart buffer\n");
  FUNC_3(VAR_5);
  return -VAR_0;
 }





 VAR_7 = (unsigned long) VAR_5->statStg;
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  FUNC_6(VAR_5, "FOD_ADDR", VAR_7);
  VAR_7 = VAR_7 + sizeof(VAR_5->statStg->xmit[0]);
  if (VAR_6 < (VAR_2 - 1)) {
   FUNC_4(&VAR_5->statStg->xmit[VAR_6], 0, sizeof(struct xmit_status_area));
   VAR_5->statStg->xmit[VAR_6].leLengthASD =
       (unsigned short int) FUNC_0(VAR_4);
   FUNC_6(VAR_5, "FOD_ADDR", VAR_7);
   FUNC_6(VAR_5, "FOD_XBUFF",
         (unsigned long) VAR_5->xmit_buf);
   VAR_5->statStg->xmit[VAR_6].leBuffer =
       FUNC_1(VAR_5->xmit_buf_pci);
  } else if (VAR_6 == (VAR_2 - 1)) {
   FUNC_4(&VAR_5->statStg->xmit[VAR_6], 0, sizeof(struct xmit_status_area));
   VAR_5->statStg->xmit[VAR_6].leLengthASD =
       (unsigned short int) FUNC_0(VAR_4);
   FUNC_6(VAR_5, "FOD_XBUFF",
         (unsigned long) VAR_5->xmit_buf);
   VAR_5->statStg->xmit[VAR_6].leBuffer =
       FUNC_1(VAR_5->xmit_buf_pci);
  } else {
   FUNC_4(&VAR_5->statStg->xmit[VAR_6], 0, sizeof(struct xmit_status_area));
  }
 }

 VAR_8 = VAR_7;


 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  FUNC_6(VAR_5, "FID_ADDR", VAR_7);
  VAR_7 = VAR_7 + sizeof(VAR_5->statStg->rcv[0]);
  VAR_5->statStg->rcv[VAR_6].leLength = 0;
  VAR_5->statStg->rcv[VAR_6].WorkingLength =
      (unsigned short int) FUNC_0(VAR_3);
  if (VAR_6 < (VAR_1 - 1) ) {
   VAR_9 = VAR_7 - (unsigned long) VAR_5->statStg;
   VAR_5->statStg->rcv[VAR_6].leNext =
         FUNC_1(VAR_5-> statStg_pci + VAR_9);
   FUNC_6(VAR_5, "FID_RBUFF",
         (unsigned long) VAR_5->recv_buf);
   VAR_5->statStg->rcv[VAR_6].leBuffer =
       FUNC_1(VAR_5->recv_buf_pci);
  } else if (VAR_6 == (VAR_1 -1) ) {
   VAR_9 = VAR_8 - (unsigned long) VAR_5->statStg;
   VAR_5->statStg->rcv[VAR_6].leNext =
       FUNC_1(VAR_5-> statStg_pci + VAR_9);
   FUNC_6(VAR_5, "FID_RBUFF",
         (unsigned long) VAR_5->recv_buf + 2048);
   VAR_5->statStg->rcv[VAR_6].leBuffer =
       FUNC_1(VAR_5->recv_buf_pci + 2048);
  } else {
   VAR_5->statStg->rcv[VAR_6].leNext = 0;
   VAR_5->statStg->rcv[VAR_6].leBuffer = 0;
  }
 }

 return 0;
}
