
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_can_classdev {int dev; scalar_t__ pm_clock_support; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct m_can_classdev *VAR_0)
{
 if (VAR_0->pm_clock_support)
  FUNC_0(VAR_0->dev);
}
