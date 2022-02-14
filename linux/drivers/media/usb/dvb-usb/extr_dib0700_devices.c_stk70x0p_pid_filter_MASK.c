
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct dvb_usb_adapter {TYPE_2__* fe_adap; struct dib0700_adapter_state* priv; } ;
struct TYPE_3__ {int (* pid_filter ) (int ,int,int ,int) ;} ;
struct dib0700_adapter_state {TYPE_1__ dib7000p_ops; } ;
struct TYPE_4__ {int fe; } ;


 int FUNC_0 (int ,int,int ,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_adapter *VAR_0, int VAR_1, u16 VAR_2, int VAR_3)
{
 struct dib0700_adapter_state *VAR_4 = VAR_0->priv;
 return VAR_4->dib7000p_ops.pid_filter(VAR_0->fe_adap[0].fe, VAR_1, VAR_2, VAR_3);
}
