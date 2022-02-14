
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_3__ {int clkdco; } ;
struct TYPE_4__ {TYPE_1__ cinfo; } ;
struct dsi_data {TYPE_2__ pll; } ;


 struct dsi_data* FUNC_0 (struct platform_device*) ;

__attribute__((used)) static inline unsigned FUNC_1(struct platform_device *VAR_0, unsigned VAR_1)
{
 struct dsi_data *VAR_2 = FUNC_0(VAR_0);

 unsigned long VAR_3 = VAR_2->pll.cinfo.clkdco / 4;
 return VAR_1 * 1000 * 1000 / (VAR_3 / 1000);
}
