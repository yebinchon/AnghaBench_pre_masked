
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfcmrvl_private {int support_fw_dnld; int ndev; } ;
struct nfcmrvl_platform_data {int break_control; int flow_control; int reset_n_io; int hci_muxed; } ;
struct nci_uart {int ndev; struct nfcmrvl_private* drv_data; TYPE_1__* tty; } ;
struct device {TYPE_2__* parent; } ;
struct TYPE_4__ {scalar_t__ of_node; } ;
struct TYPE_3__ {struct device* dev; } ;


 scalar_t__ FUNC_0 (struct nfcmrvl_private*) ;
 int VAR_0 ;
 int FUNC_1 (struct nfcmrvl_private*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nfcmrvl_private* FUNC_2 (int ,struct nci_uart*,int *,struct device*,struct nfcmrvl_platform_data*) ;
 scalar_t__ FUNC_3 (scalar_t__,struct nfcmrvl_platform_data*) ;
 int FUNC_4 (char*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct nci_uart *VAR_6)
{
 struct nfcmrvl_private *VAR_7;
 struct nfcmrvl_platform_data *VAR_8 = ((void*)0);
 struct nfcmrvl_platform_data VAR_9;
 struct device *VAR_10 = VAR_6->tty->dev;







 if (VAR_10 && VAR_10->parent && VAR_10->parent->of_node)
  if (FUNC_3(VAR_10->parent->of_node, &VAR_9) == 0)
   VAR_8 = &VAR_9;

 if (!VAR_8) {
  FUNC_4("No platform data / DT -> fallback to module params\n");
  VAR_9.hci_muxed = VAR_3;
  VAR_9.reset_n_io = VAR_4;
  VAR_9.flow_control = VAR_2;
  VAR_9.break_control = VAR_1;
  VAR_8 = &VAR_9;
 }

 VAR_7 = FUNC_2(VAR_0, VAR_6, &VAR_5,
     VAR_10, VAR_8);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_7->support_fw_dnld = 1;

 VAR_6->drv_data = VAR_7;
 VAR_6->ndev = VAR_7->ndev;

 return 0;
}
