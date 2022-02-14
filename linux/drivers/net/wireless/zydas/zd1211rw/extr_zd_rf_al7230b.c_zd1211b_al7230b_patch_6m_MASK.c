
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zd_rf {int dummy; } ;
struct zd_ioreq16 {int member_1; int value; int member_0; } ;
struct zd_chip {int dummy; } ;


 int FUNC_0 (struct zd_ioreq16*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct zd_chip*) ;
 int FUNC_3 (struct zd_chip*,struct zd_ioreq16*,int ) ;
 struct zd_chip* FUNC_4 (struct zd_rf*) ;

__attribute__((used)) static int FUNC_5(struct zd_rf *VAR_2, u8 VAR_3)
{
 struct zd_chip *VAR_4 = FUNC_4(VAR_2);
 struct zd_ioreq16 VAR_5[] = {
  { VAR_0, 0x14 }, { VAR_1, 0x12 },
 };


 if (VAR_3 == 1) {
  VAR_5[0].value = 0x0e;
  VAR_5[1].value = 0x10;
 } else if (VAR_3 == 11) {
  VAR_5[0].value = 0x10;
  VAR_5[1].value = 0x10;
 }

 FUNC_1(FUNC_2(VAR_4), "patching for channel %d\n", VAR_3);
 return FUNC_3(VAR_4, VAR_5, FUNC_0(VAR_5));
}
