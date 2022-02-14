
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ov5640_dev {int dummy; } ;


 int FUNC_0 (struct ov5640_dev*,int ,int *) ;
 int FUNC_1 (struct ov5640_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ov5640_dev *VAR_0, u16 VAR_1,
     u8 VAR_2, u8 VAR_3)
{
 u8 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_4 &= ~VAR_2;
 VAR_3 &= VAR_2;
 VAR_3 |= VAR_4;

 return FUNC_1(VAR_0, VAR_1, VAR_3);
}
