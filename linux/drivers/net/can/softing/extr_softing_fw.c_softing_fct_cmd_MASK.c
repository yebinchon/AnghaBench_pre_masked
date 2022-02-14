
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct softing {TYPE_1__* pdev; } ;
typedef int int16_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct softing*,int ,int ,char const*) ;
 int FUNC_1 (int *,char*,char const*,int) ;

__attribute__((used)) static int FUNC_2(struct softing *VAR_1, int16_t VAR_2, const char *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, 0, VAR_3);
 if (VAR_4 > 0) {
  FUNC_1(&VAR_1->pdev->dev, "%s returned %u\n", VAR_3, VAR_4);
  VAR_4 = -VAR_0;
 }
 return VAR_4;
}
