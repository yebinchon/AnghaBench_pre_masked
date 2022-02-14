
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char const* VAR_5 ;
 char const* VAR_6 ;
 char const* VAR_7 ;
 char const* VAR_8 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char const*,int ) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_9, struct device_attribute *VAR_10,
    const char *VAR_11, size_t VAR_12)
{
 scsi_qla_host_t *VAR_13 = FUNC_2(FUNC_0(VAR_9));
 int VAR_14;

 if (!VAR_11)
  return -VAR_0;

 if (FUNC_4(VAR_8, VAR_11,
  FUNC_3(VAR_8)) == 0)
  VAR_14 = VAR_4;
 else if (FUNC_4(VAR_5, VAR_11,
  FUNC_3(VAR_5)) == 0)
  VAR_14 = VAR_1;
 else if (FUNC_4(VAR_7, VAR_11,
    FUNC_3(VAR_7)) == 0)
  VAR_14 = VAR_3;
 else if (FUNC_4(VAR_6, VAR_11,
  FUNC_3(VAR_6)) == 0)
  VAR_14 = VAR_2;
 else
  return -VAR_0;

 FUNC_1(VAR_13, VAR_14);
 return FUNC_3(VAR_11);
}
