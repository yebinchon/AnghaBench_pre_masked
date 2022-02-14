
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvme_sgl_desc {int type; scalar_t__ length; scalar_t__ addr; } ;
struct TYPE_3__ {struct nvme_sgl_desc sgl; } ;
struct TYPE_4__ {TYPE_1__ dptr; } ;
struct nvme_command {TYPE_2__ common; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct nvme_command *VAR_2)
{
 struct nvme_sgl_desc *VAR_3 = &VAR_2->common.dptr.sgl;

 VAR_3->addr = 0;
 VAR_3->length = 0;
 VAR_3->type = (VAR_1 << 4) |
   VAR_0;
}
