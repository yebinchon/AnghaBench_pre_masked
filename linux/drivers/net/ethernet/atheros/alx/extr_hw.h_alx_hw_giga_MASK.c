
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct alx_hw {TYPE_1__* pdev; } ;
struct TYPE_2__ {int device; } ;



__attribute__((used)) static inline bool FUNC_0(struct alx_hw *VAR_0)
{
 return VAR_0->pdev->device & 1;
}
