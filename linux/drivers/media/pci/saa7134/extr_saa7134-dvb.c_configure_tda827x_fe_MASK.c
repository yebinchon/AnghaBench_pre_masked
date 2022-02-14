
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* frontend; } ;
struct vb2_dvb_frontend {TYPE_2__ dvb; } ;
struct tda827x_config {int dummy; } ;
struct tda1004x_config {int tuner_address; scalar_t__ i2c_gate; } ;
struct saa7134_dev {int i2c_adap; int frontends; } ;
struct TYPE_4__ {int i2c_gate_ctrl; } ;
struct TYPE_6__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ,...) ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vb2_dvb_frontend* FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(struct saa7134_dev *VAR_4,
    struct tda1004x_config *VAR_5,
    struct tda827x_config *VAR_6)
{
 struct vb2_dvb_frontend *VAR_7;


 VAR_7 = FUNC_2(&VAR_4->frontends, 1);

 if (!VAR_7)
  return -VAR_0;

 VAR_7->dvb.frontend = FUNC_0(VAR_1, VAR_5, &VAR_4->i2c_adap);
 if (VAR_7->dvb.frontend) {
  if (VAR_5->i2c_gate)
   VAR_7->dvb.frontend->ops.i2c_gate_ctrl = VAR_3;
  if (FUNC_0(VAR_2, VAR_7->dvb.frontend,
          VAR_5->tuner_address,
          &VAR_4->i2c_adap, VAR_6))
   return 0;

  FUNC_1("no tda827x tuner found at addr: %02x\n",
    VAR_5->tuner_address);
 }
 return -VAR_0;
}
