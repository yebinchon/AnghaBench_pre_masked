
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cht_int33fe_data {int dummy; } ;
struct TYPE_2__ {int node; } ;


 int VAR_0 ;
 int FUNC_0 (struct cht_int33fe_data*) ;
 int FUNC_1 (struct cht_int33fe_data*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct cht_int33fe_data *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4)
  return VAR_4;
 VAR_1.node = FUNC_2(((void*)0), "intel-xhci-usb-sw");
 if (!VAR_1.node) {
  VAR_4 = -VAR_0;
  goto err_remove_nodes;
 }





 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  goto err_remove_nodes;

 return 0;

err_remove_nodes:
 FUNC_0(VAR_3);

 return VAR_4;
}
