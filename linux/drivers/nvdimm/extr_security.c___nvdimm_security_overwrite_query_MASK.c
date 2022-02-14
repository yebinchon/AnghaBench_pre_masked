
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvdimm_bus {int reconfig_mutex; } ;
struct TYPE_4__ {unsigned int overwrite_tmo; void* flags; scalar_t__ overwrite_state; TYPE_1__* ops; } ;
struct nvdimm {TYPE_2__ sec; int dev; int flags; int dwork; } ;
struct TYPE_3__ {int (* query_overwrite ) (struct nvdimm*) ;} ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 void* FUNC_4 (struct nvdimm*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,unsigned int) ;
 int FUNC_7 (struct nvdimm*) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_9 (int ,int *) ;
 struct nvdimm_bus* FUNC_10 (int *) ;

void FUNC_11(struct nvdimm *VAR_7)
{
 struct nvdimm_bus *VAR_8 = FUNC_10(&VAR_7->dev);
 int VAR_9;
 unsigned int VAR_10;


 FUNC_2(&VAR_8->reconfig_mutex);





 if (!FUNC_9(VAR_3, &VAR_7->flags))
  return;

 VAR_10 = VAR_7->sec.overwrite_tmo;

 if (!VAR_7->sec.ops || !VAR_7->sec.ops->query_overwrite
   || !VAR_7->sec.flags)
  return;

 VAR_9 = VAR_7->sec.ops->query_overwrite(VAR_7);
 if (VAR_9 == -VAR_0) {


  VAR_10 += 10;
  FUNC_6(VAR_6, &VAR_7->dwork, VAR_10 * VAR_1);
  VAR_7->sec.overwrite_tmo = FUNC_3(15U * 60U, VAR_10);
  return;
 }

 if (VAR_9 < 0)
  FUNC_1(&VAR_7->dev, "overwrite failed\n");
 else
  FUNC_1(&VAR_7->dev, "overwrite completed\n");

 if (VAR_7->sec.overwrite_state)
  FUNC_8(VAR_7->sec.overwrite_state);
 VAR_7->sec.overwrite_tmo = 0;
 FUNC_0(VAR_2, &VAR_7->flags);
 FUNC_0(VAR_3, &VAR_7->flags);
 FUNC_5(&VAR_7->dev);
 VAR_7->sec.flags = FUNC_4(VAR_7, VAR_5);
 VAR_7->sec.flags = FUNC_4(VAR_7, VAR_4);
}
