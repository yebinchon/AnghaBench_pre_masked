
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct vc_data {scalar_t__ vc_pos; int vc_y; int vc_x; } ;


 int FUNC_0 (struct vc_data*,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_8)
{
 VAR_6 = VAR_2 = VAR_8->vc_x;
 VAR_7 = VAR_3 = VAR_8->vc_y;
 VAR_5 = VAR_1 = VAR_8->vc_pos;
 VAR_4 = VAR_0;
 VAR_0 = FUNC_0(VAR_8, (u_short *)VAR_5);
}
