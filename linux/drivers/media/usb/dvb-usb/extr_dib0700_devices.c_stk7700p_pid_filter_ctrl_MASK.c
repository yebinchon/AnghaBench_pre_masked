
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_3__* fe_adap; struct dib0700_adapter_state* priv; TYPE_1__* dev; } ;
struct dib0700_state {scalar_t__ is_dib7000pc; } ;
struct TYPE_5__ {int (* pid_filter_ctrl ) (int ,int) ;} ;
struct dib0700_adapter_state {TYPE_2__ dib7000p_ops; } ;
struct TYPE_6__ {int fe; } ;
struct TYPE_4__ {struct dib0700_state* priv; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_0, int VAR_1)
{
 struct dib0700_state *VAR_2 = VAR_0->dev->priv;
 struct dib0700_adapter_state *VAR_3 = VAR_0->priv;
 if (VAR_2->is_dib7000pc)
  return VAR_3->dib7000p_ops.pid_filter_ctrl(VAR_0->fe_adap[0].fe, VAR_1);
 return FUNC_0(VAR_0->fe_adap[0].fe, VAR_1);
}
