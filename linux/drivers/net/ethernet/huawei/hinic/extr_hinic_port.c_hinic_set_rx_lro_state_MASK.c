
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct hinic_hwdev {int dummy; } ;
struct hinic_dev {struct hinic_hwdev* hwdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct hinic_dev*,int,int,int) ;
 int FUNC_1 (struct hinic_dev*,scalar_t__) ;

int FUNC_2(struct hinic_dev *VAR_1, u8 VAR_2,
      u32 VAR_3, u32 VAR_4)
{
 struct hinic_hwdev *VAR_5 = VAR_1->hwdev;
 u8 VAR_6;
 u8 VAR_7;
 int VAR_8;

 if (!VAR_5)
  return -VAR_0;

 VAR_6 = VAR_2 ? 1 : 0;
 VAR_7 = VAR_2 ? 1 : 0;

 VAR_8 = FUNC_0(VAR_1, VAR_6, VAR_7, (u8)VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_1, VAR_3);
 if (VAR_8)
  return VAR_8;

 return 0;
}
