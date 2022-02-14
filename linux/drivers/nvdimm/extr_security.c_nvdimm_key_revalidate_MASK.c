
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; TYPE_1__* ops; } ;
struct nvdimm {TYPE_2__ sec; } ;
struct key {int dummy; } ;
struct TYPE_3__ {int (* change_key ) (struct nvdimm*,void const*,void const*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct nvdimm*,struct key**) ;
 int FUNC_1 (struct key*) ;
 int FUNC_2 (struct nvdimm*,int ) ;
 int FUNC_3 (struct nvdimm*,void const*,void const*,int ) ;

__attribute__((used)) static int FUNC_4(struct nvdimm *VAR_2)
{
 struct key *VAR_3;
 int VAR_4;
 const void *VAR_5;

 if (!VAR_2->sec.ops->change_key)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_2, &VAR_3);





 VAR_4 = VAR_2->sec.ops->change_key(VAR_2, VAR_5, VAR_5, VAR_1);
 if (VAR_4 < 0) {
  FUNC_1(VAR_3);
  return VAR_4;
 }

 FUNC_1(VAR_3);
 VAR_2->sec.flags = FUNC_2(VAR_2, VAR_1);
 return 0;
}
