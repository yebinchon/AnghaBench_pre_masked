
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct vnic_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnic_dev*,int ,int *,int *,int) ;

int FUNC_1(struct vnic_dev *VAR_1, u8 VAR_2,
           u64 *VAR_3, u64 *VAR_4)
{
 u64 VAR_5 = VAR_2;
 int VAR_6 = 1000;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_1, VAR_0, &VAR_5, VAR_4, VAR_6);
 if (!VAR_7)
  *VAR_3 = VAR_5;

 return VAR_7;
}
