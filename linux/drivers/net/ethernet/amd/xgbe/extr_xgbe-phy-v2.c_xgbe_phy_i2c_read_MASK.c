
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int dummy; } ;
struct xgbe_i2c_op {unsigned int target; unsigned int len; void* buf; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xgbe_prv_data*,struct xgbe_i2c_op*) ;

__attribute__((used)) static int FUNC_1(struct xgbe_prv_data *VAR_3, unsigned int VAR_4,
        void *VAR_5, unsigned int VAR_6,
        void *VAR_7, unsigned int VAR_8)
{
 struct xgbe_i2c_op VAR_9;
 int VAR_10, VAR_11;

 VAR_10 = 1;
again1:

 VAR_9.cmd = VAR_2;
 VAR_9.target = VAR_4;
 VAR_9.len = VAR_6;
 VAR_9.buf = VAR_5;
 VAR_11 = FUNC_0(VAR_3, &VAR_9);
 if (VAR_11) {
  if ((VAR_11 == -VAR_0) && VAR_10--)
   goto again1;

  return VAR_11;
 }

 VAR_10 = 1;
again2:

 VAR_9.cmd = VAR_1;
 VAR_9.target = VAR_4;
 VAR_9.len = VAR_8;
 VAR_9.buf = VAR_7;
 VAR_11 = FUNC_0(VAR_3, &VAR_9);
 if ((VAR_11 == -VAR_0) && VAR_10--)
  goto again2;

 return VAR_11;
}
