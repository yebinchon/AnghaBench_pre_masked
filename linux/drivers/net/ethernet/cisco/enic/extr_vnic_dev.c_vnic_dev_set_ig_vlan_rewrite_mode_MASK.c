
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct vnic_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vnic_dev*,int ) ;
 int FUNC_1 (struct vnic_dev*,int ,int *,int *,int) ;

int FUNC_2(struct vnic_dev *VAR_1,
 u8 VAR_2)
{
 u64 VAR_3 = VAR_2, VAR_4 = 0;
 int VAR_5 = 1000;

 if (FUNC_0(VAR_1, VAR_0))
  return FUNC_1(VAR_1, VAR_0,
    &VAR_3, &VAR_4, VAR_5);
 else
  return 0;
}
