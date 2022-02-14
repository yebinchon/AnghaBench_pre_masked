
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddb_i2c {int adap; } ;
struct ddb {int i2c_num; struct ddb_i2c* i2c; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct ddb *VAR_0)
{
 int VAR_1;
 struct ddb_i2c *VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->i2c_num; VAR_1++) {
  VAR_2 = &VAR_0->i2c[VAR_1];
  FUNC_0(&VAR_2->adap);
 }
}
