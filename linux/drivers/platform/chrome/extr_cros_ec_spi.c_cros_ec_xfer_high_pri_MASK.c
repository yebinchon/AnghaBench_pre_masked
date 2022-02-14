
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cros_ec_xfer_work_params {int ret; int work; int fn; struct cros_ec_command* ec_msg; struct cros_ec_device* ec_dev; } ;
struct cros_ec_spi {int high_pri_worker; } ;
struct cros_ec_device {struct cros_ec_spi* priv; } ;
struct cros_ec_command {int dummy; } ;
typedef int cros_ec_xfer_fn_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct cros_ec_device *VAR_1,
     struct cros_ec_command *VAR_2,
     cros_ec_xfer_fn_t VAR_3)
{
 struct cros_ec_spi *VAR_4 = VAR_1->priv;
 struct cros_ec_xfer_work_params VAR_5 = {
  .work = FUNC_0(VAR_5.work,
       VAR_0),
  .ec_dev = VAR_1,
  .ec_msg = VAR_2,
  .fn = VAR_3,
 };
 FUNC_2(VAR_4->high_pri_worker, &VAR_5.work);
 FUNC_1(&VAR_5.work);

 return VAR_5.ret;
}
