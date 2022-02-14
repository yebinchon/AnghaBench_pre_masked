
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ov5640_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ov5640_dev*,int ,int*) ;
 int FUNC_1 (struct ov5640_dev*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct ov5640_dev *VAR_1)
{

 u8 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0, &VAR_2);
 if (VAR_3)
  return VAR_3;
 VAR_2 &= 0xfb;
 return FUNC_1(VAR_1, VAR_0, VAR_2);
}
