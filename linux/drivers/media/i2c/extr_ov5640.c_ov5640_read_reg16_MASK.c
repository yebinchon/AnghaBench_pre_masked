
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct ov5640_dev {int dummy; } ;


 int FUNC_0 (struct ov5640_dev*,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct ov5640_dev *VAR_0, u16 VAR_1, u16 *VAR_2)
{
 u8 VAR_3, VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_3);
 if (VAR_5)
  return VAR_5;
 VAR_5 = FUNC_0(VAR_0, VAR_1 + 1, &VAR_4);
 if (VAR_5)
  return VAR_5;

 *VAR_2 = ((u16)VAR_3 << 8) | (u16)VAR_4;
 return 0;
}
