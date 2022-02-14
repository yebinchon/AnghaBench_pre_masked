
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intf_hdl {int intf_hdl_close; int intf_hdl_open; int intf_hdl_unload; int intf_hdl_init; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(struct intf_hdl *VAR_4)
{
 VAR_4->intf_hdl_init = VAR_1;
 VAR_4->intf_hdl_unload = VAR_3;
 VAR_4->intf_hdl_open = VAR_2;
 VAR_4->intf_hdl_close = VAR_0;
}
