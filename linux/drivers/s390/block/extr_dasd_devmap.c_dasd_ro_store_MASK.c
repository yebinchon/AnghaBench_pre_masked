
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dasd_device {TYPE_1__* block; int flags; } ;
struct ccw_device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int open_count; int gdp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct dasd_device* FUNC_3 (struct ccw_device*) ;
 int FUNC_4 (struct dasd_device*) ;
 int FUNC_5 (struct ccw_device*,int ,unsigned int) ;
 int FUNC_6 (struct ccw_device*) ;
 scalar_t__ FUNC_7 (char const*,int ,unsigned int*) ;
 int FUNC_8 (int ,unsigned int) ;
 int FUNC_9 (int ,unsigned long) ;
 int FUNC_10 (int ,unsigned long) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 struct ccw_device* FUNC_12 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_13(struct device *VAR_4, struct device_attribute *VAR_5,
       const char *VAR_6, size_t VAR_7)
{
 struct ccw_device *VAR_8 = FUNC_12(VAR_4);
 struct dasd_device *VAR_9;
 unsigned long VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 if (FUNC_7(VAR_6, 0, &VAR_11) || VAR_11 > 1)
  return -VAR_3;

 VAR_12 = FUNC_5(VAR_8, VAR_0, VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_9 = FUNC_3(VAR_8);
 if (FUNC_0(VAR_9))
  return VAR_7;

 FUNC_9(FUNC_6(VAR_8), VAR_10);
 VAR_11 = VAR_11 || FUNC_11(VAR_1, &VAR_9->flags);

 if (!VAR_9->block || !VAR_9->block->gdp ||
     FUNC_11(VAR_2, &VAR_9->flags)) {
  FUNC_10(FUNC_6(VAR_8), VAR_10);
  goto out;
 }

 FUNC_2(&VAR_9->block->open_count);
 FUNC_10(FUNC_6(VAR_8), VAR_10);

 FUNC_8(VAR_9->block->gdp, VAR_11);
 FUNC_1(&VAR_9->block->open_count);

out:
 FUNC_4(VAR_9);

 return VAR_7;
}
