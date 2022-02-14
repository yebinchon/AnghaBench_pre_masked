
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vnic_devcmd_notify {int dummy; } ;
struct vnic_dev {int pdev; scalar_t__ notify; scalar_t__ notify_pa; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int,int *) ;
 int FUNC_1 (struct vnic_dev*,char*,scalar_t__) ;
 int FUNC_2 (struct vnic_dev*,void*,int ,int ) ;

int FUNC_3(struct vnic_dev *VAR_2, u16 VAR_3)
{
 void *VAR_4;
 dma_addr_t VAR_5;

 if (VAR_2->notify || VAR_2->notify_pa) {
  FUNC_1(VAR_2, "notify block %p still allocated\n",
       VAR_2->notify);
  return -VAR_0;
 }

 VAR_4 = FUNC_0(VAR_2->pdev,
   sizeof(struct vnic_devcmd_notify),
   &VAR_5);
 if (!VAR_4)
  return -VAR_1;

 return FUNC_2(VAR_2, VAR_4, VAR_5, VAR_3);
}
