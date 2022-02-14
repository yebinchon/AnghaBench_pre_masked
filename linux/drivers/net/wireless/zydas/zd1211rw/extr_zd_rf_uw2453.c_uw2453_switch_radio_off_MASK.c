
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_rf {int dummy; } ;
struct zd_ioreq16 {int member_1; int member_0; } ;
struct zd_chip {int dummy; } ;


 int FUNC_0 (struct zd_ioreq16 const*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;


 int FUNC_2 (struct zd_chip*,struct zd_ioreq16 const*,int ) ;
 struct zd_chip* FUNC_3 (struct zd_rf*) ;
 int FUNC_4 (struct zd_chip*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct zd_rf *VAR_1)
{
 int VAR_2;
 struct zd_chip *VAR_3 = FUNC_3(VAR_1);
 static const struct zd_ioreq16 VAR_4[] = {
  { 129, 0x04 }, { 128, 0x2f },
 };



 VAR_2 = FUNC_4(VAR_3, FUNC_1(0, 0x25f90), VAR_0);
 if (VAR_2)
  return VAR_2;

 return FUNC_2(VAR_3, VAR_4, FUNC_0(VAR_4));
}
