
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_rf {int dummy; } ;
struct zd_ioreq16 {int member_1; int value; int member_0; } ;
struct zd_chip {int dummy; } ;


 int FUNC_0 (struct zd_ioreq16*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct zd_chip*) ;
 int FUNC_3 (struct zd_chip*,struct zd_ioreq16*,int ) ;
 struct zd_chip* FUNC_4 (struct zd_rf*) ;
 int FUNC_5 (struct zd_chip*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct zd_rf *VAR_3)
{
 int VAR_4;
 struct zd_chip *VAR_5 = FUNC_4(VAR_3);
 struct zd_ioreq16 VAR_6[] = {
  { VAR_1, 0x00 }, { VAR_2, 0x3f },
 };


 VAR_4 = FUNC_5(VAR_5, FUNC_1(0, 0x25f94), VAR_0);
 if (VAR_4)
  return VAR_4;

 if (FUNC_2(VAR_5))
  VAR_6[1].value = 0x7f;

 return FUNC_3(VAR_5, VAR_6, FUNC_0(VAR_6));
}
