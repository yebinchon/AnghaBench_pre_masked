
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct ext4_map_blocks {int m_len; int m_flags; int m_pblk; int m_lblk; } ;
struct buffer_head {int b_data; } ;
typedef int handle_t ;
typedef int ext4_lblk_t ;
struct TYPE_2__ {int s_blocksize; } ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct buffer_head* FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (int *,struct inode*,struct buffer_head*) ;
 int FUNC_6 (int *,struct buffer_head*) ;
 int FUNC_7 (int *,struct inode*,struct ext4_map_blocks*,int) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (int ,int ,int ) ;
 struct buffer_head* FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (struct buffer_head*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (struct buffer_head*) ;

struct buffer_head *FUNC_14(handle_t *VAR_4, struct inode *VAR_5,
    ext4_lblk_t VAR_6, int VAR_7)
{
 struct ext4_map_blocks VAR_8;
 struct buffer_head *VAR_9;
 int VAR_10 = VAR_7 & VAR_2;
 int VAR_11;

 FUNC_2(VAR_4 != ((void*)0) || VAR_10 == 0);

 VAR_8.m_lblk = VAR_6;
 VAR_8.m_len = 1;
 VAR_11 = FUNC_7(VAR_4, VAR_5, &VAR_8, VAR_7);

 if (VAR_11 == 0)
  return VAR_10 ? FUNC_1(-VAR_1) : ((void*)0);
 if (VAR_11 < 0)
  return FUNC_1(VAR_11);

 VAR_9 = FUNC_10(VAR_5->i_sb, VAR_8.m_pblk);
 if (FUNC_12(!VAR_9))
  return FUNC_1(-VAR_0);
 if (VAR_8.m_flags & VAR_3) {
  FUNC_2(VAR_10 != 0);
  FUNC_2(VAR_4 != ((void*)0));
  FUNC_8(VAR_9);
  FUNC_0(VAR_9, "call get_create_access");
  VAR_11 = FUNC_6(VAR_4, VAR_9);
  if (FUNC_12(VAR_11)) {
   FUNC_13(VAR_9);
   goto errout;
  }
  if (!FUNC_4(VAR_9)) {
   FUNC_9(VAR_9->b_data, 0, VAR_5->i_sb->s_blocksize);
   FUNC_11(VAR_9);
  }
  FUNC_13(VAR_9);
  FUNC_0(VAR_9, "call ext4_handle_dirty_metadata");
  VAR_11 = FUNC_5(VAR_4, VAR_5, VAR_9);
  if (FUNC_12(VAR_11))
   goto errout;
 } else
  FUNC_0(VAR_9, "not a new buffer");
 return VAR_9;
errout:
 FUNC_3(VAR_9);
 return FUNC_1(VAR_11);
}
