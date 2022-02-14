
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_can_do_color; int vc_cols; int vc_rows; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vc_data*,int,int) ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = VAR_0 / 8;
 VAR_5 = VAR_1 / 16;
 VAR_2->vc_can_do_color = 1;
 if (VAR_3) {
  VAR_2->vc_cols = VAR_4;
  VAR_2->vc_rows = VAR_5;
 } else
  FUNC_0(VAR_2, VAR_4, VAR_5);
}
