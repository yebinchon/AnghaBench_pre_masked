
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cosm_device {int* log_buf_len; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct cosm_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct cosm_device *VAR_5 = FUNC_0(VAR_1);
 int VAR_6;
 unsigned long VAR_7;

 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_3, 16, &VAR_7);
 if (VAR_6)
  goto exit;

 VAR_5->log_buf_len = (int *)VAR_7;
 VAR_6 = VAR_4;
exit:
 return VAR_6;
}
