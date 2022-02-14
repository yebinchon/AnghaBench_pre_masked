
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dev; } ;
struct fc0011_config {int dummy; } ;
struct dvb_frontend {int dummy; } ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static inline
struct dvb_frontend *FUNC_1(struct dvb_frontend *VAR_0,
       struct i2c_adapter *VAR_1,
       const struct fc0011_config *VAR_2)
{
 FUNC_0(&VAR_1->dev, "fc0011 driver disabled in Kconfig\n");
 return ((void*)0);
}
