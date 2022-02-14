
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imxdi_dev {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct imxdi_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct imxdi_dev*,int ) ;
 int FUNC_2 (struct imxdi_dev*,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1,
  unsigned int VAR_2)
{
 struct imxdi_dev *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2)
  FUNC_2(VAR_3, VAR_0);
 else
  FUNC_1(VAR_3, VAR_0);

 return 0;
}
