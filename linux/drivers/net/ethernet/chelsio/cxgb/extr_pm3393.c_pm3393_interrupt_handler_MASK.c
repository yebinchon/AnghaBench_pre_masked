
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct cmac {TYPE_2__* adapter; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct cmac*) ;
 int FUNC_3 (struct cmac*,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct cmac *VAR_1)
{
 u32 VAR_2;


 FUNC_3(VAR_1, VAR_0,
        &VAR_2);
 if (FUNC_1(VAR_1->adapter))
  FUNC_0(&VAR_1->adapter->pdev->dev, "PM3393 intr cause 0x%x\n",
   VAR_2);


 FUNC_2(VAR_1);

 return 0;
}
