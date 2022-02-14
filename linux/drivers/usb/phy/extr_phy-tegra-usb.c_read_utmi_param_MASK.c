
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (TYPE_1__*,char*,char const*,int) ;
 int FUNC_1 (int ,char const*,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0, const char *VAR_1,
      u8 *VAR_2)
{
 u32 VAR_3;
 int VAR_4 = FUNC_1(VAR_0->dev.of_node, VAR_1, &VAR_3);
 *VAR_2 = (u8)VAR_3;
 if (VAR_4 < 0)
  FUNC_0(&VAR_0->dev,
   "Failed to read USB UTMI parameter %s: %d\n",
   VAR_1, VAR_4);
 return VAR_4;
}
