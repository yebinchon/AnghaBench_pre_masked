
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt1 {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pt1*,int ) ;
 int FUNC_2 (struct pt1*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct pt1 *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < 57; VAR_2++) {
  if (FUNC_1(VAR_1, 0) & 0x20000000)
   return 0;
  FUNC_2(VAR_1, 0, 0x00000008);
 }
 FUNC_0(&VAR_1->pdev->dev, "could not sync\n");
 return -VAR_0;
}
