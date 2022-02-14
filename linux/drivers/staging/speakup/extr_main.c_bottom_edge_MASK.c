
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_rows; int vc_size_row; } ;


 int FUNC_0 (struct vc_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_3)
{
 VAR_0 |= 0x01;
 VAR_1 += (VAR_3->vc_rows - VAR_2 - 1) * VAR_3->vc_size_row;
 VAR_2 = VAR_3->vc_rows - 1;
 FUNC_0(VAR_3);
}
