
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct xc2028_ctrl {int dummy; } ;
struct xc2028_config {struct xc2028_ctrl* ctrl; int i2c_addr; int * i2c_adap; } ;
struct TYPE_3__ {int * frontend; } ;
struct vb2_dvb_frontend {TYPE_1__ dvb; } ;
struct dvb_frontend {int dummy; } ;
struct cx8802_dev {TYPE_2__* core; int frontends; } ;
struct TYPE_4__ {int i2c_adap; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,struct xc2028_ctrl*) ;
 struct dvb_frontend* FUNC_1 (int ,int *,struct xc2028_config*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 struct vb2_dvb_frontend* FUNC_6 (int *,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(u8 VAR_2, struct cx8802_dev *VAR_3)
{
 struct dvb_frontend *VAR_4;
 struct vb2_dvb_frontend *VAR_5 = ((void*)0);
 struct xc2028_ctrl VAR_6;
 struct xc2028_config VAR_7 = {
  .i2c_adap = &VAR_3->core->i2c_adap,
  .i2c_addr = VAR_2,
  .ctrl = &VAR_6,
 };


 VAR_5 = FUNC_6(&VAR_3->frontends, 1);
 if (!VAR_5)
  return -VAR_0;

 if (!VAR_5->dvb.frontend) {
  FUNC_4("dvb frontend not attached. Can't attach xc3028\n");
  return -VAR_0;
 }






 FUNC_0(VAR_3->core, &VAR_6);

 VAR_4 = FUNC_1(VAR_1, VAR_5->dvb.frontend, &VAR_7);
 if (!VAR_4) {
  FUNC_4("xc3028 attach failed\n");
  FUNC_2(VAR_5->dvb.frontend);
  FUNC_3(VAR_5->dvb.frontend);
  VAR_5->dvb.frontend = ((void*)0);
  return -VAR_0;
 }

 FUNC_5("xc3028 attached\n");

 return 0;
}
