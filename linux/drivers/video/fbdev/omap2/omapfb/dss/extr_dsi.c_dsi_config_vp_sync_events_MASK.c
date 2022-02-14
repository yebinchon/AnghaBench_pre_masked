
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ trans_mode; } ;
struct dsi_data {TYPE_1__ vm_timings; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,int) ;
 scalar_t__ VAR_1 ;
 struct dsi_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*,int ) ;
 int FUNC_3 (struct platform_device*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct platform_device *VAR_2)
{
 struct dsi_data *VAR_3 = FUNC_1(VAR_2);
 bool VAR_4;
 u32 VAR_5;

 if (VAR_3->vm_timings.trans_mode == VAR_1)
  VAR_4 = 1;
 else
  VAR_4 = 0;

 VAR_5 = FUNC_2(VAR_2, VAR_0);
 VAR_5 = FUNC_0(VAR_5, 1, 9, 9);
 VAR_5 = FUNC_0(VAR_5, 1, 10, 10);
 VAR_5 = FUNC_0(VAR_5, 1, 11, 11);
 VAR_5 = FUNC_0(VAR_5, 1, 15, 15);
 VAR_5 = FUNC_0(VAR_5, VAR_4, 16, 16);
 VAR_5 = FUNC_0(VAR_5, 1, 17, 17);
 VAR_5 = FUNC_0(VAR_5, VAR_4, 18, 18);
 FUNC_3(VAR_2, VAR_0, VAR_5);
}
