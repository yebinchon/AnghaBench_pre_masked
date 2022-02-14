
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int inode_budget; scalar_t__ dent_budget; scalar_t__ page_budget; } ;
struct ubifs_info {TYPE_1__ bi; } ;
struct ubifs_budget_req {scalar_t__ new_ino_d; scalar_t__ new_dent; scalar_t__ new_page; scalar_t__ new_ino; } ;



__attribute__((used)) static int FUNC_0(const struct ubifs_info *VAR_0,
       const struct ubifs_budget_req *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_1->new_ino ? VAR_0->bi.inode_budget : 0;
 if (VAR_1->new_page)
  VAR_2 += VAR_0->bi.page_budget;
 if (VAR_1->new_dent)
  VAR_2 += VAR_0->bi.dent_budget;
 VAR_2 += VAR_1->new_ino_d;
 return VAR_2;
}
