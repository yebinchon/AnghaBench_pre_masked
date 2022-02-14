
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov5640_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ov5640_dev*,int ,int ,int ) ;
 int FUNC_2 (struct ov5640_dev*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ov5640_dev *VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_4) {
  VAR_5 = FUNC_1(VAR_3, VAR_0,
         FUNC_0(1), FUNC_0(1));
  if (VAR_5)
   return VAR_5;
  VAR_5 = FUNC_2(VAR_3, VAR_1,
           VAR_4 & 0xff);
  if (VAR_5)
   return VAR_5;
  VAR_5 = FUNC_2(VAR_3, VAR_2,
           VAR_4 & 0xff);
 } else {
  VAR_5 = FUNC_1(VAR_3, VAR_0, FUNC_0(1), 0);
 }

 return VAR_5;
}
