
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct super_block {int dummy; } ;
struct hfs_find_data {int search_key; } ;
struct TYPE_7__ {int length; } ;
struct TYPE_5__ {TYPE_3__ nodeName; int parentID; } ;
struct TYPE_6__ {TYPE_1__ thread; int type; } ;
typedef TYPE_2__ hfsplus_cat_entry ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hfs_find_data*,int ) ;
 int FUNC_3 (struct hfs_find_data*,TYPE_2__*,int) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,TYPE_3__*) ;
 int FUNC_5 (struct super_block*,int ,int ) ;
 int FUNC_6 (char*) ;

int FUNC_7(struct super_block *VAR_4, u32 VAR_5,
       struct hfs_find_data *VAR_6)
{
 hfsplus_cat_entry VAR_7;
 int VAR_8;
 u16 VAR_9;

 FUNC_5(VAR_4, VAR_6->search_key, VAR_5);
 VAR_8 = FUNC_3(VAR_6, &VAR_7, sizeof(hfsplus_cat_entry));
 if (VAR_8)
  return VAR_8;

 VAR_9 = FUNC_0(VAR_7.type);
 if (VAR_9 != VAR_2 && VAR_9 != VAR_1) {
  FUNC_6("found bad thread record in catalog\n");
  return -VAR_0;
 }

 if (FUNC_0(VAR_7.thread.nodeName.length) > 255) {
  FUNC_6("catalog name length corrupted\n");
  return -VAR_0;
 }

 FUNC_4(VAR_6->search_key,
  FUNC_1(VAR_7.thread.parentID),
  &VAR_7.thread.nodeName);
 return FUNC_2(VAR_6, VAR_3);
}
