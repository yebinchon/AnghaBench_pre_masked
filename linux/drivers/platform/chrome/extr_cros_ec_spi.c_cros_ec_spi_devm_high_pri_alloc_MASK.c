
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct sched_param {int sched_priority; } ;
struct device {int dummy; } ;
struct cros_ec_spi {TYPE_1__* high_pri_worker; } ;
struct TYPE_5__ {int task; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ,struct sched_param*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3,
        struct cros_ec_spi *VAR_4)
{
 struct sched_param VAR_5 = {
  .sched_priority = VAR_0 / 2,
 };
 int VAR_6;

 VAR_4->high_pri_worker =
  FUNC_4(0, "cros_ec_spi_high_pri");

 if (FUNC_0(VAR_4->high_pri_worker)) {
  VAR_6 = FUNC_1(VAR_4->high_pri_worker);
  FUNC_2(VAR_3, "Can't create cros_ec high pri worker: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_3(VAR_3, VAR_2,
           VAR_4->high_pri_worker);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_5(VAR_4->high_pri_worker->task,
      VAR_1, &VAR_5);
 if (VAR_6)
  FUNC_2(VAR_3, "Can't set cros_ec high pri priority: %d\n", VAR_6);
 return VAR_6;
}
