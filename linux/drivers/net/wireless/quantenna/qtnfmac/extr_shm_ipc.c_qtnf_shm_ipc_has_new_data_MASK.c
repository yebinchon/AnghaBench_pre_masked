
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct qtnf_shm_ipc {TYPE_3__* shm_region; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;
struct TYPE_6__ {TYPE_2__ headroom; } ;


 int const VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct qtnf_shm_ipc *VAR_1)
{
 const u32 VAR_2 = FUNC_0(&VAR_1->shm_region->headroom.hdr.flags);

 return (VAR_2 & VAR_0);
}
