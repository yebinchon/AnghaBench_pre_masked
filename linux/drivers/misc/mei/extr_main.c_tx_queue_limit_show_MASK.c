
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mei_device {int tx_queue_limit; int device_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct mei_device* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
       struct device_attribute *VAR_2, char *VAR_3)
{
 struct mei_device *VAR_4 = FUNC_0(VAR_1);
 u8 VAR_5 = 0;

 FUNC_1(&VAR_4->device_lock);
 VAR_5 = VAR_4->tx_queue_limit;
 FUNC_2(&VAR_4->device_lock);

 return FUNC_3(VAR_3, VAR_0, "%u\n", VAR_5);
}
