
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int (* _read8 ) (struct intf_hdl*,int ) ;} ;
struct intf_hdl {TYPE_2__ io_ops; } ;
struct _adapter {TYPE_1__* pio_queue; } ;
struct TYPE_3__ {struct intf_hdl intf; } ;


 int FUNC_0 (struct intf_hdl*,int ) ;

u8 FUNC_1(struct _adapter *VAR_0, u32 VAR_1)
{
 struct intf_hdl *VAR_2 = &VAR_0->pio_queue->intf;

 return VAR_2->io_ops._read8(VAR_2, VAR_1);
}
