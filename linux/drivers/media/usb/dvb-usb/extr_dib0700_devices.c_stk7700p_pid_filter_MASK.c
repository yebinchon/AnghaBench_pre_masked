
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct dvb_usb_adapter {TYPE_3__* fe_adap; TYPE_1__* dev; struct dib0700_adapter_state* priv; } ;
struct dib0700_state {scalar_t__ is_dib7000pc; } ;
struct TYPE_5__ {int (* pid_filter ) (int ,int,int ,int) ;} ;
struct dib0700_adapter_state {TYPE_2__ dib7000p_ops; } ;
struct TYPE_6__ {int fe; } ;
struct TYPE_4__ {struct dib0700_state* priv; } ;


 int FUNC_0 (int ,int,int ,int) ;
 int FUNC_1 (int ,int,int ,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_0, int VAR_1,
  u16 VAR_2, int VAR_3)
{
 struct dib0700_adapter_state *VAR_4 = VAR_0->priv;
 struct dib0700_state *VAR_5 = VAR_0->dev->priv;

 if (VAR_5->is_dib7000pc)
  return VAR_4->dib7000p_ops.pid_filter(VAR_0->fe_adap[0].fe, VAR_1, VAR_2, VAR_3);
 return FUNC_0(VAR_0->fe_adap[0].fe, VAR_1, VAR_2, VAR_3);
}
