
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct nfs_server {int writeback; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct nfs_server* FUNC_0 (struct inode*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct inode*) ;
 TYPE_1__* FUNC_4 (struct page*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct page*) ;

__attribute__((used)) static void FUNC_7(struct page *VAR_2)
{
 struct inode *VAR_3 = FUNC_4(VAR_2)->host;
 struct nfs_server *VAR_4 = FUNC_0(VAR_3);
 int VAR_5 = FUNC_6(VAR_2);

 FUNC_1(VAR_5 != 0);

 if (FUNC_2(&VAR_4->writeback) >
   VAR_1)
  FUNC_5(FUNC_3(VAR_3), VAR_0);
}
