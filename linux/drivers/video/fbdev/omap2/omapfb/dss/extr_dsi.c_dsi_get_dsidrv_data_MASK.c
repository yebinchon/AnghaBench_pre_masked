
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct dsi_data {int dummy; } ;


 struct dsi_data* FUNC_0 (int *) ;

__attribute__((used)) static inline struct dsi_data *FUNC_1(struct platform_device *VAR_0)
{
 return FUNC_0(&VAR_0->dev);
}
