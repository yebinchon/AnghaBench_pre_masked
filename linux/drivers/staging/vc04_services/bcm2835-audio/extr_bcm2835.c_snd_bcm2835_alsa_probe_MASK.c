
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct device*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 int VAR_4;

 if (VAR_1 <= 0 || VAR_1 > VAR_0) {
  VAR_1 = VAR_0;
  FUNC_1(VAR_3, "Illegal num_channels value, will use %u\n",
    VAR_1);
 }

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_3, VAR_1);
 if (VAR_4)
  return VAR_4;

 return 0;
}
