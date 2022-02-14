
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct hfs_find_data {TYPE_6__* search_key; } ;
typedef int rec ;
struct TYPE_10__ {int len; int name; } ;
struct TYPE_11__ {TYPE_3__ CName; int ParID; } ;
struct TYPE_12__ {int type; TYPE_4__ thread; } ;
typedef TYPE_5__ hfs_cat_rec ;
struct TYPE_8__ {int len; int name; } ;
struct TYPE_9__ {TYPE_1__ CName; int ParID; } ;
struct TYPE_13__ {TYPE_2__ cat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hfs_find_data*) ;
 int FUNC_1 (struct hfs_find_data*,TYPE_5__*,int) ;
 int FUNC_2 (struct super_block*,TYPE_6__*,int ,int *) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct super_block *VAR_4, u32 VAR_5,
        struct hfs_find_data *VAR_6)
{
 hfs_cat_rec VAR_7;
 int VAR_8, VAR_9, VAR_10;

 FUNC_2(VAR_4, VAR_6->search_key, VAR_5, ((void*)0));
 VAR_8 = FUNC_1(VAR_6, &VAR_7, sizeof(VAR_7));
 if (VAR_8)
  return VAR_8;

 VAR_10 = VAR_7.type;
 if (VAR_10 != VAR_2 && VAR_10 != VAR_1) {
  FUNC_4("found bad thread record in catalog\n");
  return -VAR_0;
 }

 VAR_6->search_key->cat.ParID = VAR_7.thread.ParID;
 VAR_9 = VAR_6->search_key->cat.CName.len = VAR_7.thread.CName.len;
 if (VAR_9 > VAR_3) {
  FUNC_4("bad catalog namelength\n");
  return -VAR_0;
 }
 FUNC_3(VAR_6->search_key->cat.CName.name, VAR_7.thread.CName.name, VAR_9);
 return FUNC_0(VAR_6);
}
