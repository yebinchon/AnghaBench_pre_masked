
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct hwrm_nvm_write_input {int host_src_addr; int dir_data_length; void* dir_attr; void* dir_ext; void* dir_ordinal; void* dir_type; int member_0; } ;
struct bnxt {TYPE_1__* pdev; } ;
typedef int req ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bnxt*,struct hwrm_nvm_write_input*,int ,int,int) ;
 int FUNC_1 (struct bnxt*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int *,size_t,int *,int ) ;
 int FUNC_6 (int *,size_t,int *,int ) ;
 int FUNC_7 (struct bnxt*,struct hwrm_nvm_write_input*,int,int ) ;
 int FUNC_8 (int *,int const*,size_t) ;
 int FUNC_9 (struct net_device*,char*,unsigned int) ;
 struct bnxt* FUNC_10 (struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_5,
       u16 VAR_6,
       u16 VAR_7,
       u16 VAR_8,
       u16 VAR_9,
       const u8 *VAR_10,
       size_t VAR_11)
{
 struct bnxt *VAR_12 = FUNC_10(VAR_5);
 int VAR_13;
 struct hwrm_nvm_write_input VAR_14 = {0};
 dma_addr_t VAR_15;
 u8 *VAR_16;

 FUNC_0(VAR_12, &VAR_14, VAR_4, -1, -1);

 VAR_14.dir_type = FUNC_2(VAR_6);
 VAR_14.dir_ordinal = FUNC_2(VAR_7);
 VAR_14.dir_ext = FUNC_2(VAR_8);
 VAR_14.dir_attr = FUNC_2(VAR_9);
 VAR_14.dir_data_length = FUNC_3(VAR_11);

 VAR_16 = FUNC_5(&VAR_12->pdev->dev, VAR_11, &VAR_15,
      VAR_3);
 if (!VAR_16) {
  FUNC_9(VAR_5, "dma_alloc_coherent failure, length = %u\n",
      (unsigned)VAR_11);
  return -VAR_1;
 }
 FUNC_8(VAR_16, VAR_10, VAR_11);
 VAR_14.host_src_addr = FUNC_4(VAR_15);

 VAR_13 = FUNC_7(VAR_12, &VAR_14, sizeof(VAR_14), VAR_2);
 FUNC_6(&VAR_12->pdev->dev, VAR_11, VAR_16, VAR_15);

 if (VAR_13 == -VAR_0)
  FUNC_1(VAR_12);
 return VAR_13;
}
