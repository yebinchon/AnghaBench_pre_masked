
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int ,char const*,int *,int) ;

__attribute__((used)) static void FUNC_1(struct platform_device *VAR_0,
    const char *VAR_1, u32 *VAR_2,
    int VAR_3, u32 *VAR_4,
    u32 VAR_5)
{
 int VAR_6;

 if (!FUNC_0(VAR_0->dev.of_node, VAR_1, VAR_2,
     VAR_3)) {
  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
   VAR_2[VAR_6] /= VAR_5;
  return;
 }

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  VAR_2[VAR_6] = VAR_4[VAR_6 % 3];
}
