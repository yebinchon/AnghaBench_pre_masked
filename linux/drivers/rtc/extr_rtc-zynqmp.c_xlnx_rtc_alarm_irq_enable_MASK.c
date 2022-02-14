
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xlnx_rtc_dev {scalar_t__ reg_base; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct xlnx_rtc_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_3, u32 VAR_4)
{
 struct xlnx_rtc_dev *VAR_5 = FUNC_0(VAR_3);

 if (VAR_4)
  FUNC_1(VAR_0, VAR_5->reg_base + VAR_2);
 else
  FUNC_1(VAR_0, VAR_5->reg_base + VAR_1);

 return 0;
}
