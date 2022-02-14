
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ov5640_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ov5640_dev*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct ov5640_dev *VAR_3, u32 VAR_4)
{
 int VAR_5;

 VAR_4 <<= 4;

 VAR_5 = FUNC_0(VAR_3,
          VAR_1,
          VAR_4 & 0xff);
 if (VAR_5)
  return VAR_5;
 VAR_5 = FUNC_0(VAR_3,
          VAR_2,
          (VAR_4 >> 8) & 0xff);
 if (VAR_5)
  return VAR_5;
 return FUNC_0(VAR_3,
    VAR_0,
    (VAR_4 >> 16) & 0x0f);
}
