
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfcmrvl_platform_data {int reset_n_io; int hci_muxed; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct device_node*,char*,int *) ;
 int FUNC_2 (struct device_node*,char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct device_node *VAR_0,
       struct nfcmrvl_platform_data *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0, "reset-n-io", 0);
 if (VAR_2 < 0) {
  FUNC_4("no reset-n-io config\n");
 } else if (!FUNC_0(VAR_2)) {
  FUNC_3("invalid reset-n-io GPIO\n");
  return VAR_2;
 }
 VAR_1->reset_n_io = VAR_2;

 if (FUNC_1(VAR_0, "hci-muxed", ((void*)0)))
  VAR_1->hci_muxed = 1;
 else
  VAR_1->hci_muxed = 0;

 return 0;
}
