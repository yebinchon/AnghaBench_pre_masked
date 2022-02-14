
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnp_dev {int dummy; } ;
struct nvt_dev {TYPE_1__* rdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct nvt_dev*) ;
 int FUNC_2 (struct nvt_dev*) ;
 struct nvt_dev* FUNC_3 (struct pnp_dev*) ;

__attribute__((used)) static void FUNC_4(struct pnp_dev *VAR_1)
{
 struct nvt_dev *VAR_2 = FUNC_3(VAR_1);

 FUNC_0(&VAR_2->rdev->dev, &VAR_0);

 FUNC_1(VAR_2);


 FUNC_2(VAR_2);
}
