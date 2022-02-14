
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c_rtc {int rtc_clk; int rtc_src_clk; TYPE_1__* data; int dev; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ needs_src_clk; } ;


 int FUNC_0 (int ) ;
 struct s3c_rtc* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct s3c_rtc *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->dev, 0);

 if (VAR_1->data->needs_src_clk)
  FUNC_0(VAR_1->rtc_src_clk);
 FUNC_0(VAR_1->rtc_clk);

 return 0;
}
