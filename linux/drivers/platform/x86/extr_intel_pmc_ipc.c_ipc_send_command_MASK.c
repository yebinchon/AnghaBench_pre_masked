
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ ipc_base; int cmd_complete; scalar_t__ irq_mode; int cmd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(u32 VAR_3)
{
 VAR_2.cmd = VAR_3;
 if (VAR_2.irq_mode) {
  FUNC_0(&VAR_2.cmd_complete);
  VAR_3 |= VAR_1;
 }
 FUNC_1(VAR_3, VAR_2.ipc_base + VAR_0);
}
