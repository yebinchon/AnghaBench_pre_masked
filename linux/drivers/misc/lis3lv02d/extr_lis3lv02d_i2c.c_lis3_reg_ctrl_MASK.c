
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lis3lv02d {int regulators; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct lis3lv02d *VAR_1, bool VAR_2)
{
 int VAR_3;
 if (VAR_2 == VAR_0) {
  VAR_3 = FUNC_1(FUNC_0(VAR_1->regulators),
     VAR_1->regulators);
 } else {
  VAR_3 = FUNC_2(FUNC_0(VAR_1->regulators),
     VAR_1->regulators);

  FUNC_3(10000, 20000);
 }
 return VAR_3;
}
