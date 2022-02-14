
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xc4000_config {int dummy; } ;
struct TYPE_4__ {int * frontend; } ;
struct vb2_dvb_frontend {TYPE_2__ dvb; } ;
struct dvb_frontend {int dummy; } ;
struct cx8802_dev {TYPE_1__* core; int frontends; } ;
struct TYPE_3__ {int i2c_adap; } ;


 int VAR_0 ;
 struct dvb_frontend* FUNC_0 (int ,int *,int *,struct xc4000_config*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 struct vb2_dvb_frontend* FUNC_5 (int *,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct cx8802_dev *VAR_2, struct xc4000_config *VAR_3)
{
 struct dvb_frontend *VAR_4;
 struct vb2_dvb_frontend *VAR_5 = ((void*)0);


 VAR_5 = FUNC_5(&VAR_2->frontends, 1);
 if (!VAR_5)
  return -VAR_0;

 if (!VAR_5->dvb.frontend) {
  FUNC_3("dvb frontend not attached. Can't attach xc4000\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_0(VAR_1, VAR_5->dvb.frontend, &VAR_2->core->i2c_adap,
   VAR_3);
 if (!VAR_4) {
  FUNC_3("xc4000 attach failed\n");
  FUNC_1(VAR_5->dvb.frontend);
  FUNC_2(VAR_5->dvb.frontend);
  VAR_5->dvb.frontend = ((void*)0);
  return -VAR_0;
 }

 FUNC_4("xc4000 attached\n");

 return 0;
}
