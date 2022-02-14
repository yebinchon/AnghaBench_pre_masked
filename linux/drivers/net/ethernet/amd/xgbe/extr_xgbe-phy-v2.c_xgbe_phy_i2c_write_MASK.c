
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int dummy; } ;
struct xgbe_i2c_op {unsigned int target; unsigned int len; void* buf; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xgbe_prv_data*,struct xgbe_i2c_op*) ;

__attribute__((used)) static int FUNC_1(struct xgbe_prv_data *VAR_2, unsigned int VAR_3,
         void *VAR_4, unsigned int VAR_5)
{
 struct xgbe_i2c_op VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = 1;
again:

 VAR_6.cmd = VAR_1;
 VAR_6.target = VAR_3;
 VAR_6.len = VAR_5;
 VAR_6.buf = VAR_4;
 VAR_8 = FUNC_0(VAR_2, &VAR_6);
 if ((VAR_8 == -VAR_0) && VAR_7--)
  goto again;

 return VAR_8;
}
