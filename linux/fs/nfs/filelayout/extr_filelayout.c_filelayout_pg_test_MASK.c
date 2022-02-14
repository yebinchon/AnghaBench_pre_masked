
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct nfs_pageio_descriptor {TYPE_3__* pg_lseg; } ;
struct nfs_page {int dummy; } ;
struct TYPE_4__ {scalar_t__ offset; } ;
struct TYPE_6__ {TYPE_1__ pls_range; } ;
struct TYPE_5__ {scalar_t__ stripe_unit; } ;


 TYPE_2__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 size_t FUNC_4 (scalar_t__,unsigned int) ;
 unsigned int FUNC_5 (struct nfs_pageio_descriptor*,struct nfs_page*,struct nfs_page*) ;
 scalar_t__ FUNC_6 (struct nfs_page*) ;

__attribute__((used)) static size_t
FUNC_7(struct nfs_pageio_descriptor *VAR_0, struct nfs_page *VAR_1,
     struct nfs_page *VAR_2)
{
 unsigned int VAR_3;
 u64 VAR_4, VAR_5;
 u32 VAR_6;
 u64 VAR_7 = VAR_0->pg_lseg->pls_range.offset;
 u32 VAR_8 = FUNC_0(VAR_0->pg_lseg)->stripe_unit;


 VAR_3 = FUNC_5(VAR_0, VAR_1, VAR_2);
 if (!VAR_3)
  return 0;


 if (VAR_1) {
  VAR_4 = (u64)FUNC_6(VAR_1) - VAR_7;
  VAR_5 = (u64)FUNC_6(VAR_2) - VAR_7;
  FUNC_3(VAR_4, VAR_8);
  FUNC_3(VAR_5, VAR_8);

  if (VAR_4 != VAR_5)
   return 0;
 }


 FUNC_2((u64)FUNC_6(VAR_2) - VAR_7,
   VAR_8,
   &VAR_6);
 FUNC_1(VAR_6 > VAR_8);
 if (VAR_6 >= VAR_8)
  return 0;
 return FUNC_4(VAR_8 - (unsigned int)VAR_6, VAR_3);
}
