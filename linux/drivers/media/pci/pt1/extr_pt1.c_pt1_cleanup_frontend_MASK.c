
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt1_adapter {int demod_i2c_client; int tuner_i2c_client; int fe; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct pt1_adapter *VAR_0)
{
 FUNC_1(VAR_0->fe);
 FUNC_0(VAR_0->tuner_i2c_client);
 FUNC_0(VAR_0->demod_i2c_client);
}
