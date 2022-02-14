
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvdimm_bus {int reconfig_mutex; } ;
struct TYPE_4__ {void* flags; void* ext_flags; TYPE_1__* ops; } ;
struct device {int dummy; } ;
struct nvdimm {TYPE_2__ sec; struct device dev; } ;
struct key {int dummy; } ;
typedef enum nvdimm_passphrase_type { ____Placeholder_nvdimm_passphrase_type } nvdimm_passphrase_type ;
struct TYPE_3__ {int (* change_key ) (struct nvdimm*,void const*,void const*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nvdimm*) ;
 int FUNC_1 (struct device*,char*,int ,int ,char*,char*) ;
 int FUNC_2 (struct key*) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (struct nvdimm*,unsigned int,int ,struct key**) ;
 int FUNC_5 (struct key*) ;
 void* FUNC_6 (struct nvdimm*,int) ;
 int FUNC_7 (struct nvdimm*,void const*,void const*,int) ;
 struct nvdimm_bus* FUNC_8 (struct device*) ;

__attribute__((used)) static int FUNC_9(struct nvdimm *VAR_6, unsigned int VAR_7,
  unsigned int VAR_8,
  enum nvdimm_passphrase_type VAR_9)
{
 struct device *VAR_10 = &VAR_6->dev;
 struct nvdimm_bus *VAR_11 = FUNC_8(VAR_10);
 struct key *VAR_12, *VAR_13;
 int VAR_14;
 const void *VAR_15, *VAR_16;


 FUNC_3(&VAR_11->reconfig_mutex);

 if (!VAR_6->sec.ops || !VAR_6->sec.ops->change_key
   || !VAR_6->sec.flags)
  return -VAR_1;

 VAR_14 = FUNC_0(VAR_6);
 if (VAR_14)
  return VAR_14;

 VAR_15 = FUNC_4(VAR_6, VAR_7,
   VAR_2, &VAR_12);
 if (!VAR_15)
  return -VAR_0;

 VAR_16 = FUNC_4(VAR_6, VAR_8,
   VAR_4, &VAR_13);
 if (!VAR_16) {
  FUNC_5(VAR_12);
  return -VAR_0;
 }

 VAR_14 = VAR_6->sec.ops->change_key(VAR_6, VAR_15, VAR_16, VAR_9);
 FUNC_1(VAR_10, "key: %d %d update%s: %s\n",
   FUNC_2(VAR_12), FUNC_2(VAR_13),
   VAR_9 == VAR_3 ? "(master)" : "(user)",
   VAR_14 == 0 ? "success" : "fail");

 FUNC_5(VAR_13);
 FUNC_5(VAR_12);
 if (VAR_9 == VAR_3)
  VAR_6->sec.ext_flags = FUNC_6(VAR_6,
    VAR_3);
 else
  VAR_6->sec.flags = FUNC_6(VAR_6,
    VAR_5);
 return VAR_14;
}
