
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_inode {int data_len; } ;
struct TYPE_2__ {scalar_t__ inode_budget; } ;
struct ubifs_info {TYPE_1__ bi; } ;
struct ubifs_budget_req {scalar_t__ dd_growth; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (struct ubifs_budget_req*,int ,int) ;
 int FUNC_2 (struct ubifs_info*,struct ubifs_budget_req*) ;

void FUNC_3(struct ubifs_info *VAR_0,
          struct ubifs_inode *VAR_1)
{
 struct ubifs_budget_req VAR_2;

 FUNC_1(&VAR_2, 0, sizeof(struct ubifs_budget_req));

 VAR_2.dd_growth = VAR_0->bi.inode_budget + FUNC_0(VAR_1->data_len, 8);
 FUNC_2(VAR_0, &VAR_2);
}
