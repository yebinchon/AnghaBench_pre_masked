
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_driver {int (* wait_fifo_clean ) (struct mac_driver*) ;} ;
struct hns_mac_cb {int dummy; } ;


 struct mac_driver* FUNC_0 (struct hns_mac_cb*) ;
 int FUNC_1 (struct mac_driver*) ;

int FUNC_2(struct hns_mac_cb *VAR_0)
{
 struct mac_driver *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->wait_fifo_clean)
  return VAR_1->wait_fifo_clean(VAR_1);

 return 0;
}
