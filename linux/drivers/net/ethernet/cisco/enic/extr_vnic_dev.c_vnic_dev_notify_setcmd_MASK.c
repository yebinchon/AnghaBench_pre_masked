
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct vnic_devcmd_notify {int dummy; } ;
struct vnic_dev {int notify_sz; scalar_t__ notify_pa; void* notify; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,int) ;
 int FUNC_1 (struct vnic_dev*,int ,int*,int*,int) ;

__attribute__((used)) static int FUNC_2(struct vnic_dev *VAR_1,
 void *VAR_2, dma_addr_t VAR_3, u16 VAR_4)
{
 u64 VAR_5, VAR_6;
 int VAR_7 = 1000;
 int VAR_8;

 FUNC_0(VAR_2, 0, sizeof(struct vnic_devcmd_notify));
 VAR_1->notify = VAR_2;
 VAR_1->notify_pa = VAR_3;

 VAR_5 = (u64)VAR_3;
 VAR_6 = ((u64)VAR_4 << 32) & 0x0000ffff00000000ULL;
 VAR_6 += sizeof(struct vnic_devcmd_notify);

 VAR_8 = FUNC_1(VAR_1, VAR_0, &VAR_5, &VAR_6, VAR_7);
 VAR_1->notify_sz = (VAR_8 == 0) ? (u32)VAR_6 : 0;
 return VAR_8;
}
