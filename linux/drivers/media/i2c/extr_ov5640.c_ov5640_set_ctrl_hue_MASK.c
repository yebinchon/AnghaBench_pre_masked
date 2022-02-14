
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov5640_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ov5640_dev*,int ,int ,int ) ;
 int FUNC_2 (struct ov5640_dev*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ov5640_dev *VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_3) {
  VAR_4 = FUNC_1(VAR_2, VAR_0,
         FUNC_0(0), FUNC_0(0));
  if (VAR_4)
   return VAR_4;
  VAR_4 = FUNC_2(VAR_2, VAR_1, VAR_3);
 } else {
  VAR_4 = FUNC_1(VAR_2, VAR_0, FUNC_0(0), 0);
 }

 return VAR_4;
}
