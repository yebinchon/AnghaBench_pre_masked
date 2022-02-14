
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_ctrl_info {int rescan_work; } ;


 scalar_t__ FUNC_0 (struct pqi_ctrl_info*) ;
 scalar_t__ FUNC_1 (struct pqi_ctrl_info*) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_3(
 struct pqi_ctrl_info *VAR_0, unsigned long VAR_1)
{
 if (FUNC_1(VAR_0))
  return;
 if (FUNC_0(VAR_0))
  return;

 FUNC_2(&VAR_0->rescan_work, VAR_1);
}
