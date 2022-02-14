
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ov5640_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ov5640_dev*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct ov5640_dev *VAR_1, int VAR_2)
{
 return FUNC_0(VAR_1, VAR_0,
      (u16)VAR_2 & 0x3ff);
}
