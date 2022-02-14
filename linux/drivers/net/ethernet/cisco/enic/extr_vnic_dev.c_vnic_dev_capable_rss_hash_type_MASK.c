
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
struct vnic_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vnic_dev*,int ,int*,int*,int) ;

int FUNC_1(struct vnic_dev *VAR_5, u8 *VAR_6)
{
 u64 VAR_7 = VAR_1, VAR_8 = 0;
 int VAR_9 = 1000;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_5, VAR_0, &VAR_7, &VAR_8, VAR_9);



 if (VAR_10 || (VAR_7 != 1))
  return -VAR_2;

 VAR_8 = (VAR_8 >> VAR_4) &
      VAR_3;

 *VAR_6 = (u8)VAR_8;

 return 0;
}
