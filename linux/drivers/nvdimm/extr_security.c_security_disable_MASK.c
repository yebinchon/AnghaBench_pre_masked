
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvdimm_bus {int reconfig_mutex; } ;
struct TYPE_4__ {scalar_t__ flags; TYPE_1__* ops; } ;
struct device {int dummy; } ;
struct nvdimm {TYPE_2__ sec; struct device dev; } ;
struct key {int dummy; } ;
struct TYPE_3__ {int (* disable ) (struct nvdimm*,void const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nvdimm*) ;
 int FUNC_1 (struct device*,char*,int ,char*) ;
 int FUNC_2 (struct key*) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (struct nvdimm*,unsigned int,int ,struct key**) ;
 int FUNC_5 (struct key*) ;
 scalar_t__ FUNC_6 (struct nvdimm*,int ) ;
 int FUNC_7 (struct nvdimm*,void const*) ;
 struct nvdimm_bus* FUNC_8 (struct device*) ;

__attribute__((used)) static int FUNC_9(struct nvdimm *VAR_4, unsigned int VAR_5)
{
 struct device *VAR_6 = &VAR_4->dev;
 struct nvdimm_bus *VAR_7 = FUNC_8(VAR_6);
 struct key *VAR_8;
 int VAR_9;
 const void *VAR_10;


 FUNC_3(&VAR_7->reconfig_mutex);

 if (!VAR_4->sec.ops || !VAR_4->sec.ops->disable
   || !VAR_4->sec.flags)
  return -VAR_1;

 VAR_9 = FUNC_0(VAR_4);
 if (VAR_9)
  return VAR_9;

 VAR_10 = FUNC_4(VAR_4, VAR_5,
   VAR_2, &VAR_8);
 if (!VAR_10)
  return -VAR_0;

 VAR_9 = VAR_4->sec.ops->disable(VAR_4, VAR_10);
 FUNC_1(VAR_6, "key: %d disable: %s\n", FUNC_2(VAR_8),
   VAR_9 == 0 ? "success" : "fail");

 FUNC_5(VAR_8);
 VAR_4->sec.flags = FUNC_6(VAR_4, VAR_3);
 return VAR_9;
}
