
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct vnic_dev {int pdev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int *,int ) ;
 void* FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,void*,int ) ;
 int FUNC_3 (struct vnic_dev*,int ,int *,int *,int) ;

int FUNC_4(struct vnic_dev *VAR_2, u8 *VAR_3, u32 VAR_4)
{
 u64 VAR_5, VAR_6 = VAR_4;
 int VAR_7 = 1000;
 dma_addr_t VAR_8;
 void *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(VAR_2->pdev, VAR_4, &VAR_8);
 if (!VAR_9)
  return -VAR_1;

 FUNC_0(VAR_9, VAR_3, VAR_4);

 VAR_5 = VAR_8;

 VAR_10 = FUNC_3(VAR_2, VAR_0, &VAR_5, &VAR_6, VAR_7);

 FUNC_2(VAR_2->pdev, VAR_4, VAR_9, VAR_8);

 return VAR_10;
}
