
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sgmap64 {TYPE_2__* sg; void* count; } ;
struct fib {int dummy; } ;
struct aac_srb {int sg; int * cdb; void* count; void* cdb_size; scalar_t__ retry_limit; void* timeout; void* flags; scalar_t__ lun; void* id; void* channel; void* function; } ;
struct TYPE_4__ {int virt_device_target; int virt_device_bus; } ;
struct aac_dev {TYPE_3__* pdev; TYPE_1__ supplement_adapter_info; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {void* count; void** addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct fib* FUNC_0 (struct aac_dev*) ;
 int FUNC_1 (struct fib*) ;
 int FUNC_2 (struct fib*) ;
 int FUNC_3 (struct fib*) ;
 int FUNC_4 (int ,struct fib*,int,int ,int,int,int *,int *) ;
 void* FUNC_5 (int) ;
 char* FUNC_6 (int *,int,int*,int ) ;
 int FUNC_7 (int *,int,char*,int) ;
 scalar_t__ FUNC_8 (struct fib*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (int *,int ,int) ;

__attribute__((used)) static int FUNC_12(struct aac_dev *VAR_9, char *VAR_10,
       u32 VAR_11)
{
 struct aac_srb *VAR_12;
 struct sgmap64 *VAR_13;
 dma_addr_t VAR_14;
 char *VAR_15;
 struct fib *VAR_16;
 int VAR_17 = -VAR_1;
 u32 VAR_18, VAR_19;

 VAR_16 = FUNC_0(VAR_9);
 if (!VAR_16)
  goto out;

 VAR_15 = FUNC_6(&VAR_9->pdev->dev, VAR_11, &VAR_14,
         VAR_4);
 if (!VAR_15)
  goto fib_free_out;

 FUNC_3(VAR_16);

 VAR_18 = (u32)FUNC_9(VAR_9->supplement_adapter_info.virt_device_bus);
 VAR_19 = (u32)FUNC_9(VAR_9->supplement_adapter_info.virt_device_target);

 VAR_12 = (struct aac_srb *)FUNC_8(VAR_16);

 VAR_12->function = FUNC_5(VAR_5);
 VAR_12->channel = FUNC_5(VAR_18);
 VAR_12->id = FUNC_5(VAR_19);
 VAR_12->lun = 0;
 VAR_12->flags = FUNC_5(VAR_6);
 VAR_12->timeout = FUNC_5(10);
 VAR_12->retry_limit = 0;
 VAR_12->cdb_size = FUNC_5(12);
 VAR_12->count = FUNC_5(VAR_11);

 FUNC_11(VAR_12->cdb, 0, sizeof(VAR_12->cdb));
 VAR_12->cdb[0] = VAR_0;
 VAR_12->cdb[6] = VAR_8;
 FUNC_10(VAR_15, (char *)VAR_10, VAR_11);

 VAR_13 = (struct sgmap64 *)&VAR_12->sg;
 VAR_13->count = FUNC_5(1);
 VAR_13->sg[0].addr[1] = FUNC_5((u32)(((VAR_14) >> 16) >> 16));
 VAR_13->sg[0].addr[0] = FUNC_5((u32)(VAR_14 & 0xffffffff));
 VAR_13->sg[0].count = FUNC_5(VAR_11);

 VAR_17 = FUNC_4(VAR_7, VAR_16, sizeof(struct aac_srb),
    VAR_3, 1, 1, ((void*)0), ((void*)0));

 FUNC_7(&VAR_9->pdev->dev, VAR_11, VAR_15, VAR_14);





 if (VAR_17 >= 0)
  FUNC_1(VAR_16);





 if (VAR_17 != -VAR_2)
  goto fib_free_out;

out:
 return VAR_17;
fib_free_out:
 FUNC_2(VAR_16);
 goto out;
}
