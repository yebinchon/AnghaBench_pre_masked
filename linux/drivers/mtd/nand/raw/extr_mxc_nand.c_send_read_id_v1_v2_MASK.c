
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxc_nand_host {int active_cs; int main_area0; int data_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct mxc_nand_host*,int) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct mxc_nand_host *VAR_3)
{

 FUNC_2(VAR_3->active_cs << 4, VAR_1);

 FUNC_2(VAR_0, VAR_2);


 FUNC_1(VAR_3, 1);

 FUNC_0(VAR_3->data_buf, VAR_3->main_area0, 16);
}
