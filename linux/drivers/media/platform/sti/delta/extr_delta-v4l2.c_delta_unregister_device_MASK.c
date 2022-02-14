
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delta_dev {int vdev; scalar_t__ m2m_dev; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct delta_dev *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->m2m_dev)
  FUNC_0(VAR_0->m2m_dev);

 FUNC_1(VAR_0->vdev);
}
