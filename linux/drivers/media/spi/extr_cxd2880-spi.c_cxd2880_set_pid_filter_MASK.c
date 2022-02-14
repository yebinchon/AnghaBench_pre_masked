
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct spi_device {int dummy; } ;
struct cxd2880_pid_filter_config {TYPE_1__* pid_config; scalar_t__ is_negative; } ;
struct TYPE_2__ {int pid; scalar_t__ is_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct spi_device*,int,int*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_2,
      struct cxd2880_pid_filter_config *VAR_3)
{
 u8 VAR_4[65];
 int VAR_5;
 u16 VAR_6 = 0;
 int VAR_7;

 if (!VAR_2) {
  FUNC_1("invalid arg\n");
  return -VAR_1;
 }

 VAR_4[0] = 0x00;
 VAR_7 = FUNC_0(VAR_2, 0x00, &VAR_4[0], 1);
 if (VAR_7)
  return VAR_7;
 if (!VAR_3) {
  VAR_4[0] = 0x02;
  VAR_7 = FUNC_0(VAR_2, 0x50, &VAR_4[0], 1);
 } else {
  VAR_4[0] = VAR_3->is_negative ? 0x01 : 0x00;

  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   VAR_6 = VAR_3->pid_config[VAR_5].pid;
   if (VAR_3->pid_config[VAR_5].is_enable) {
    VAR_4[1 + (VAR_5 * 2)] = (VAR_6 >> 8) | 0x20;
    VAR_4[2 + (VAR_5 * 2)] = VAR_6 & 0xff;
   } else {
    VAR_4[1 + (VAR_5 * 2)] = 0x00;
    VAR_4[2 + (VAR_5 * 2)] = 0x00;
   }
  }
  VAR_7 = FUNC_0(VAR_2, 0x50, VAR_4, 65);
 }

 return VAR_7;
}
