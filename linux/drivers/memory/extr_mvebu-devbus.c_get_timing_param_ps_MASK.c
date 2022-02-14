
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;
struct devbus {int tick_ps; int dev; } ;


 int FUNC_0 (int ,char*,char const*,int,int) ;
 int FUNC_1 (int ,char*,struct device_node*,char const*) ;
 int FUNC_2 (struct device_node*,char const*,int*) ;

__attribute__((used)) static int FUNC_3(struct devbus *VAR_0,
          struct device_node *VAR_1,
          const char *VAR_2,
          u32 *VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_2, &VAR_4);
 if (VAR_5 < 0) {
  FUNC_1(VAR_0->dev, "%pOF has no '%s' property\n",
   VAR_1, VAR_2);
  return VAR_5;
 }

 *VAR_3 = (VAR_4 + VAR_0->tick_ps - 1) / VAR_0->tick_ps;

 FUNC_0(VAR_0->dev, "%s: %u ps -> 0x%x\n",
  VAR_2, VAR_4, *VAR_3);
 return 0;
}
