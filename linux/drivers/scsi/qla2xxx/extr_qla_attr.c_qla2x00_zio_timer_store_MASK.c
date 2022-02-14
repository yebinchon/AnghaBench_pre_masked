
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_5__ {TYPE_1__* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_4__ {scalar_t__ zio_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (char const*,char*,int*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_2, struct device_attribute *VAR_3,
   const char *VAR_4, size_t VAR_5)
{
 scsi_qla_host_t *VAR_6 = FUNC_1(FUNC_0(VAR_2));
 int VAR_7 = 0;
 uint16_t VAR_8;

 if (FUNC_2(VAR_4, "%d", &VAR_7) != 1)
  return -VAR_0;
 if (VAR_7 > 25500 || VAR_7 < 100)
  return -VAR_1;

 VAR_8 = (uint16_t)(VAR_7 / 100);
 VAR_6->hw->zio_timer = VAR_8;

 return FUNC_3(VAR_4);
}
