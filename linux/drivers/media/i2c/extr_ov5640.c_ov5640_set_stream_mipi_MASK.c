
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov5640_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ov5640_dev*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct ov5640_dev *VAR_2, bool VAR_3)
{
 int VAR_4;
 VAR_4 = FUNC_0(VAR_2, VAR_1,
          VAR_3 ? 0x45 : 0x40);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_2, VAR_0,
    VAR_3 ? 0x00 : 0x0f);
}
