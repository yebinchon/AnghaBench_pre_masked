
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_prs_entry {int* sram; } ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct mvpp2_prs_entry*,int ,int) ;
 int FUNC_2 (struct mvpp2_prs_entry*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct mvpp2_prs_entry *VAR_6, int VAR_7,
         unsigned int VAR_8)
{

 if (VAR_7 < 0) {
  FUNC_2(VAR_6, VAR_5, 1);
  VAR_7 = 0 - VAR_7;
 } else {
  FUNC_1(VAR_6, VAR_5, 1);
 }


 VAR_6->sram[FUNC_0(VAR_4)] |=
  VAR_7 & VAR_3;


 FUNC_1(VAR_6, VAR_2,
      VAR_1);
 FUNC_2(VAR_6, VAR_2, VAR_8);


 FUNC_1(VAR_6, VAR_0, 1);
}
