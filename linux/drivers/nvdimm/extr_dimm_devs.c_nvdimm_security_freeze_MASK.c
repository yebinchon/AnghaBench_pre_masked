
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ flags; TYPE_2__* ops; } ;
struct nvdimm {TYPE_1__ sec; int dev; int flags; } ;
struct TYPE_4__ {int (* freeze ) (struct nvdimm*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct nvdimm*,int ) ;
 int FUNC_4 (struct nvdimm*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

int FUNC_6(struct nvdimm *VAR_5)
{
 int VAR_6;

 FUNC_0(!FUNC_2(&VAR_5->dev));

 if (!VAR_5->sec.ops || !VAR_5->sec.ops->freeze)
  return -VAR_2;

 if (!VAR_5->sec.flags)
  return -VAR_1;

 if (FUNC_5(VAR_3, &VAR_5->flags)) {
  FUNC_1(&VAR_5->dev, "Overwrite operation in progress.\n");
  return -VAR_0;
 }

 VAR_6 = VAR_5->sec.ops->freeze(VAR_5);
 VAR_5->sec.flags = FUNC_3(VAR_5, VAR_4);

 return VAR_6;
}
