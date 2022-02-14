
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcmu_dev {int kref; } ;
struct se_device {int dummy; } ;


 struct tcmu_dev* FUNC_0 (struct se_device*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct se_device *VAR_1)
{
 struct tcmu_dev *VAR_2 = FUNC_0(VAR_1);


 FUNC_1(&VAR_2->kref, VAR_0);
}
