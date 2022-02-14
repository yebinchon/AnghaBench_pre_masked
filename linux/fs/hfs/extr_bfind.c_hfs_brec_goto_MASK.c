
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct hfs_find_data {int record; struct hfs_bnode* bnode; int key; scalar_t__ entrylength; scalar_t__ entryoffset; scalar_t__ keylength; scalar_t__ keyoffset; } ;
struct hfs_btree {int dummy; } ;
struct hfs_bnode {int num_recs; int prev; int next; struct hfs_btree* tree; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hfs_bnode*) ;
 int FUNC_1 (struct hfs_bnode*) ;
 struct hfs_bnode* FUNC_2 (struct hfs_btree*,int) ;
 int FUNC_3 (struct hfs_bnode*) ;
 int FUNC_4 (struct hfs_bnode*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (struct hfs_bnode*,int) ;
 scalar_t__ FUNC_6 (struct hfs_bnode*,int,scalar_t__*) ;

int FUNC_7(struct hfs_find_data *VAR_2, int VAR_3)
{
 struct hfs_btree *VAR_4;
 struct hfs_bnode *VAR_5;
 int VAR_6, VAR_7 = 0;
 u16 VAR_8, VAR_9, VAR_10;

 VAR_5 = VAR_2->bnode;
 VAR_4 = VAR_5->tree;

 if (VAR_3 < 0) {
  VAR_3 = -VAR_3;
  while (VAR_3 > VAR_2->record) {
   VAR_3 -= VAR_2->record + 1;
   VAR_2->record = VAR_5->num_recs - 1;
   VAR_6 = VAR_5->prev;
   if (!VAR_6) {
    VAR_7 = -VAR_1;
    goto out;
   }
   FUNC_3(VAR_5);
   VAR_5 = FUNC_2(VAR_4, VAR_6);
   if (FUNC_0(VAR_5)) {
    VAR_7 = FUNC_1(VAR_5);
    VAR_5 = ((void*)0);
    goto out;
   }
  }
  VAR_2->record -= VAR_3;
 } else {
  while (VAR_3 >= VAR_5->num_recs - VAR_2->record) {
   VAR_3 -= VAR_5->num_recs - VAR_2->record;
   VAR_2->record = 0;
   VAR_6 = VAR_5->next;
   if (!VAR_6) {
    VAR_7 = -VAR_1;
    goto out;
   }
   FUNC_3(VAR_5);
   VAR_5 = FUNC_2(VAR_4, VAR_6);
   if (FUNC_0(VAR_5)) {
    VAR_7 = FUNC_1(VAR_5);
    VAR_5 = ((void*)0);
    goto out;
   }
  }
  VAR_2->record += VAR_3;
 }

 VAR_9 = FUNC_6(VAR_5, VAR_2->record, &VAR_8);
 VAR_10 = FUNC_5(VAR_5, VAR_2->record);
 if (VAR_10 == 0) {
  VAR_7 = -VAR_0;
  goto out;
 }
 VAR_2->keyoffset = VAR_8;
 VAR_2->keylength = VAR_10;
 VAR_2->entryoffset = VAR_8 + VAR_10;
 VAR_2->entrylength = VAR_9 - VAR_10;
 FUNC_4(VAR_5, VAR_2->key, VAR_8, VAR_10);
out:
 VAR_2->bnode = VAR_5;
 return VAR_7;
}
