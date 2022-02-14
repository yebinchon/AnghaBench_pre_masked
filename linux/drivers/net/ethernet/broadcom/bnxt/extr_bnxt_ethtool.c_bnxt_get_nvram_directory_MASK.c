
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct hwrm_nvm_get_dir_entries_input {int host_dest_addr; int member_0; } ;
struct bnxt {TYPE_1__* pdev; } ;
typedef int req ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bnxt*,struct hwrm_nvm_get_dir_entries_input*,int ,int,int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,size_t,int *,int ) ;
 int FUNC_3 (int *,size_t,int *,int ) ;
 int FUNC_4 (struct bnxt*,struct hwrm_nvm_get_dir_entries_input*,int,int ) ;
 int FUNC_5 (int *,int *,size_t) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (struct net_device*,char*,unsigned int) ;
 struct bnxt* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*,int*,int*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_5, u32 VAR_6, u8 *VAR_7)
{
 struct bnxt *VAR_8 = FUNC_8(VAR_5);
 int VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u8 *VAR_12;
 size_t VAR_13;
 dma_addr_t VAR_14;
 struct hwrm_nvm_get_dir_entries_input VAR_15 = {0};

 VAR_9 = FUNC_9(VAR_5, &VAR_10, &VAR_11);
 if (VAR_9 != 0)
  return VAR_9;


 if (VAR_6 < 2)
  return -VAR_0;

 *VAR_7++ = VAR_10;
 *VAR_7++ = VAR_11;
 VAR_6 -= 2;
 FUNC_6(VAR_7, 0xff, VAR_6);

 VAR_13 = VAR_10 * VAR_11;
 VAR_12 = FUNC_2(&VAR_8->pdev->dev, VAR_13, &VAR_14,
     VAR_2);
 if (!VAR_12) {
  FUNC_7(VAR_5, "dma_alloc_coherent failure, length = %u\n",
      (unsigned)VAR_13);
  return -VAR_1;
 }
 FUNC_0(VAR_8, &VAR_15, VAR_4, -1, -1);
 VAR_15.host_dest_addr = FUNC_1(VAR_14);
 VAR_9 = FUNC_4(VAR_8, &VAR_15, sizeof(VAR_15), VAR_3);
 if (VAR_9 == 0)
  FUNC_5(VAR_7, VAR_12, VAR_6 > VAR_13 ? VAR_13 : VAR_6);
 FUNC_3(&VAR_8->pdev->dev, VAR_13, VAR_12, VAR_14);
 return VAR_9;
}
