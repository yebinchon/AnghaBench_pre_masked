
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iwl_trans {TYPE_1__* ops; int state; } ;
struct TYPE_2__ {int (* fw_alive ) (struct iwl_trans*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct iwl_trans*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct iwl_trans *VAR_1, u32 VAR_2)
{
 FUNC_0();

 VAR_1->state = VAR_0;

 VAR_1->ops->fw_alive(VAR_1, VAR_2);
}
