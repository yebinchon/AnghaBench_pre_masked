
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt1 {TYPE_1__* pdev; } ;
struct TYPE_2__ {int device; } ;


 int FUNC_0 (struct pt1*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct pt1 *VAR_0)
{
 int VAR_1, VAR_2;
 int VAR_3;
 FUNC_1(1000, 2000);
 VAR_3 = VAR_0->pdev->device == 0x211a ? 128 : 166;
 for (VAR_1 = 0; VAR_1 < VAR_3; VAR_1++) {
  VAR_2 = FUNC_0(VAR_0);
  if (VAR_2 < 0)
   return VAR_2;
 }
 return 0;
}
