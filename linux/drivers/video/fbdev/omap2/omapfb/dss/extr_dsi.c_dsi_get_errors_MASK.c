
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct platform_device {int dummy; } ;
struct dsi_data {int errors_lock; scalar_t__ errors; } ;


 struct dsi_data* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static u32 FUNC_3(struct platform_device *VAR_0)
{
 struct dsi_data *VAR_1 = FUNC_0(VAR_0);
 unsigned long VAR_2;
 u32 VAR_3;
 FUNC_1(&VAR_1->errors_lock, VAR_2);
 VAR_3 = VAR_1->errors;
 VAR_1->errors = 0;
 FUNC_2(&VAR_1->errors_lock, VAR_2);
 return VAR_3;
}
