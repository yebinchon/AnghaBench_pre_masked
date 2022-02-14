
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct color_conv_coef {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; int member_8; int member_9; } ;
struct TYPE_4__ {TYPE_1__* feat; } ;
struct TYPE_3__ {scalar_t__ has_writeback; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int,struct color_conv_coef const*) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_2;
 int VAR_3 = FUNC_1();
 const struct color_conv_coef VAR_4 = {

  298, 409, 0, 298, -208, -100, 298, 0, 517, 0,
 };
 const struct color_conv_coef VAR_5 = {

  66, 129, 25, 112, -94, -18, -38, -74, 112, 0,
 };

 for (VAR_2 = 1; VAR_2 < VAR_3; VAR_2++)
  FUNC_0(VAR_2, &VAR_4);

 if (VAR_1.feat->has_writeback)
  FUNC_0(VAR_0, &VAR_5);
}
