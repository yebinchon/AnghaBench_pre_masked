
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ov5640_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ov5640_dev*,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct ov5640_dev *VAR_3)
{
 int VAR_4, VAR_5;
 u8 VAR_6;

 VAR_5 = FUNC_0(VAR_3, VAR_0, &VAR_6);
 if (VAR_5)
  return VAR_5;
 VAR_4 = ((int)VAR_6 & 0x0f) << 16;
 VAR_5 = FUNC_0(VAR_3, VAR_2, &VAR_6);
 if (VAR_5)
  return VAR_5;
 VAR_4 |= ((int)VAR_6 << 8);
 VAR_5 = FUNC_0(VAR_3, VAR_1, &VAR_6);
 if (VAR_5)
  return VAR_5;
 VAR_4 |= (int)VAR_6;

 return VAR_4 >> 4;
}
