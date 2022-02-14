
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_dvb_frontends {int gate; } ;
struct TYPE_5__ {TYPE_3__* frontend; } ;
struct vb2_dvb_frontend {TYPE_2__ dvb; } ;
struct cx23885_tsport {struct vb2_dvb_frontends frontends; } ;
struct TYPE_4__ {int (* i2c_gate_ctrl ) (TYPE_3__*,int) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;


 int FUNC_0 (TYPE_3__*,int) ;
 struct vb2_dvb_frontend* FUNC_1 (struct vb2_dvb_frontends*,int) ;

__attribute__((used)) static void FUNC_2(struct cx23885_tsport *VAR_0, int VAR_1)
{
 struct vb2_dvb_frontends *VAR_2;
 struct vb2_dvb_frontend *VAR_3;

 VAR_2 = &VAR_0->frontends;

 if (VAR_2->gate <= 1)
  VAR_3 = FUNC_1(VAR_2, 1);
 else
  VAR_3 = FUNC_1(VAR_2, VAR_2->gate);

 if (VAR_3 && VAR_3->dvb.frontend && VAR_3->dvb.frontend->ops.i2c_gate_ctrl)
  VAR_3->dvb.frontend->ops.i2c_gate_ctrl(VAR_3->dvb.frontend, VAR_1);
}
