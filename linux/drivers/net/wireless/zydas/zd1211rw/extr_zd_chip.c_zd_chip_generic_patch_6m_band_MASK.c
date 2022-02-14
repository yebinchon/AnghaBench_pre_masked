
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_ioreq16 {int member_1; int value; int member_0; } ;
struct zd_chip {int dummy; } ;


 int FUNC_0 (struct zd_ioreq16*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct zd_chip*) ;
 int FUNC_3 (struct zd_chip*,struct zd_ioreq16*,int ) ;

int FUNC_4(struct zd_chip *VAR_4, int VAR_5)
{
 struct zd_ioreq16 VAR_6[] = {
  { VAR_0, 0x14 }, { VAR_1, 0x12 }, { VAR_2, 0x10 },
  { VAR_3, 0x1e },
 };


 if (VAR_5 == 1 || VAR_5 == 11)
  VAR_6[0].value = 0x12;

 FUNC_1(FUNC_2(VAR_4), "patching for channel %d\n", VAR_5);
 return FUNC_3(VAR_4, VAR_6, FUNC_0(VAR_6));
}
