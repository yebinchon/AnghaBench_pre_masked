
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_2__* fe_adap; struct dib0700_adapter_state* priv; } ;
struct TYPE_3__ {int (* set_gpio ) (int ,int,int ,int) ;} ;
struct dib0700_adapter_state {TYPE_1__ dib7000p_ops; } ;
struct TYPE_4__ {int fe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int ,int) ;
 int FUNC_3 (int ,int,int ,int) ;

__attribute__((used)) static int FUNC_4(void *VAR_2, int VAR_3,
      int VAR_4, int VAR_5)
{
 struct dvb_usb_adapter *VAR_6 = VAR_2;
 struct dib0700_adapter_state *VAR_7 = VAR_6->priv;

 if (VAR_4 == VAR_1) {

  VAR_7->dib7000p_ops.set_gpio(VAR_6->fe_adap[0].fe, 8, 0, 0);
  FUNC_1(10);
  VAR_7->dib7000p_ops.set_gpio(VAR_6->fe_adap[0].fe, 8, 0, 1);
 } else {
  FUNC_0("xc4000: unknown tuner callback command: %d\n", VAR_4);
  return -VAR_0;
 }

 return 0;
}
