
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct mei_device {unsigned int tx_queue_limit; int device_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct mei_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int,unsigned int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
        struct device_attribute *VAR_4,
        const char *VAR_5, size_t VAR_6)
{
 struct mei_device *VAR_7 = FUNC_0(VAR_3);
 u8 VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_5, 10, &VAR_9);
 if (VAR_10)
  return VAR_10;
 if (VAR_9 > VAR_1 || VAR_9 < VAR_2)
  return -VAR_0;
 VAR_8 = VAR_9;

 FUNC_2(&VAR_7->device_lock);
 VAR_7->tx_queue_limit = VAR_8;
 FUNC_3(&VAR_7->device_lock);

 return VAR_6;
}
