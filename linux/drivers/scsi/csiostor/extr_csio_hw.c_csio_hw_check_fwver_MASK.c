
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct csio_hw {scalar_t__ fwrev; TYPE_1__* pdev; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct csio_hw*,char*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct csio_hw *VAR_2)
{
 if (FUNC_1(VAR_2->pdev->device & VAR_0) &&
     (VAR_2->fwrev < VAR_1)) {
  FUNC_0(VAR_2, "T6 unsupported fw");
  return -1;
 }

 return 0;
}
