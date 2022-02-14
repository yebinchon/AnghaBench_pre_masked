
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct bdisp_dev {int clock; } ;


 int FUNC_0 (struct bdisp_dev*) ;
 int FUNC_1 (int ) ;
 struct bdisp_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct bdisp_dev *VAR_1 = FUNC_2(VAR_0);
 int VAR_2 = FUNC_0(VAR_1);

 if (!VAR_2)
  FUNC_1(VAR_1->clock);

 return VAR_2;
}
