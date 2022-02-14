
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcpm_port {int vdo_count; int vdm_state; scalar_t__ vdm_retries; int * vdo_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,int) ;

__attribute__((used)) static void FUNC_1(struct tcpm_port *VAR_1, const u32 VAR_2,
      const u32 *VAR_3, int VAR_4)
{
 VAR_1->vdo_count = VAR_4 + 1;
 VAR_1->vdo_data[0] = VAR_2;
 FUNC_0(&VAR_1->vdo_data[1], VAR_3, sizeof(u32) * VAR_4);

 VAR_1->vdm_retries = 0;
 VAR_1->vdm_state = VAR_0;
}
