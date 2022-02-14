
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_ctrl_info {scalar_t__ controller_online; } ;


 int FUNC_0 (struct pqi_ctrl_info*) ;
 int FUNC_1 (struct pqi_ctrl_info*) ;

__attribute__((used)) static inline void FUNC_2(struct pqi_ctrl_info *VAR_0)
{
 if (VAR_0->controller_online)
  if (!FUNC_1(VAR_0))
   FUNC_0(VAR_0);
}
