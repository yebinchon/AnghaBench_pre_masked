
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int page_budget; int inode_budget; scalar_t__ dent_budget; } ;
struct ubifs_info {TYPE_1__ bi; } ;
struct ubifs_budget_req {int dirtied_ino; scalar_t__ dirtied_ino_d; scalar_t__ mod_dent; scalar_t__ dirtied_page; } ;



__attribute__((used)) static int FUNC_0(const struct ubifs_info *VAR_0,
     const struct ubifs_budget_req *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_1->dirtied_page ? VAR_0->bi.page_budget : 0;

 if (VAR_1->dirtied_ino)
  VAR_2 += VAR_0->bi.inode_budget << (VAR_1->dirtied_ino - 1);
 if (VAR_1->mod_dent)
  VAR_2 += VAR_0->bi.dent_budget;
 VAR_2 += VAR_1->dirtied_ino_d;
 return VAR_2;
}
