
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsim_dev {int dummy_region; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct devlink*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct nsim_dev *VAR_2,
          struct devlink *VAR_3)
{
 VAR_2->dummy_region =
  FUNC_1(VAR_3, "dummy",
          VAR_1,
          VAR_0);
 return FUNC_0(VAR_2->dummy_region);
}
