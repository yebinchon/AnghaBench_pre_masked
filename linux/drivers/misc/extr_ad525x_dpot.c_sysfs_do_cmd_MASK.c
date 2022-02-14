
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dpot_data {int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 struct dpot_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct dpot_data*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
       struct device_attribute *VAR_1,
       const char *VAR_2, size_t VAR_3, u32 VAR_4)
{
 struct dpot_data *VAR_5 = FUNC_0(VAR_0);

 FUNC_2(&VAR_5->update_lock);
 FUNC_1(VAR_5, VAR_4, 0);
 FUNC_3(&VAR_5->update_lock);

 return VAR_3;
}
