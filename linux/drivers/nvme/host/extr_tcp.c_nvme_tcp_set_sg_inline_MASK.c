
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct nvme_tcp_queue {TYPE_4__* ctrl; } ;
struct nvme_sgl_desc {int type; int length; int addr; } ;
struct TYPE_5__ {struct nvme_sgl_desc sgl; } ;
struct TYPE_6__ {TYPE_1__ dptr; } ;
struct nvme_command {TYPE_2__ common; } ;
struct TYPE_7__ {int icdoff; } ;
struct TYPE_8__ {TYPE_3__ ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct nvme_tcp_queue *VAR_2,
  struct nvme_command *VAR_3, u32 VAR_4)
{
 struct nvme_sgl_desc *VAR_5 = &VAR_3->common.dptr.sgl;

 VAR_5->addr = FUNC_1(VAR_2->ctrl->ctrl.icdoff);
 VAR_5->length = FUNC_0(VAR_4);
 VAR_5->type = (VAR_0 << 4) | VAR_1;
}
