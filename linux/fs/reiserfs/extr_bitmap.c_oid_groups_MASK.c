
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned long search_start; TYPE_5__* inode; } ;
typedef TYPE_1__ reiserfs_blocknr_hint_t ;
typedef int __u32 ;
struct TYPE_9__ {TYPE_3__* i_sb; } ;
struct TYPE_8__ {int k_objectid; int k_dir_id; } ;
struct TYPE_7__ {int s_blocksize; } ;


 TYPE_4__* FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(reiserfs_blocknr_hint_t * VAR_0)
{
 if (VAR_0->inode) {
  unsigned long VAR_1;
  __u32 VAR_2;
  __u32 VAR_3;
  int VAR_4;

  VAR_3 = FUNC_2(FUNC_0(VAR_0->inode)->k_dir_id);





  if (VAR_3 <= 2)
   VAR_1 = (VAR_0->inode->i_sb->s_blocksize << 3);
  else {
   VAR_2 = FUNC_2(FUNC_0(VAR_0->inode)->k_objectid);
   VAR_4 = FUNC_1(VAR_0->inode->i_sb, VAR_2);
   VAR_1 = VAR_4 * (VAR_0->inode->i_sb->s_blocksize << 3);
  }
  VAR_0->search_start = VAR_1;
 }
}
