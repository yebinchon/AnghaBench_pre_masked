
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vdev; scalar_t__ m2m_dev; } ;
struct bdisp_dev {TYPE_1__ m2m; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct bdisp_dev *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->m2m.m2m_dev)
  FUNC_0(VAR_0->m2m.m2m_dev);

 FUNC_1(VAR_0->m2m.vdev);
}
