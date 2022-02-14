
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_pageio_descriptor {int * pg_lseg; int pg_inode; int pg_error; } ;
struct nfs_page {int dummy; } ;
struct TYPE_2__ {int layout; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nfs_pageio_descriptor*) ;
 int FUNC_5 (struct nfs_page*) ;
 int * FUNC_6 (int ,int ,int ,int ,int ,int,int ) ;
 int FUNC_7 (int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static unsigned int
FUNC_8(struct nfs_pageio_descriptor *VAR_3,
        struct nfs_page *VAR_4)
{
 if (!VAR_3->pg_lseg) {
  VAR_3->pg_lseg = FUNC_6(VAR_3->pg_inode,
         FUNC_5(VAR_4),
         0,
         VAR_2,
         VAR_1,
         0,
         VAR_0);
  if (FUNC_1(VAR_3->pg_lseg)) {
   VAR_3->pg_error = FUNC_3(VAR_3->pg_lseg);
   VAR_3->pg_lseg = ((void*)0);
   goto out;
  }
 }
 if (VAR_3->pg_lseg)
  return FUNC_0(VAR_3->pg_lseg);

 FUNC_7(VAR_3->pg_inode,
   0, VAR_2, VAR_1,
   FUNC_2(VAR_3->pg_inode)->layout,
   VAR_3->pg_lseg);

 FUNC_4(VAR_3);
out:
 return 1;
}
