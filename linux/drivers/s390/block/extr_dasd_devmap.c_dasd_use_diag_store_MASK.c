
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dasd_devmap {int features; int device; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (struct dasd_devmap*) ;
 size_t FUNC_1 (struct dasd_devmap*) ;
 struct dasd_devmap* FUNC_2 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (char const*,int ,unsigned int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_5, struct device_attribute *VAR_6,
      const char *VAR_7, size_t VAR_8)
{
 struct dasd_devmap *VAR_9;
 unsigned int VAR_10;
 ssize_t VAR_11;

 VAR_9 = FUNC_2(FUNC_6(VAR_5));
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 if (FUNC_3(VAR_7, 0, &VAR_10) || VAR_10 > 1)
  return -VAR_2;

 FUNC_4(&VAR_4);

 VAR_11 = VAR_8;
 if (!VAR_9->device && !(VAR_9->features & VAR_1)) {
  if (VAR_10)
   VAR_9->features |= VAR_0;
  else
   VAR_9->features &= ~VAR_0;
 } else
  VAR_11 = -VAR_3;
 FUNC_5(&VAR_4);
 return VAR_11;
}
