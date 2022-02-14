
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfcmrvl_private {struct nci_uart* drv_data; } ;
struct nfcmrvl_fw_uart_config {int flow_control; int baudrate; } ;
struct nci_uart {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nci_uart*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct nfcmrvl_private *VAR_0,
        const void *VAR_1)
{
 struct nci_uart *VAR_2 = VAR_0->drv_data;
 const struct nfcmrvl_fw_uart_config *VAR_3 = VAR_1;

 FUNC_1(VAR_2, FUNC_0(VAR_3->baudrate),
       VAR_3->flow_control);
}
