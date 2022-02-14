
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xfs_attr_leaf_entry_t ;
struct xfs_da_args {int index; TYPE_2__* geo; int trans; } ;
struct xfs_buf {struct xfs_attr_leafblock* b_addr; } ;
struct xfs_attr_leaf_entry {int nameidx; } ;
struct xfs_attr_leafblock {struct xfs_attr_leaf_entry hdr; } ;
struct xfs_attr3_icleaf_hdr {int count; int firstused; int usedbytes; int holes; TYPE_1__* freemap; } ;
struct TYPE_5__ {int blksize; int magicpct; } ;
struct TYPE_4__ {int size; int base; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct xfs_attr_leafblock*,struct xfs_attr_leaf_entry*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct xfs_attr_leaf_entry*,struct xfs_attr_leaf_entry*,int) ;
 int FUNC_4 (struct xfs_attr_leaf_entry*,int ,int) ;
 int FUNC_5 (struct xfs_da_args*) ;
 struct xfs_attr_leaf_entry* FUNC_6 (struct xfs_attr_leafblock*) ;
 int FUNC_7 (TYPE_2__*,struct xfs_attr3_icleaf_hdr*,struct xfs_attr_leafblock*) ;
 int FUNC_8 (struct xfs_attr_leafblock*) ;
 int FUNC_9 (TYPE_2__*,struct xfs_attr_leafblock*,struct xfs_attr3_icleaf_hdr*) ;
 struct xfs_attr_leaf_entry* FUNC_10 (struct xfs_attr_leafblock*,size_t) ;
 int FUNC_11 (struct xfs_attr_leafblock*,size_t) ;
 int FUNC_12 (int ,struct xfs_buf*,int ) ;

int
FUNC_13(
 struct xfs_buf *VAR_1,
 struct xfs_da_args *VAR_2)
{
 struct xfs_attr_leafblock *VAR_3;
 struct xfs_attr3_icleaf_hdr VAR_4;
 struct xfs_attr_leaf_entry *VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 FUNC_5(VAR_2);

 VAR_3 = VAR_1->b_addr;
 FUNC_7(VAR_2->geo, &VAR_4, VAR_3);

 FUNC_0(VAR_4.count > 0 && VAR_4.count < VAR_2->geo->blksize / 8);
 FUNC_0(VAR_2->index >= 0 && VAR_2->index < VAR_4.count);
 FUNC_0(VAR_4.firstused >= VAR_4.count * sizeof(*VAR_5) +
     FUNC_8(VAR_3));

 VAR_5 = &FUNC_6(VAR_3)[VAR_2->index];

 FUNC_0(FUNC_2(VAR_5->nameidx) >= VAR_4.firstused);
 FUNC_0(FUNC_2(VAR_5->nameidx) < VAR_2->geo->blksize);







 VAR_10 = VAR_4.count * sizeof(xfs_attr_leaf_entry_t)
     + FUNC_8(VAR_3);
 VAR_11 = VAR_4.freemap[0].size;
 VAR_6 = VAR_7 = -1;
 VAR_8 = VAR_0 - 1;
 VAR_9 = FUNC_11(VAR_3, VAR_2->index);
 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  FUNC_0(VAR_4.freemap[VAR_12].base < VAR_2->geo->blksize);
  FUNC_0(VAR_4.freemap[VAR_12].size < VAR_2->geo->blksize);
  if (VAR_4.freemap[VAR_12].base == VAR_10) {
   VAR_4.freemap[VAR_12].base -= sizeof(xfs_attr_leaf_entry_t);
   VAR_4.freemap[VAR_12].size += sizeof(xfs_attr_leaf_entry_t);
  }

  if (VAR_4.freemap[VAR_12].base + VAR_4.freemap[VAR_12].size ==
    FUNC_2(VAR_5->nameidx)) {
   VAR_6 = VAR_12;
  } else if (VAR_4.freemap[VAR_12].base ==
    (FUNC_2(VAR_5->nameidx) + VAR_9)) {
   VAR_7 = VAR_12;
  } else if (VAR_4.freemap[VAR_12].size < VAR_11) {
   VAR_11 = VAR_4.freemap[VAR_12].size;
   VAR_8 = VAR_12;
  }
 }





 if ((VAR_6 >= 0) || (VAR_7 >= 0)) {
  if ((VAR_6 >= 0) && (VAR_7 >= 0)) {
   VAR_4.freemap[VAR_6].size += VAR_9;
   VAR_4.freemap[VAR_6].size += VAR_4.freemap[VAR_7].size;
   VAR_4.freemap[VAR_7].base = 0;
   VAR_4.freemap[VAR_7].size = 0;
  } else if (VAR_6 >= 0) {
   VAR_4.freemap[VAR_6].size += VAR_9;
  } else {
   VAR_4.freemap[VAR_7].base = FUNC_2(VAR_5->nameidx);
   VAR_4.freemap[VAR_7].size += VAR_9;
  }
 } else {



  if (VAR_4.freemap[VAR_8].size < VAR_9) {
   VAR_4.freemap[VAR_8].base = FUNC_2(VAR_5->nameidx);
   VAR_4.freemap[VAR_8].size = VAR_9;
  }
 }




 if (FUNC_2(VAR_5->nameidx) == VAR_4.firstused)
  VAR_8 = 1;
 else
  VAR_8 = 0;




 FUNC_4(FUNC_10(VAR_3, VAR_2->index), 0, VAR_9);
 VAR_4.usedbytes -= VAR_9;
 FUNC_12(VAR_2->trans, VAR_1,
      FUNC_1(VAR_3, FUNC_10(VAR_3, VAR_2->index),
       VAR_9));

 VAR_11 = (VAR_4.count - VAR_2->index) * sizeof(xfs_attr_leaf_entry_t);
 FUNC_3(VAR_5, VAR_5 + 1, VAR_11);
 VAR_4.count--;
 FUNC_12(VAR_2->trans, VAR_1,
     FUNC_1(VAR_3, VAR_5, VAR_11 + sizeof(xfs_attr_leaf_entry_t)));

 VAR_5 = &FUNC_6(VAR_3)[VAR_4.count];
 FUNC_4(VAR_5, 0, sizeof(xfs_attr_leaf_entry_t));







 if (VAR_8) {
  VAR_11 = VAR_2->geo->blksize;
  VAR_5 = FUNC_6(VAR_3);
  for (VAR_12 = VAR_4.count - 1; VAR_12 >= 0; VAR_5++, VAR_12--) {
   FUNC_0(FUNC_2(VAR_5->nameidx) >= VAR_4.firstused);
   FUNC_0(FUNC_2(VAR_5->nameidx) < VAR_2->geo->blksize);

   if (FUNC_2(VAR_5->nameidx) < VAR_11)
    VAR_11 = FUNC_2(VAR_5->nameidx);
  }
  VAR_4.firstused = VAR_11;
  FUNC_0(VAR_4.firstused != 0);
 } else {
  VAR_4.holes = 1;
 }
 FUNC_9(VAR_2->geo, VAR_3, &VAR_4);
 FUNC_12(VAR_2->trans, VAR_1,
     FUNC_1(VAR_3, &VAR_3->hdr,
       FUNC_8(VAR_3)));





 VAR_11 = VAR_4.usedbytes + FUNC_8(VAR_3) +
       VAR_4.count * sizeof(xfs_attr_leaf_entry_t);

 return VAR_11 < VAR_2->geo->magicpct;
}
