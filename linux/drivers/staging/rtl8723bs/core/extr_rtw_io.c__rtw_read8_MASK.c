
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int (* _read8 ) (struct intf_hdl*,int ) ;} ;
struct intf_hdl {TYPE_1__ io_ops; } ;
struct io_priv {struct intf_hdl intf; } ;
struct adapter {struct io_priv iopriv; } ;



u8 FUNC_0(struct adapter *VAR_0, u32 VAR_1)
{
 u8 VAR_2;

 struct io_priv *VAR_3 = &VAR_0->iopriv;
 struct intf_hdl *VAR_4 = &(VAR_3->intf);
 u8 (*VAR_5)(struct intf_hdl *VAR_6, u32 VAR_7);

 VAR_5 = VAR_4->io_ops._read8;

 VAR_2 = VAR_5(VAR_4, VAR_1);
 return VAR_2;
}
