
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct t3cdev {int dummy; } ;
struct cxgbi_device {int flags; int nports; int skb_rx_extra; int * ports; TYPE_2__** hbas; int * itp; int skb_tx_rsvd; int rx_credit_thres; int nmtus; int mtus; int pdev; struct t3cdev* lldev; } ;
struct cpl_iscsi_hdr_norss {int dummy; } ;
struct TYPE_3__ {int nports; int mtus; } ;
struct adapter {TYPE_1__ params; int * port; int pdev; } ;
struct TYPE_4__ {int ipv4addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cxgbi_device*) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct cxgbi_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 struct cxgbi_device* FUNC_3 (struct t3cdev*) ;
 struct cxgbi_device* FUNC_4 (int ,int) ;
 int FUNC_5 (struct cxgbi_device*) ;
 int FUNC_6 (struct cxgbi_device*,int ,int ,int *,int ) ;
 int FUNC_7 (char*,struct cxgbi_device*,...) ;
 int FUNC_8 (char*,struct t3cdev*) ;
 struct adapter* FUNC_9 (struct t3cdev*) ;

__attribute__((used)) static void FUNC_10(struct t3cdev *VAR_10)
{
 struct cxgbi_device *VAR_11 = FUNC_3(VAR_10);
 struct adapter *VAR_12 = FUNC_9(VAR_10);
 int VAR_13, VAR_14;

 if (VAR_11) {
  FUNC_7("0x%p, updating.\n", VAR_11);
  return;
 }

 VAR_11 = FUNC_4(0, VAR_12->params.nports);
 if (!VAR_11) {
  FUNC_8("device 0x%p register failed.\n", VAR_10);
  return;
 }

 VAR_11->flags = VAR_2 | VAR_3;
 VAR_11->lldev = VAR_10;
 VAR_11->pdev = VAR_12->pdev;
 VAR_11->ports = VAR_12->port;
 VAR_11->nports = VAR_12->params.nports;
 VAR_11->mtus = VAR_12->params.mtus;
 VAR_11->nmtus = VAR_5;
 VAR_11->rx_credit_thres = VAR_8;
 VAR_11->skb_tx_rsvd = VAR_1;
 VAR_11->skb_rx_extra = sizeof(struct cpl_iscsi_hdr_norss);
 VAR_11->itp = &VAR_7;

 VAR_14 = FUNC_0(VAR_11);
 if (VAR_14) {
  FUNC_7("0x%p ddp init failed %d\n", VAR_11, VAR_14);
  goto err_out;
 }

 VAR_14 = FUNC_2(VAR_11);
 if (VAR_14) {
  FUNC_7("0x%p offload init failed\n", VAR_11);
  goto err_out;
 }

 VAR_14 = FUNC_6(VAR_11, VAR_0, VAR_4,
    &VAR_6, VAR_9);
 if (VAR_14)
  goto err_out;

 for (VAR_13 = 0; VAR_13 < VAR_11->nports; VAR_13++)
  VAR_11->hbas[VAR_13]->ipv4addr =
   FUNC_1(VAR_11->ports[VAR_13]);

 FUNC_7("cdev 0x%p, f 0x%x, t3dev 0x%p open, err %d.\n",
  VAR_11, VAR_11 ? VAR_11->flags : 0, VAR_10, VAR_14);
 return;

err_out:
 FUNC_5(VAR_11);
}
