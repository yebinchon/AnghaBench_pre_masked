
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_pageio_descriptor {TYPE_1__* pg_lseg; int pg_inode; } ;
struct nfs_page {int dummy; } ;
struct TYPE_3__ {int pls_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfs_pageio_descriptor*,struct nfs_page*,int ,int) ;
 int FUNC_1 (struct nfs_pageio_descriptor*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (struct nfs_pageio_descriptor*,struct nfs_page*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void
FUNC_6(struct nfs_pageio_descriptor *VAR_2, struct nfs_page *VAR_3)
{
 if (!FUNC_0(VAR_2, VAR_3, VAR_1, 0)) {
  FUNC_1(VAR_2);
  return;
 }

 FUNC_3(VAR_2, VAR_3);

 if (VAR_2->pg_lseg &&
  FUNC_5(VAR_0, &VAR_2->pg_lseg->pls_flags)) {
  FUNC_2(VAR_2->pg_inode, VAR_2->pg_lseg);
  FUNC_4(VAR_2->pg_lseg);
  FUNC_1(VAR_2);
 }
}
