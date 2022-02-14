
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov5640_mode_info {int vact; int hact; } ;
struct ov5640_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ov5640_dev*,int ,int,int) ;
 int FUNC_1 (struct ov5640_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ov5640_dev *VAR_3,
       const struct ov5640_mode_info *VAR_4)
{
 int VAR_5;
 VAR_5 = FUNC_0(VAR_3, VAR_0, 0x7, 0x3);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_1, VAR_4->hact);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_1(VAR_3, VAR_2, VAR_4->vact);
}
