
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct nfs_commit_info {int dreq; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int wb; } ;
struct TYPE_3__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*,int ) ;
 int FUNC_1 (struct page*,int ) ;
 int FUNC_2 (int *,int ) ;
 TYPE_2__* FUNC_3 (struct inode*) ;
 TYPE_1__* FUNC_4 (struct page*) ;

__attribute__((used)) static inline
void FUNC_5(struct page *VAR_3, struct nfs_commit_info *VAR_4)
{
 if (!VAR_4->dreq) {
  struct inode *VAR_5 = FUNC_4(VAR_3)->host;

  FUNC_1(VAR_3, VAR_1);
  FUNC_2(&FUNC_3(VAR_5)->wb, VAR_2);
  FUNC_0(VAR_5, VAR_0);
 }
}
