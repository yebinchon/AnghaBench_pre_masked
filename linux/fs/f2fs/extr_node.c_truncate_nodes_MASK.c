
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {int * nid; } ;
struct f2fs_node {TYPE_1__ in; } ;
struct dnode_of_data {scalar_t__ nid; int node_changed; int inode; struct page* node_page; int data_blkaddr; } ;
typedef scalar_t__ nid_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct f2fs_node* FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int VAR_1 ;
 int FUNC_3 (struct page*) ;
 struct page* FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct page*,int) ;
 int FUNC_6 (struct page*,int,int) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct page*,int,int ,int) ;
 int FUNC_9 (int ,scalar_t__,int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (struct dnode_of_data*) ;
 int FUNC_12 (struct dnode_of_data*) ;

__attribute__((used)) static int FUNC_13(struct dnode_of_data *VAR_2, unsigned int VAR_3,
      int VAR_4, int VAR_5)
{
 struct dnode_of_data VAR_6 = *VAR_2;
 struct page *VAR_7;
 struct f2fs_node *VAR_8;
 nid_t VAR_9;
 unsigned int VAR_10;
 int VAR_11 = 0;
 int VAR_12, VAR_13;

 if (VAR_2->nid == 0)
  return VAR_1 + 1;

 FUNC_9(VAR_2->inode, VAR_2->nid, VAR_2->data_blkaddr);

 VAR_7 = FUNC_4(FUNC_0(VAR_2->inode), VAR_2->nid);
 if (FUNC_2(VAR_7)) {
  FUNC_10(VAR_2->inode, FUNC_3(VAR_7));
  return FUNC_3(VAR_7);
 }

 FUNC_6(VAR_7, VAR_4, VAR_1);

 VAR_8 = FUNC_1(VAR_7);
 if (VAR_5 < 3) {
  for (VAR_12 = VAR_4; VAR_12 < VAR_1; VAR_12++, VAR_11++) {
   VAR_9 = FUNC_7(VAR_8->in.nid[VAR_12]);
   if (VAR_9 == 0)
    continue;
   VAR_6.nid = VAR_9;
   VAR_13 = FUNC_11(&VAR_6);
   if (VAR_13 < 0)
    goto out_err;
   if (FUNC_8(VAR_7, VAR_12, 0, 0))
    VAR_2->node_changed = 1;
  }
 } else {
  VAR_10 = VAR_3 + VAR_4 * (VAR_1 + 1) + 1;
  for (VAR_12 = VAR_4; VAR_12 < VAR_1; VAR_12++) {
   VAR_9 = FUNC_7(VAR_8->in.nid[VAR_12]);
   if (VAR_9 == 0) {
    VAR_10 += VAR_1 + 1;
    continue;
   }
   VAR_6.nid = VAR_9;
   VAR_13 = FUNC_13(&VAR_6, VAR_10, 0, VAR_5 - 1);
   if (VAR_13 == (VAR_1 + 1)) {
    if (FUNC_8(VAR_7, VAR_12, 0, 0))
     VAR_2->node_changed = 1;
    VAR_10 += VAR_13;
   } else if (VAR_13 < 0 && VAR_13 != -VAR_0) {
    goto out_err;
   }
  }
  VAR_11 = VAR_10;
 }

 if (!VAR_4) {

  VAR_2->node_page = VAR_7;
  VAR_13 = FUNC_12(VAR_2);
  if (VAR_13)
   goto out_err;
  VAR_11++;
 } else {
  FUNC_5(VAR_7, 1);
 }
 FUNC_10(VAR_2->inode, VAR_11);
 return VAR_11;

out_err:
 FUNC_5(VAR_7, 1);
 FUNC_10(VAR_2->inode, VAR_13);
 return VAR_13;
}
