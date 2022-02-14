
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {scalar_t__ vc_y; scalar_t__ vc_top; scalar_t__ vc_need_wrap; scalar_t__ vc_size_row; int vc_pos; int vc_bottom; } ;


 int VAR_0 ;
 int FUNC_0 (struct vc_data*,scalar_t__,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_1)
{



 if (VAR_1->vc_y == VAR_1->vc_top)
  FUNC_0(VAR_1, VAR_1->vc_top, VAR_1->vc_bottom, VAR_0, 1);
 else if (VAR_1->vc_y > 0) {
  VAR_1->vc_y--;
  VAR_1->vc_pos -= VAR_1->vc_size_row;
 }
 VAR_1->vc_need_wrap = 0;
}
