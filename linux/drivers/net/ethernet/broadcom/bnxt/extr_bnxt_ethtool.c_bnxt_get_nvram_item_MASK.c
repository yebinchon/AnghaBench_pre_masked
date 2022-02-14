
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct hwrm_nvm_read_input {void* len; void* offset; int dir_idx; int host_dest_addr; int member_0; } ;
struct bnxt {TYPE_1__* pdev; } ;
typedef int req ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bnxt*,struct hwrm_nvm_read_input*,int ,int,int) ;
 int FUNC_1 (scalar_t__) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int *,scalar_t__,int *,int ) ;
 int FUNC_5 (int *,scalar_t__,int *,int ) ;
 int FUNC_6 (struct bnxt*,struct hwrm_nvm_read_input*,int,int ) ;
 int FUNC_7 (int *,int *,scalar_t__) ;
 int FUNC_8 (struct net_device*,char*,unsigned int) ;
 struct bnxt* FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_5, u32 VAR_6, u32 VAR_7,
          u32 VAR_8, u8 *VAR_9)
{
 struct bnxt *VAR_10 = FUNC_9(VAR_5);
 int VAR_11;
 u8 *VAR_12;
 dma_addr_t VAR_13;
 struct hwrm_nvm_read_input VAR_14 = {0};

 if (!VAR_8)
  return -VAR_0;

 VAR_12 = FUNC_4(&VAR_10->pdev->dev, VAR_8, &VAR_13,
     VAR_2);
 if (!VAR_12) {
  FUNC_8(VAR_5, "dma_alloc_coherent failure, length = %u\n",
      (unsigned)VAR_8);
  return -VAR_1;
 }
 FUNC_0(VAR_10, &VAR_14, VAR_4, -1, -1);
 VAR_14.host_dest_addr = FUNC_3(VAR_13);
 VAR_14.dir_idx = FUNC_1(VAR_6);
 VAR_14.offset = FUNC_2(VAR_7);
 VAR_14.len = FUNC_2(VAR_8);

 VAR_11 = FUNC_6(VAR_10, &VAR_14, sizeof(VAR_14), VAR_3);
 if (VAR_11 == 0)
  FUNC_7(VAR_9, VAR_12, VAR_8);
 FUNC_5(&VAR_10->pdev->dev, VAR_8, VAR_12, VAR_13);
 return VAR_11;
}
