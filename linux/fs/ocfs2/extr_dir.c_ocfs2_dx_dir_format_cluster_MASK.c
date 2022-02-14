
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ocfs2_super {TYPE_2__* sb; int fs_generation; } ;
struct TYPE_5__ {int de_count; } ;
struct ocfs2_dx_leaf {TYPE_1__ dl_list; int dl_blkno; int dl_fs_generation; int dl_signature; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_7__ {scalar_t__ ip_blkno; } ;
struct TYPE_6__ {int s_blocksize; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ocfs2_dx_leaf*,int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_10 (int *,struct buffer_head*) ;
 int FUNC_11 (int ,struct buffer_head*) ;
 struct buffer_head* FUNC_12 (TYPE_2__*,scalar_t__) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (unsigned long long,unsigned long long,int ) ;

__attribute__((used)) static int FUNC_15(struct ocfs2_super *VAR_3,
           handle_t *VAR_4, struct inode *VAR_5,
           struct buffer_head **VAR_6,
           int VAR_7, u64 VAR_8)
{
 int VAR_9, VAR_10;
 struct ocfs2_dx_leaf *VAR_11;
 struct buffer_head *VAR_12;

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  VAR_12 = FUNC_12(VAR_3->sb, VAR_8 + VAR_10);
  if (VAR_12 == ((void*)0)) {
   VAR_9 = -VAR_0;
   goto out;
  }
  VAR_6[VAR_10] = VAR_12;

  FUNC_11(FUNC_0(VAR_5), VAR_12);

  VAR_9 = FUNC_9(VAR_4, FUNC_0(VAR_5), VAR_12,
           VAR_2);
  if (VAR_9 < 0) {
   FUNC_7(VAR_9);
   goto out;
  }

  VAR_11 = (struct ocfs2_dx_leaf *) VAR_12->b_data;

  FUNC_6(VAR_11, 0, VAR_3->sb->s_blocksize);
  FUNC_13(VAR_11->dl_signature, VAR_1);
  VAR_11->dl_fs_generation = FUNC_3(VAR_3->fs_generation);
  VAR_11->dl_blkno = FUNC_4(VAR_12->b_blocknr);
  VAR_11->dl_list.de_count =
   FUNC_2(FUNC_8(VAR_3->sb));

  FUNC_14(
    (unsigned long long)FUNC_1(VAR_5)->ip_blkno,
    (unsigned long long)VAR_12->b_blocknr,
    FUNC_5(VAR_11->dl_list.de_count));

  FUNC_10(VAR_4, VAR_12);
 }

 VAR_9 = 0;
out:
 return VAR_9;
}
