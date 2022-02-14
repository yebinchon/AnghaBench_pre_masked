
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imon_context {int lock; scalar_t__ display_isopen; int display_supported; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct imon_context* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (struct imon_context*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_4 (char const*,char*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
    struct device_attribute *VAR_4,
    const char *VAR_5, size_t VAR_6)
{
 struct imon_context *VAR_7 = FUNC_0(VAR_3);
 ssize_t VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

 if (!VAR_7)
  return -VAR_2;

 FUNC_1(&VAR_7->lock);

 if (!VAR_7->display_supported) {
  VAR_8 = -VAR_2;
  goto exit;
 } else if (VAR_7->display_isopen) {
  VAR_8 = -VAR_0;
  goto exit;
 }

 if (FUNC_4(VAR_5, "%u %u %u %u %u %u %u", &VAR_9, &VAR_10, &VAR_11, &VAR_12,
     &VAR_13, &VAR_14, &VAR_15) != 7) {
  VAR_8 = -VAR_1;
  goto exit;
 }

 if ((VAR_10 < 1 || VAR_10 > 12) ||
     (VAR_11 < 1 || VAR_11 > 31) || (VAR_12 > 6) ||
     (VAR_13 > 23) || (VAR_14 > 59) || (VAR_15 > 59)) {
  VAR_8 = -VAR_1;
  goto exit;
 }

 VAR_8 = FUNC_3(VAR_7, VAR_9, VAR_10, VAR_11, VAR_12,
         VAR_13, VAR_14, VAR_15);
 if (VAR_8)
  goto exit;

 VAR_8 = VAR_6;
exit:
 FUNC_2(&VAR_7->lock);

 return VAR_8;
}
