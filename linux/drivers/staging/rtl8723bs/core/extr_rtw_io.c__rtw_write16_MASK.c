
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int (* _write16 ) (struct intf_hdl*,int ,int ) ;} ;
struct intf_hdl {TYPE_1__ io_ops; } ;
struct io_priv {struct intf_hdl intf; } ;
struct adapter {struct io_priv iopriv; } ;


 int FUNC_0 (int) ;

int FUNC_1(struct adapter *VAR_0, u32 VAR_1, u16 VAR_2)
{

 struct io_priv *VAR_3 = &VAR_0->iopriv;
 struct intf_hdl *VAR_4 = &(VAR_3->intf);
 int (*VAR_5)(struct intf_hdl *VAR_6, u32 VAR_7, u16 VAR_8);
 int VAR_9;

 VAR_5 = VAR_4->io_ops._write16;

 VAR_9 = VAR_5(VAR_4, VAR_1, VAR_2);
 return FUNC_0(VAR_9);
}
