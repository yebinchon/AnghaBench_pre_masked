
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,char const*,int) ;
 int FUNC_1 (int ,char const*,int*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_3,
     const char *VAR_4, u32 *VAR_5)
{
 u32 VAR_6 = 0;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3->dev.of_node, VAR_4, &VAR_6);
 if (VAR_7 < 0 && VAR_7 != -VAR_0) {
  FUNC_0(&VAR_3->dev, "failed to parse property %s: %d\n",
   VAR_4, VAR_7);
  return VAR_7;
 }

 if (VAR_6 > VAR_2) {
  FUNC_0(&VAR_3->dev, "%s %u > INT_MAX\n", VAR_4, VAR_6);
  return -VAR_1;
 }

 *VAR_5 = VAR_6;
 return 0;
}
