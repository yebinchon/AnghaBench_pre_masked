
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct nvdimm_security_ops {int dummy; } ;
struct nvdimm_bus {int dev; } ;
struct TYPE_2__ {void* ext_flags; void* flags; scalar_t__ overwrite_tmo; struct nvdimm_security_ops const* ops; } ;
struct device {struct attribute_group const** groups; int devt; int * type; int * parent; } ;
struct nvdimm {scalar_t__ id; char const* dimm_id; unsigned long flags; unsigned long cmd_mask; int num_flush; TYPE_1__ sec; int dwork; struct device dev; int busy; struct resource* flush_wpq; void* provider_data; } ;
struct attribute_group {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct device*,char*,scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (struct nvdimm*) ;
 struct nvdimm* FUNC_6 (int,int ) ;
 int FUNC_7 (struct device*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_8 (struct nvdimm*,int ) ;
 int VAR_8 ;

struct nvdimm *FUNC_9(struct nvdimm_bus *VAR_9,
  void *VAR_10, const struct attribute_group **VAR_11,
  unsigned long VAR_12, unsigned long VAR_13, int VAR_14,
  struct resource *VAR_15, const char *VAR_16,
  const struct nvdimm_security_ops *VAR_17)
{
 struct nvdimm *VAR_18 = FUNC_6(sizeof(*VAR_18), VAR_0);
 struct device *VAR_19;

 if (!VAR_18)
  return ((void*)0);

 VAR_18->id = FUNC_4(&VAR_4, 0, 0, VAR_0);
 if (VAR_18->id < 0) {
  FUNC_5(VAR_18);
  return ((void*)0);
 }

 VAR_18->dimm_id = VAR_16;
 VAR_18->provider_data = VAR_10;
 if (VAR_5)
  VAR_12 |= 1 << VAR_1;
 VAR_18->flags = VAR_12;
 VAR_18->cmd_mask = VAR_13;
 VAR_18->num_flush = VAR_14;
 VAR_18->flush_wpq = VAR_15;
 FUNC_2(&VAR_18->busy, 0);
 VAR_19 = &VAR_18->dev;
 FUNC_3(VAR_19, "nmem%d", VAR_18->id);
 VAR_19->parent = &VAR_9->dev;
 VAR_19->type = &VAR_6;
 VAR_19->devt = FUNC_1(VAR_7, VAR_18->id);
 VAR_19->groups = VAR_11;
 VAR_18->sec.ops = VAR_17;
 VAR_18->sec.overwrite_tmo = 0;
 FUNC_0(&VAR_18->dwork, VAR_8);





 VAR_18->sec.flags = FUNC_8(VAR_18, VAR_3);
 VAR_18->sec.ext_flags = FUNC_8(VAR_18, VAR_2);
 FUNC_7(VAR_19);

 return VAR_18;
}
