
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvme_sgl_desc {int type; int length; scalar_t__ addr; } ;
struct TYPE_3__ {struct nvme_sgl_desc sgl; } ;
struct TYPE_4__ {TYPE_1__ dptr; } ;
struct nvme_command {TYPE_2__ common; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct nvme_command *VAR_2,
  u32 VAR_3)
{
 struct nvme_sgl_desc *VAR_4 = &VAR_2->common.dptr.sgl;

 VAR_4->addr = 0;
 VAR_4->length = FUNC_0(VAR_3);
 VAR_4->type = (VAR_1 << 4) |
   VAR_0;
}
