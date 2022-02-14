
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct hfsplus_extent {int dummy; } ;
struct hfs_find_data {int entrylength; int entryoffset; int bnode; TYPE_4__* search_key; TYPE_2__* key; } ;
typedef int hfsplus_extent_rec ;
struct TYPE_7__ {scalar_t__ cnid; scalar_t__ fork_type; } ;
struct TYPE_8__ {TYPE_3__ ext; } ;
struct TYPE_5__ {scalar_t__ cnid; scalar_t__ fork_type; } ;
struct TYPE_6__ {TYPE_1__ ext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct hfsplus_extent*,int ,int) ;
 int FUNC_1 (struct hfs_find_data*,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_4__*,int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_3(struct hfs_find_data *VAR_3,
         struct hfsplus_extent *VAR_4,
         u32 VAR_5, u32 VAR_6, u8 VAR_7)
{
 int VAR_8;

 FUNC_2(VAR_3->search_key, VAR_5, VAR_6, VAR_7);
 VAR_3->key->ext.cnid = 0;
 VAR_8 = FUNC_1(VAR_3, VAR_2);
 if (VAR_8 && VAR_8 != -VAR_1)
  return VAR_8;
 if (VAR_3->key->ext.cnid != VAR_3->search_key->ext.cnid ||
     VAR_3->key->ext.fork_type != VAR_3->search_key->ext.fork_type)
  return -VAR_1;
 if (VAR_3->entrylength != sizeof(hfsplus_extent_rec))
  return -VAR_0;
 FUNC_0(VAR_3->bnode, VAR_4, VAR_3->entryoffset,
  sizeof(hfsplus_extent_rec));
 return 0;
}
