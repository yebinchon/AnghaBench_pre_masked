
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smi_port {int fe; scalar_t__ i2c_client_demod; scalar_t__ i2c_client_tuner; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct smi_port *VAR_0)
{
 FUNC_1(VAR_0->fe);

 if (VAR_0->i2c_client_tuner)
  FUNC_2(VAR_0->i2c_client_tuner);
 if (VAR_0->i2c_client_demod)
  FUNC_2(VAR_0->i2c_client_demod);
 FUNC_0(VAR_0->fe);
}
