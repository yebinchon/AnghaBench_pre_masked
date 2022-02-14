
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_wkalrm {scalar_t__ enabled; int time; } ;
struct imxdi_dev {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct imxdi_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct imxdi_dev*,int ) ;
 int FUNC_2 (struct imxdi_dev*,int ) ;
 int FUNC_3 (struct imxdi_dev*,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2, struct rtc_wkalrm *VAR_3)
{
 struct imxdi_dev *VAR_4 = FUNC_0(VAR_2);
 int VAR_5;


 VAR_5 = FUNC_3(VAR_4, FUNC_4(&VAR_3->time), VAR_0);
 if (VAR_5)
  return VAR_5;

 if (VAR_3->enabled)
  FUNC_2(VAR_4, VAR_1);
 else
  FUNC_1(VAR_4, VAR_1);

 return 0;
}
