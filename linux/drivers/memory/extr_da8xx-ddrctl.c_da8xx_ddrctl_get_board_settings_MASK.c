
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da8xx_ddrctl_setting {int dummy; } ;
struct da8xx_ddrctl_board_settings {struct da8xx_ddrctl_setting const* settings; int board; } ;


 int FUNC_0 (struct da8xx_ddrctl_board_settings*) ;
 struct da8xx_ddrctl_board_settings* VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static const struct da8xx_ddrctl_setting *FUNC_2(void)
{
 const struct da8xx_ddrctl_board_settings *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  VAR_1 = &VAR_0[VAR_2];

  if (FUNC_1(VAR_1->board))
   return VAR_1->settings;
 }

 return ((void*)0);
}
