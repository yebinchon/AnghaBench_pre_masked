
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct device_node {int dummy; } ;
struct amba_device {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct device_node*,char*,scalar_t__*) ;
 int FUNC_2 (struct amba_device*,struct device_node*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct amba_device *VAR_2,
     struct device_node *VAR_3)
{
 u32 VAR_4;

 if (!FUNC_1(VAR_3, "mpmc,cs", &VAR_4)) {
  if (VAR_4 >= VAR_1) {
   FUNC_0(&VAR_2->dev, "cs%u invalid\n", VAR_4);
   return -VAR_0;
  }

  return FUNC_2(VAR_2, VAR_3, VAR_4);
 }

 FUNC_0(&VAR_2->dev, "cs property required\n");

 return -VAR_0;
}
