
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvmet_req {TYPE_3__* ns; TYPE_2__* cmd; } ;
struct TYPE_6__ {int blksize_shift; } ;
struct TYPE_4__ {int length; } ;
struct TYPE_5__ {TYPE_1__ rw; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline u32 FUNC_1(struct nvmet_req *VAR_0)
{
 return ((u32)FUNC_0(VAR_0->cmd->rw.length) + 1) <<
   VAR_0->ns->blksize_shift;
}
