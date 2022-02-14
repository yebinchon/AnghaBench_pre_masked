
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct cxl_afu {TYPE_1__* native; } ;
typedef int __be64 ;
struct TYPE_2__ {int spa_max_procs; int spa_size; int * sw_command_status; scalar_t__ spa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cxl_afu*,int ,int) ;
 int FUNC_1 (char*,scalar_t__,int,int *,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct cxl_afu *VAR_5)
{
 u64 VAR_6;

 VAR_5->native->sw_command_status = (__be64 *)((char *)VAR_5->native->spa +
         ((VAR_5->native->spa_max_procs + 3) * 128));

 VAR_6 = FUNC_2(VAR_5->native->spa) & VAR_0;
 VAR_6 |= ((VAR_5->native->spa_size >> (12 - VAR_3)) - 1) & VAR_2;
 VAR_6 |= VAR_4;
 FUNC_1("cxl: SPA allocated at 0x%p. Max processes: %i, sw_command_status: 0x%p CXL_PSL_SPAP_An=0x%016llx\n",
  VAR_5->native->spa, VAR_5->native->spa_max_procs,
  VAR_5->native->sw_command_status, VAR_6);
 FUNC_0(VAR_5, VAR_1, VAR_6);
}
