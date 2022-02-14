
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_can_do_color; int vc_cols; int vc_rows; } ;


 int FUNC_0 (struct vc_data*,int,int) ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_0, int VAR_1)
{
    VAR_0->vc_can_do_color = 1;
    if (VAR_1) {
 VAR_0->vc_cols = 80;
 VAR_0->vc_rows = 25;
    } else
 FUNC_0(VAR_0, 80, 25);
}
