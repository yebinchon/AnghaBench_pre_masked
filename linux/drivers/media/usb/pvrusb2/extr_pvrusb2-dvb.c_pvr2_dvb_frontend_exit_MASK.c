
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_dvb_adapter {int ** i2c_client_demod; int * i2c_client_tuner; int ** fe; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct pvr2_dvb_adapter *VAR_0)
{
 if (VAR_0->fe[1]) {
  FUNC_2(VAR_0->fe[1]);
  FUNC_0(VAR_0->fe[1]);
  VAR_0->fe[1] = ((void*)0);
 }
 if (VAR_0->fe[0]) {
  FUNC_2(VAR_0->fe[0]);
  FUNC_0(VAR_0->fe[0]);
  VAR_0->fe[0] = ((void*)0);
 }

 FUNC_1(VAR_0->i2c_client_tuner);
 VAR_0->i2c_client_tuner = ((void*)0);
 FUNC_1(VAR_0->i2c_client_demod[1]);
 VAR_0->i2c_client_demod[1] = ((void*)0);
 FUNC_1(VAR_0->i2c_client_demod[0]);
 VAR_0->i2c_client_demod[0] = ((void*)0);

 return 0;
}
