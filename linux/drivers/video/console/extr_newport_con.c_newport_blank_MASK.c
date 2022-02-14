
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int dummy; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 unsigned short FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,unsigned short) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct vc_data *VAR_3, int VAR_4, int VAR_5)
{
 unsigned short VAR_6;

 if (VAR_4 == 0) {

  VAR_6 = FUNC_0(VAR_2, VAR_1);
  FUNC_1(VAR_2, VAR_1,
    (VAR_6 | VAR_0));
 } else {

  VAR_6 = FUNC_0(VAR_2, VAR_1);
  FUNC_1(VAR_2, VAR_1,
    (VAR_6 & ~(VAR_0)));
 }
 return 1;
}
