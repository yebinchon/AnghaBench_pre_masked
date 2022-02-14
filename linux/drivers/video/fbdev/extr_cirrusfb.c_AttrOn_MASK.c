
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cirrusfb_info {int regbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(const struct cirrusfb_info *VAR_3)
{
 FUNC_0(VAR_3 != ((void*)0));

 if (FUNC_2(VAR_3->regbase, VAR_0) & 0x80) {


  FUNC_3(VAR_3->regbase, VAR_1,
        FUNC_1(VAR_3->regbase, VAR_2));
 }


 FUNC_3(VAR_3->regbase, VAR_1, 0x33);


 FUNC_3(VAR_3->regbase, VAR_1, 0x00);
}
