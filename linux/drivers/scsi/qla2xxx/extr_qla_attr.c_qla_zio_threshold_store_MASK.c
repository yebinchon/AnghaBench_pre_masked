
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_5__ {TYPE_1__* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_4__ {scalar_t__ zio_mode; int zio_threshold; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct device*) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (char const*,char*,int*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_3, struct device_attribute *VAR_4,
    const char *VAR_5, size_t VAR_6)
{
 scsi_qla_host_t *VAR_7 = FUNC_2(FUNC_1(VAR_3));
 int VAR_8 = 0;

 if (VAR_7->hw->zio_mode != VAR_2)
  return -VAR_0;
 if (FUNC_3(VAR_5, "%d", &VAR_8) != 1)
  return -VAR_0;
 if (VAR_8 < 0 || VAR_8 > 256)
  return -VAR_1;

 FUNC_0(&VAR_7->hw->zio_threshold, VAR_8);
 return FUNC_4(VAR_5);
}
