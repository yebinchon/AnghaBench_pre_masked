
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_server {int writeback; } ;
struct nfs_page {int wb_page; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct nfs_server* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct nfs_page*,int ) ;
 int FUNC_6 (struct nfs_page*) ;
 TYPE_1__* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct nfs_page *VAR_3)
{
 struct inode *VAR_4 = FUNC_7(VAR_3->wb_page)->host;
 struct nfs_server *VAR_5 = FUNC_0(VAR_4);
 bool VAR_6;

 VAR_6 = FUNC_5(VAR_3, VAR_2);
 FUNC_6(VAR_3);
 if (!VAR_6)
  return;

 FUNC_3(VAR_3->wb_page);
 if (FUNC_1(&VAR_5->writeback) < VAR_1)
  FUNC_2(FUNC_4(VAR_4), VAR_0);
}
