
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs5535_mfgpt_timer {int nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cs5535_mfgpt_timer*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_6;
 struct cs5535_mfgpt_timer VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_7.nr = VAR_6;

  FUNC_0(&VAR_7, VAR_0, VAR_4, 0);
  FUNC_0(&VAR_7, VAR_1, VAR_4, 0);
  FUNC_0(&VAR_7, VAR_0, VAR_3, 0);
  FUNC_0(&VAR_7, VAR_1, VAR_3, 0);
  FUNC_0(&VAR_7, VAR_0, VAR_2, 0);
  FUNC_0(&VAR_7, VAR_1, VAR_2, 0);
 }
}
