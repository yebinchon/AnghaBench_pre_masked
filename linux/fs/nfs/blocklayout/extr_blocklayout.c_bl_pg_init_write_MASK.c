
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct nfs_pageio_descriptor {TYPE_1__* pg_lseg; int pg_inode; int * pg_dreq; } ;
struct nfs_page {int wb_index; } ;
struct TYPE_3__ {int pls_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfs_pageio_descriptor*,struct nfs_page*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nfs_pageio_descriptor*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (struct nfs_pageio_descriptor*,struct nfs_page*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void
FUNC_8(struct nfs_pageio_descriptor *VAR_2, struct nfs_page *VAR_3)
{
 u64 VAR_4;

 if (!FUNC_0(VAR_2, VAR_3, VAR_1, 1)) {
  FUNC_2(VAR_2);
  return;
 }

 if (VAR_2->pg_dreq == ((void*)0))
  VAR_4 = FUNC_5(VAR_2->pg_inode,
           VAR_3->wb_index);
 else
  VAR_4 = FUNC_1(VAR_2->pg_dreq);

 FUNC_4(VAR_2, VAR_3, VAR_4);

 if (VAR_2->pg_lseg &&
  FUNC_7(VAR_0, &VAR_2->pg_lseg->pls_flags)) {

  FUNC_3(VAR_2->pg_inode, VAR_2->pg_lseg);
  FUNC_6(VAR_2->pg_lseg);
  FUNC_2(VAR_2);
 }
}
