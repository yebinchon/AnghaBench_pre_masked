
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_fw_runtime {TYPE_2__* trans; } ;
struct TYPE_3__ {int hw_error; } ;
struct TYPE_4__ {TYPE_1__ dbg; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_fw_runtime*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_fw_runtime*,int *,int,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static inline void FUNC_3(struct iwl_fw_runtime *VAR_2)
{
 if (FUNC_2(VAR_2->trans) && VAR_2->trans->dbg.hw_error) {
  FUNC_0(VAR_2, VAR_0);
  VAR_2->trans->dbg.hw_error = 0;
 } else {
  FUNC_1(VAR_2, &VAR_1, 0, 0);
 }
}
