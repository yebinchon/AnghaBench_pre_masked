
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pageio_descriptor {int pg_inode; int * pg_dreq; } ;
struct nfs_page {scalar_t__ wb_offset; scalar_t__ wb_bytes; } ;


 scalar_t__ FUNC_0 (scalar_t__,unsigned int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct nfs_page*) ;

__attribute__((used)) static bool
FUNC_3(struct nfs_pageio_descriptor *VAR_0,
  struct nfs_page *VAR_1, unsigned int VAR_2, bool VAR_3)
{




 if (VAR_0->pg_dreq == ((void*)0))
  return 1;

 if (!FUNC_0(VAR_1->wb_offset, VAR_2))
  return 0;

 if (FUNC_0(VAR_1->wb_bytes, VAR_2))
  return 1;

 if (VAR_3 &&
     (FUNC_2(VAR_1) + VAR_1->wb_bytes == FUNC_1(VAR_0->pg_inode))) {







  return 1;
 }

 return 0;
}
