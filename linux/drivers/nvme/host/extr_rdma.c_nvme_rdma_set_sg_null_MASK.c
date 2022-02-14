
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvme_keyed_sgl_desc {int type; int key; int length; scalar_t__ addr; } ;
struct TYPE_3__ {struct nvme_keyed_sgl_desc ksgl; } ;
struct TYPE_4__ {TYPE_1__ dptr; } ;
struct nvme_command {TYPE_2__ common; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct nvme_command *VAR_1)
{
 struct nvme_keyed_sgl_desc *VAR_2 = &VAR_1->common.dptr.ksgl;

 VAR_2->addr = 0;
 FUNC_0(0, VAR_2->length);
 FUNC_1(0, VAR_2->key);
 VAR_2->type = VAR_0 << 4;
 return 0;
}
