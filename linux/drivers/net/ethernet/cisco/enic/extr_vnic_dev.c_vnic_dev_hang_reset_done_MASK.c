
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct vnic_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vnic_dev*,int ) ;
 int FUNC_1 (struct vnic_dev*,int ,scalar_t__*,scalar_t__*,int) ;
 int FUNC_2 (struct vnic_dev*,int*) ;

int FUNC_3(struct vnic_dev *VAR_1, int *VAR_2)
{
 u64 VAR_3 = 0, VAR_4 = 0;
 int VAR_5 = 1000;
 int VAR_6;

 *VAR_2 = 0;

 if (FUNC_0(VAR_1, VAR_0)) {
  VAR_6 = FUNC_1(VAR_1, VAR_0,
    &VAR_3, &VAR_4, VAR_5);
  if (VAR_6)
   return VAR_6;
 } else {
  return FUNC_2(VAR_1, VAR_2);
 }

 *VAR_2 = (VAR_3 == 0);

 return 0;
}
