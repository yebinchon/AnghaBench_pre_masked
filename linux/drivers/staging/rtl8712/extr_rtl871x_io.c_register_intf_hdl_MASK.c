
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
struct intf_hdl {int * intf_dev; int * adapter; scalar_t__ intf_option; } ;
struct _adapter {int dvobjpriv; } ;


 int VAR_0 ;
 int FUNC_0 (struct _adapter*,struct intf_hdl*) ;

__attribute__((used)) static uint FUNC_1(u8 *VAR_1, struct intf_hdl *VAR_2)
{
 struct _adapter *VAR_3 = (struct _adapter *)VAR_1;

 VAR_2->intf_option = 0;
 VAR_2->adapter = VAR_1;
 VAR_2->intf_dev = (u8 *)&VAR_3->dvobjpriv;
 if (!FUNC_0(VAR_3, VAR_2))
  goto register_intf_hdl_fail;
 return VAR_0;
register_intf_hdl_fail:
 return 0;
}
