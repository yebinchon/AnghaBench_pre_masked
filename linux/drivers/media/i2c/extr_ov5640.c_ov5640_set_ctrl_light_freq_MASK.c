
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov5640_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ov5640_dev*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ov5640_dev *VAR_4, int VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_1, FUNC_0(7),
        (VAR_5 == VAR_3) ?
        0 : FUNC_0(7));
 if (VAR_6)
  return VAR_6;

 return FUNC_1(VAR_4, VAR_0, FUNC_0(2),
         (VAR_5 == VAR_2) ?
         FUNC_0(2) : 0);
}
