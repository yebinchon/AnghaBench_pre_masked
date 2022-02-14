
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {unsigned int vc_rows; unsigned int vc_y; scalar_t__ vc_need_wrap; int vc_bottom; } ;


 int VAR_0 ;
 int FUNC_0 (struct vc_data*,unsigned int,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_1, unsigned int VAR_2)
{
 if (VAR_2 > VAR_1->vc_rows - VAR_1->vc_y)
  VAR_2 = VAR_1->vc_rows - VAR_1->vc_y;
 else if (!VAR_2)
  VAR_2 = 1;
 FUNC_0(VAR_1, VAR_1->vc_y, VAR_1->vc_bottom, VAR_0, VAR_2);
 VAR_1->vc_need_wrap = 0;
}
