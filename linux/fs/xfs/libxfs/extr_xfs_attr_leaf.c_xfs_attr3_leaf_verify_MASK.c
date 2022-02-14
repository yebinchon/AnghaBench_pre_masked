
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int * xfs_failaddr_t ;
typedef int uint32_t ;
struct xfs_mount {TYPE_2__* m_attr_geo; } ;
struct xfs_buf {struct xfs_attr_leafblock* b_addr; struct xfs_mount* b_mount; } ;
struct xfs_attr_leafblock {int dummy; } ;
struct xfs_attr_leaf_entry {int dummy; } ;
struct xfs_attr3_icleaf_hdr {size_t count; scalar_t__ firstused; TYPE_1__* freemap; } ;
struct TYPE_4__ {scalar_t__ blksize; } ;
struct TYPE_3__ {int base; int size; } ;


 int VAR_0 ;
 int * VAR_1 ;
 struct xfs_attr_leaf_entry* FUNC_0 (struct xfs_attr_leafblock*) ;
 int FUNC_1 (TYPE_2__*,struct xfs_attr3_icleaf_hdr*,struct xfs_attr_leafblock*) ;
 scalar_t__ FUNC_2 (struct xfs_attr_leafblock*) ;
 int * FUNC_3 (struct xfs_buf*,struct xfs_attr_leafblock*) ;
 int FUNC_4 (struct xfs_mount*) ;

__attribute__((used)) static xfs_failaddr_t
FUNC_5(
 struct xfs_buf *VAR_2)
{
 struct xfs_attr3_icleaf_hdr VAR_3;
 struct xfs_mount *VAR_4 = VAR_2->b_mount;
 struct xfs_attr_leafblock *VAR_5 = VAR_2->b_addr;
 struct xfs_attr_leaf_entry *VAR_6;
 uint32_t VAR_7;
 int VAR_8;
 xfs_failaddr_t VAR_9;

 FUNC_1(VAR_4->m_attr_geo, &VAR_3, VAR_5);

 VAR_9 = FUNC_3(VAR_2, VAR_2->b_addr);
 if (VAR_9)
  return VAR_9;






 if (!FUNC_4(VAR_4) && VAR_3.count == 0)
  return VAR_1;





 if (VAR_3.firstused > VAR_4->m_attr_geo->blksize)
  return VAR_1;
 if (VAR_3.firstused < FUNC_2(VAR_5))
  return VAR_1;


 VAR_6 = FUNC_0(VAR_2->b_addr);
 if ((char *)&VAR_6[VAR_3.count] >
     (char *)VAR_2->b_addr + VAR_3.firstused)
  return VAR_1;
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  if (VAR_3.freemap[VAR_8].base > VAR_4->m_attr_geo->blksize)
   return VAR_1;
  if (VAR_3.freemap[VAR_8].base & 0x3)
   return VAR_1;
  if (VAR_3.freemap[VAR_8].size > VAR_4->m_attr_geo->blksize)
   return VAR_1;
  if (VAR_3.freemap[VAR_8].size & 0x3)
   return VAR_1;


  VAR_7 = (uint32_t)VAR_3.freemap[VAR_8].base + VAR_3.freemap[VAR_8].size;
  if (VAR_7 < VAR_3.freemap[VAR_8].base)
   return VAR_1;
  if (VAR_7 > VAR_4->m_attr_geo->blksize)
   return VAR_1;
 }

 return ((void*)0);
}
