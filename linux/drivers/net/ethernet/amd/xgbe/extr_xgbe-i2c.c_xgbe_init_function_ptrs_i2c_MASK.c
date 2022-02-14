
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_i2c_if {int i2c_isr; int i2c_xfer; int i2c_stop; int i2c_start; int i2c_init; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_0(struct xgbe_i2c_if *VAR_5)
{
 VAR_5->i2c_init = VAR_1;

 VAR_5->i2c_start = VAR_2;
 VAR_5->i2c_stop = VAR_3;

 VAR_5->i2c_xfer = VAR_4;

 VAR_5->i2c_isr = VAR_0;
}
