
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvmet_req {TYPE_2__* cqe; } ;
struct TYPE_3__ {int u32; } ;
struct TYPE_4__ {TYPE_1__ result; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct nvmet_req *VAR_0, u32 VAR_1)
{
 VAR_0->cqe->result.u32 = FUNC_0(VAR_1);
}
