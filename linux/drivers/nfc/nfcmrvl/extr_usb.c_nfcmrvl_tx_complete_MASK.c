
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int setup_packet; int actual_length; int status; struct sk_buff* context; } ;
struct sk_buff {scalar_t__ dev; } ;
struct nfcmrvl_usb_drv_data {int txlock; int tx_in_flight; } ;
struct nfcmrvl_private {int dev; struct nfcmrvl_usb_drv_data* drv_data; } ;
struct nci_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 struct nfcmrvl_private* FUNC_2 (struct nci_dev*) ;
 int FUNC_3 (int ,char*,struct urb*,int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct urb *VAR_0)
{
 struct sk_buff *VAR_1 = VAR_0->context;
 struct nci_dev *VAR_2 = (struct nci_dev *)VAR_1->dev;
 struct nfcmrvl_private *VAR_3 = FUNC_2(VAR_2);
 struct nfcmrvl_usb_drv_data *VAR_4 = VAR_3->drv_data;
 unsigned long VAR_5;

 FUNC_3(VAR_3->dev, "urb %p status %d count %d\n",
   VAR_0, VAR_0->status, VAR_0->actual_length);

 FUNC_4(&VAR_4->txlock, VAR_5);
 VAR_4->tx_in_flight--;
 FUNC_5(&VAR_4->txlock, VAR_5);

 FUNC_0(VAR_0->setup_packet);
 FUNC_1(VAR_1);
}
