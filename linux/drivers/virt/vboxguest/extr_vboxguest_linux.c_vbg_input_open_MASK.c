
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vbg_dev {int dummy; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vbg_dev* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (struct vbg_dev*,int) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_2)
{
 struct vbg_dev *VAR_3 = FUNC_0(VAR_2);
 u32 VAR_4 = VAR_0 | VAR_1;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 return 0;
}
