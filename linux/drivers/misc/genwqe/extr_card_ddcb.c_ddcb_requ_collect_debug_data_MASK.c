
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ddata_addr; } ;
struct ddcb_requ {TYPE_1__ cmd; } ;



__attribute__((used)) static inline int FUNC_0(struct ddcb_requ *VAR_0)
{
 return VAR_0->cmd.ddata_addr != 0x0;
}
