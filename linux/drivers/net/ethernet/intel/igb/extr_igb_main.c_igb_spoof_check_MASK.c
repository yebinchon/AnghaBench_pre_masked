
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct igb_adapter {int wvbr; int vfs_allocated_count; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static void FUNC_2(struct igb_adapter *VAR_1)
{
 int VAR_2;

 if (!VAR_1->wvbr)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->vfs_allocated_count; VAR_2++) {
  if (VAR_1->wvbr & FUNC_0(VAR_2) ||
      VAR_1->wvbr & FUNC_0(VAR_2 + VAR_0)) {
   FUNC_1(&VAR_1->pdev->dev,
    "Spoof event(s) detected on VF %d\n", VAR_2);
   VAR_1->wvbr &=
    ~(FUNC_0(VAR_2) |
      FUNC_0(VAR_2 + VAR_0));
  }
 }
}
