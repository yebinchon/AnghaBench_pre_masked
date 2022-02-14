
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pt1 {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pt1*,int ) ;
 int FUNC_2 (struct pt1*,int ,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct pt1 *VAR_1)
{
 int VAR_2, VAR_3;
 u32 VAR_4;
 VAR_4 = FUNC_1(VAR_1, 0) & 0x00000004;
 FUNC_2(VAR_1, 0, 0x00000002);
 for (VAR_2 = 0; VAR_2 < 10; VAR_2++) {
  for (VAR_3 = 0; VAR_3 < 1024; VAR_3++) {
   if ((FUNC_1(VAR_1, 0) & 0x00000004) != VAR_4)
    return 0;
  }
  FUNC_3(1000, 2000);
 }
 FUNC_0(&VAR_1->pdev->dev, "could not enable RAM\n");
 return -VAR_0;
}
