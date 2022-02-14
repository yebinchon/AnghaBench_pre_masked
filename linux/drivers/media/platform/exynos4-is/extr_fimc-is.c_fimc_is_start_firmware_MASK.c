
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* f_w; } ;
struct TYPE_5__ {int vaddr; } ;
struct fimc_is {TYPE_4__ fw; TYPE_1__ memory; TYPE_2__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_7__ {int size; int data; } ;
struct TYPE_6__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct fimc_is*,int) ;
 int FUNC_2 (struct fimc_is*,int ,int,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;

int FUNC_6(struct fimc_is *VAR_3)
{
 struct device *VAR_4 = &VAR_3->pdev->dev;
 int VAR_5;

 if (VAR_3->fw.f_w == ((void*)0)) {
  FUNC_0(VAR_4, "firmware is not loaded\n");
  return -VAR_0;
 }

 FUNC_3(VAR_3->memory.vaddr, VAR_3->fw.f_w->data, VAR_3->fw.f_w->size);
 FUNC_5();

 VAR_5 = FUNC_1(VAR_3, 1);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_2, 1,
     FUNC_4(VAR_1));
 if (VAR_5 < 0)
  FUNC_0(VAR_4, "FIMC-IS CPU power on failed\n");

 return VAR_5;
}
