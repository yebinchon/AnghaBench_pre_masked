
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vnic_devcmd_notify {int dummy; } ;
struct vnic_dev {scalar_t__ notify_sz; scalar_t__ notify_pa; int * notify; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnic_dev*,int ,int*,int*,int) ;

__attribute__((used)) static int FUNC_1(struct vnic_dev *VAR_1)
{
 u64 VAR_2, VAR_3;
 int VAR_4 = 1000;
 int VAR_5;

 VAR_2 = 0;
 VAR_3 = 0x0000ffff00000000ULL;
 VAR_3 += sizeof(struct vnic_devcmd_notify);

 VAR_5 = FUNC_0(VAR_1, VAR_0, &VAR_2, &VAR_3, VAR_4);
 VAR_1->notify = ((void*)0);
 VAR_1->notify_pa = 0;
 VAR_1->notify_sz = 0;

 return VAR_5;
}
