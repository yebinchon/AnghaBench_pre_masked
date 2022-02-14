
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef unsigned int u16 ;
struct page {int dummy; } ;
struct hfs_btree {int inode; int free_nodes; } ;
struct hfs_bnode {int next; struct page** page; scalar_t__ page_offset; } ;


 int VAR_0 ;
 struct hfs_bnode* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct hfs_bnode*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct hfs_bnode* FUNC_2 (struct hfs_bnode*,int) ;
 int FUNC_3 (struct hfs_btree*,int) ;
 struct hfs_bnode* FUNC_4 (struct hfs_btree*,int) ;
 struct hfs_bnode* FUNC_5 (struct hfs_btree*,int) ;
 int FUNC_6 (struct hfs_bnode*) ;
 unsigned int FUNC_7 (struct hfs_bnode*,int,unsigned int*) ;
 int FUNC_8 (int ,char*) ;
 int* FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct page*) ;

struct hfs_bnode *FUNC_13(struct hfs_btree *VAR_4)
{
 struct hfs_bnode *VAR_5, *VAR_6;
 struct page **VAR_7;
 u32 VAR_8, VAR_9;
 unsigned VAR_10;
 u16 VAR_11;
 u16 VAR_12;
 u8 *VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17;

 VAR_17 = FUNC_3(VAR_4, 1);
 if (VAR_17)
  return FUNC_0(VAR_17);

 VAR_8 = 0;
 VAR_5 = FUNC_5(VAR_4, VAR_8);
 if (FUNC_1(VAR_5))
  return VAR_5;
 VAR_12 = FUNC_7(VAR_5, 2, &VAR_11);
 VAR_10 = VAR_11;

 VAR_10 += VAR_5->page_offset;
 VAR_7 = VAR_5->page + (VAR_10 >> VAR_2);
 VAR_13 = FUNC_9(*VAR_7);
 VAR_10 &= ~VAR_1;
 VAR_9 = 0;

 for (;;) {
  while (VAR_12) {
   VAR_14 = VAR_13[VAR_10];
   if (VAR_14 != 0xff) {
    for (VAR_15 = 0x80, VAR_16 = 0; VAR_16 < 8; VAR_15 >>= 1, VAR_16++) {
     if (!(VAR_14 & VAR_15)) {
      VAR_9 += VAR_16;
      VAR_13[VAR_10] |= VAR_15;
      FUNC_12(*VAR_7);
      FUNC_10(*VAR_7);
      VAR_4->free_nodes--;
      FUNC_11(VAR_4->inode);
      FUNC_6(VAR_5);
      return FUNC_4(VAR_4,
       VAR_9);
     }
    }
   }
   if (++VAR_10 >= VAR_3) {
    FUNC_10(*VAR_7);
    VAR_13 = FUNC_9(*++VAR_7);
    VAR_10 = 0;
   }
   VAR_9 += 8;
   VAR_12--;
  }
  FUNC_10(*VAR_7);
  VAR_8 = VAR_5->next;
  if (!VAR_8) {
   FUNC_8(VAR_0, "create new bmap node\n");
   VAR_6 = FUNC_2(VAR_5, VAR_9);
  } else
   VAR_6 = FUNC_5(VAR_4, VAR_8);
  FUNC_6(VAR_5);
  if (FUNC_1(VAR_6))
   return VAR_6;
  VAR_5 = VAR_6;

  VAR_12 = FUNC_7(VAR_5, 0, &VAR_11);
  VAR_10 = VAR_11;
  VAR_10 += VAR_5->page_offset;
  VAR_7 = VAR_5->page + (VAR_10 >> VAR_2);
  VAR_13 = FUNC_9(*VAR_7);
  VAR_10 &= ~VAR_1;
 }
}
