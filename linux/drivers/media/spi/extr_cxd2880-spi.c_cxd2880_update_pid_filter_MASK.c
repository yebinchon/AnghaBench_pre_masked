
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tmpcfg ;
struct cxd2880_pid_filter_config {int is_negative; TYPE_1__* pid_config; } ;
struct cxd2880_dvb_spi {int spi_mutex; int spi; } ;
struct TYPE_2__ {int is_enable; int pid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct cxd2880_pid_filter_config*) ;
 int FUNC_1 (struct cxd2880_pid_filter_config*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct cxd2880_dvb_spi *VAR_1,
         struct cxd2880_pid_filter_config *VAR_2,
         bool VAR_3)
{
 int VAR_4;

 if (!VAR_1 || !VAR_2) {
  FUNC_4("invalid arg.\n");
  return -VAR_0;
 }

 FUNC_2(&VAR_1->spi_mutex);
 if (VAR_3) {
  struct cxd2880_pid_filter_config VAR_5;

  FUNC_1(&VAR_5, 0, sizeof(VAR_5));
  VAR_5.is_negative = 1;
  VAR_5.pid_config[0].is_enable = 1;
  VAR_5.pid_config[0].pid = 0x1fff;

  VAR_4 = FUNC_0(VAR_1->spi, &VAR_5);
 } else {
  VAR_4 = FUNC_0(VAR_1->spi, VAR_2);
 }
 FUNC_3(&VAR_1->spi_mutex);

 if (VAR_4)
  FUNC_4("set_pid_filter failed\n");

 return VAR_4;
}
