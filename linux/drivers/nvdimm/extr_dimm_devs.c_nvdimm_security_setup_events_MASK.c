
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int overwrite_state; TYPE_2__* ops; int flags; } ;
struct nvdimm {TYPE_3__ sec; } ;
struct TYPE_4__ {int sd; } ;
struct device {TYPE_1__ kobj; } ;
struct TYPE_5__ {int overwrite; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,struct nvdimm*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 struct nvdimm* FUNC_2 (struct device*) ;

int FUNC_3(struct device *VAR_2)
{
 struct nvdimm *VAR_3 = FUNC_2(VAR_2);

 if (!VAR_3->sec.flags || !VAR_3->sec.ops
   || !VAR_3->sec.ops->overwrite)
  return 0;
 VAR_3->sec.overwrite_state = FUNC_1(VAR_2->kobj.sd, "security");
 if (!VAR_3->sec.overwrite_state)
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_1, VAR_3);
}
