
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfs_btree {int attributes; scalar_t__ cnid; int max_key_len; } ;
struct hfs_bnode {scalar_t__ type; struct hfs_btree* tree; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hfs_bnode*,void*,int,int) ;
 int FUNC_1 (struct hfs_bnode*,int) ;

void FUNC_2(struct hfs_bnode *VAR_3, void *VAR_4, int VAR_5)
{
 struct hfs_btree *VAR_6;
 int VAR_7;

 VAR_6 = VAR_3->tree;
 if (VAR_3->type == VAR_1 ||
     VAR_6->attributes & VAR_2 ||
     VAR_3->tree->cnid == VAR_0)
  VAR_7 = FUNC_1(VAR_3, VAR_5) + 2;
 else
  VAR_7 = VAR_6->max_key_len + 2;

 FUNC_0(VAR_3, VAR_4, VAR_5, VAR_7);
}
