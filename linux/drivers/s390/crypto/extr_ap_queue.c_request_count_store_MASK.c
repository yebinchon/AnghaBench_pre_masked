
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ap_queue {int lock; scalar_t__ total_request_count; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct ap_queue* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
       struct device_attribute *VAR_1,
       const char *VAR_2, size_t VAR_3)
{
 struct ap_queue *VAR_4 = FUNC_2(VAR_0);

 FUNC_0(&VAR_4->lock);
 VAR_4->total_request_count = 0;
 FUNC_1(&VAR_4->lock);

 return VAR_3;
}
