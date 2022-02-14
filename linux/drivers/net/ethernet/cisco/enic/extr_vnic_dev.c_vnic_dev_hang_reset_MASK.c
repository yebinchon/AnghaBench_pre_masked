
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct vnic_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vnic_dev*,int ) ;
 int FUNC_1 (struct vnic_dev*,int ,int *,int *,int) ;
 int FUNC_2 (struct vnic_dev*,int ) ;
 int FUNC_3 (struct vnic_dev*,int) ;

int FUNC_4(struct vnic_dev *VAR_1, int VAR_2)
{
 u64 VAR_3 = (u32)VAR_2, VAR_4 = 0;
 int VAR_5 = 1000;
 int VAR_6;

 if (FUNC_0(VAR_1, VAR_0)) {
  return FUNC_1(VAR_1, VAR_0,
    &VAR_3, &VAR_4, VAR_5);
 } else {
  VAR_6 = FUNC_3(VAR_1, VAR_2);
  if (VAR_6)
   return VAR_6;
  return FUNC_2(VAR_1, 0);
 }
}
