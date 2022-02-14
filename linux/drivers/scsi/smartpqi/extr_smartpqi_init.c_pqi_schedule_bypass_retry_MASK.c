
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_ctrl_info {int raid_bypass_retry_work; } ;


 int FUNC_0 (struct pqi_ctrl_info*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct pqi_ctrl_info *VAR_0)
{
 if (!FUNC_0(VAR_0))
  FUNC_1(&VAR_0->raid_bypass_retry_work);
}
