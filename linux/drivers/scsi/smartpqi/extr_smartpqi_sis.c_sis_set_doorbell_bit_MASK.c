
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pqi_ctrl_info {TYPE_1__* registers; } ;
struct TYPE_2__ {int sis_host_to_ctrl_doorbell; } ;


 int FUNC_0 (struct pqi_ctrl_info*,int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static inline int FUNC_2(struct pqi_ctrl_info *VAR_0, u32 VAR_1)
{
 FUNC_1(VAR_1, &VAR_0->registers->sis_host_to_ctrl_doorbell);

 return FUNC_0(VAR_0, VAR_1);
}
