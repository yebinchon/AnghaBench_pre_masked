
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct nfs_pageio_descriptor {TYPE_2__* pg_lseg; } ;
struct nfs_page {int dummy; } ;
struct TYPE_3__ {int length; int offset; } ;
struct TYPE_4__ {TYPE_1__ pls_range; } ;


 unsigned int FUNC_0 (struct nfs_pageio_descriptor*,struct nfs_page*,struct nfs_page*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct nfs_page*) ;

size_t
FUNC_3(struct nfs_pageio_descriptor *VAR_0,
       struct nfs_page *VAR_1, struct nfs_page *VAR_2)
{
 unsigned int VAR_3;
 u64 VAR_4, VAR_5, VAR_6;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (!VAR_3)
  return 0;
 if (VAR_0->pg_lseg) {
  VAR_4 = FUNC_1(VAR_0->pg_lseg->pls_range.offset,
         VAR_0->pg_lseg->pls_range.length);
  VAR_5 = FUNC_2(VAR_2);


  if (VAR_5 >= VAR_4)
   return 0;



  VAR_6 = VAR_4 - VAR_5;
  if (VAR_6 < VAR_3)
   VAR_3 = (unsigned int)VAR_6;
 }

 return VAR_3;
}
