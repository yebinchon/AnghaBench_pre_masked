
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_budget_req {int dd_growth; int data_growth; int idx_growth; int mod_dent; int new_dent; int dirtied_page; int new_page; int dirtied_ino_d; int new_ino_d; int dirtied_ino; int new_ino; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(const struct ubifs_budget_req *VAR_1)
{
 FUNC_1(&VAR_0);
 FUNC_0("Budgeting request: new_ino %d, dirtied_ino %d\n",
        VAR_1->new_ino, VAR_1->dirtied_ino);
 FUNC_0("\tnew_ino_d   %d, dirtied_ino_d %d\n",
        VAR_1->new_ino_d, VAR_1->dirtied_ino_d);
 FUNC_0("\tnew_page    %d, dirtied_page %d\n",
        VAR_1->new_page, VAR_1->dirtied_page);
 FUNC_0("\tnew_dent    %d, mod_dent     %d\n",
        VAR_1->new_dent, VAR_1->mod_dent);
 FUNC_0("\tidx_growth  %d\n", VAR_1->idx_growth);
 FUNC_0("\tdata_growth %d dd_growth     %d\n",
        VAR_1->data_growth, VAR_1->dd_growth);
 FUNC_2(&VAR_0);
}
