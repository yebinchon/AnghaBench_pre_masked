
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
struct device {int dummy; } ;
struct bttv_sub_driver {int wanted; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 struct bttv_sub_driver* FUNC_3 (struct device_driver*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct bttv_sub_driver *VAR_2 = FUNC_3(VAR_1);
 int VAR_3 = FUNC_1(VAR_2->wanted);

 if (0 == FUNC_2(FUNC_0(VAR_0), VAR_2->wanted, VAR_3))
  return 1;
 return 0;
}
