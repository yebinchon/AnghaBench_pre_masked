
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct csio_lnode {int dummy; } ;
struct csio_hw {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 struct csio_lnode* FUNC_0 (struct csio_hw*,int *,int,int *) ;

struct csio_lnode *
FUNC_1(struct csio_hw *VAR_0)
{
 return FUNC_0(VAR_0, &VAR_0->pdev->dev, 0, ((void*)0));
}
