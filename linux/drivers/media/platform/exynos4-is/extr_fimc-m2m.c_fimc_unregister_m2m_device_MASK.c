
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int entity; } ;
struct TYPE_4__ {TYPE_2__ vfd; scalar_t__ m2m_dev; } ;
struct fimc_dev {TYPE_1__ m2m; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4(struct fimc_dev *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->m2m.m2m_dev)
  FUNC_1(VAR_0->m2m.m2m_dev);

 if (FUNC_2(&VAR_0->m2m.vfd)) {
  FUNC_3(&VAR_0->m2m.vfd);
  FUNC_0(&VAR_0->m2m.vfd.entity);
 }
}
