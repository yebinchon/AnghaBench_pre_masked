
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qede_dev {int cdev; TYPE_1__* ops; int dp_module; int dp_level; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int (* update_msglvl ) (int ,int ,int ) ;} ;
struct TYPE_3__ {TYPE_2__* common; } ;


 struct qede_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0, u32 VAR_1)
{
 struct qede_dev *VAR_2 = FUNC_0(VAR_0);
 u32 VAR_3 = 0;
 u8 VAR_4 = 0;

 FUNC_1(VAR_1, &VAR_3, &VAR_4);

 VAR_2->dp_level = VAR_4;
 VAR_2->dp_module = VAR_3;
 VAR_2->ops->common->update_msglvl(VAR_2->cdev,
      VAR_3, VAR_4);
}
