
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct docg3 {TYPE_1__* cascade; int device_id; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct docg3*,int ) ;
 int FUNC_1 (struct docg3*,char const,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct docg3* FUNC_4 (struct device*,struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
          struct device_attribute *VAR_4,
          const char *VAR_5, size_t VAR_6)
{
 struct docg3 *VAR_7 = FUNC_4(VAR_3, VAR_4);
 int VAR_8;

 if (VAR_6 != VAR_1)
  return -VAR_2;

 FUNC_2(&VAR_7->cascade->lock);
 FUNC_0(VAR_7, VAR_7->device_id);
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  FUNC_1(VAR_7, VAR_5[VAR_8], VAR_0);
 FUNC_0(VAR_7, 0);
 FUNC_3(&VAR_7->cascade->lock);
 return VAR_6;
}
