
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u64 ;
typedef int u32 ;
typedef int u16 ;
struct vnic_dev {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct vnic_dev*,int ,unsigned int*,unsigned int*,int) ;

int FUNC_2(struct vnic_dev *VAR_1, unsigned int VAR_2, unsigned int VAR_3,
 void *VAR_4)
{
 u64 VAR_5, VAR_6;
 int VAR_7 = 1000;
 int VAR_8;

 VAR_5 = VAR_2;
 VAR_6 = VAR_3;

 VAR_8 = FUNC_1(VAR_1, VAR_0, &VAR_5, &VAR_6, VAR_7);

 switch (VAR_3) {
 case 1: *(u8 *)VAR_4 = (u8)VAR_5; break;
 case 2: *(u16 *)VAR_4 = (u16)VAR_5; break;
 case 4: *(u32 *)VAR_4 = (u32)VAR_5; break;
 case 8: *(u64 *)VAR_4 = VAR_5; break;
 default: FUNC_0(); break;
 }

 return VAR_8;
}
