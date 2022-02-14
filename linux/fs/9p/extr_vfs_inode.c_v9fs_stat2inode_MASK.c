
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int umode_t ;
struct v9fs_session_info {int dfltgid; int dfltuid; } ;
struct v9fs_inode {int cache_validity; } ;
struct super_block {struct v9fs_session_info* s_fs_info; } ;
struct p9_wstat {char* extension; int length; int n_gid; int n_uid; int mtime; int atime; } ;
struct TYPE_6__ {int tv_sec; } ;
struct TYPE_5__ {int tv_sec; } ;
struct TYPE_4__ {int tv_sec; } ;
struct inode {int i_mode; int i_blocks; int i_gid; int i_uid; TYPE_3__ i_ctime; TYPE_2__ i_mtime; TYPE_1__ i_atime; } ;
typedef int ext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 struct v9fs_inode* FUNC_2 (struct inode*) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_3 (struct v9fs_session_info*,struct p9_wstat*) ;
 int FUNC_4 (struct inode*,unsigned int) ;
 int FUNC_5 (char*,char*,char*,unsigned int*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (struct inode*,int) ;
 scalar_t__ FUNC_9 (struct v9fs_session_info*) ;

void
FUNC_10(struct p9_wstat *VAR_3, struct inode *VAR_4,
   struct super_block *VAR_5, unsigned int VAR_6)
{
 umode_t VAR_7;
 char VAR_8[32];
 char VAR_9[14];
 unsigned int VAR_10;
 struct v9fs_session_info *VAR_11 = VAR_5->s_fs_info;
 struct v9fs_inode *VAR_12 = FUNC_2(VAR_4);

 FUNC_4(VAR_4, 1);

 VAR_4->i_atime.tv_sec = VAR_3->atime;
 VAR_4->i_mtime.tv_sec = VAR_3->mtime;
 VAR_4->i_ctime.tv_sec = VAR_3->mtime;

 VAR_4->i_uid = VAR_11->dfltuid;
 VAR_4->i_gid = VAR_11->dfltgid;

 if (FUNC_9(VAR_11)) {
  VAR_4->i_uid = VAR_3->n_uid;
  VAR_4->i_gid = VAR_3->n_gid;
 }
 if ((FUNC_1(VAR_4->i_mode)) || (FUNC_0(VAR_4->i_mode))) {
  if (FUNC_9(VAR_11) && (VAR_3->extension[0] != '\0')) {







   FUNC_6(VAR_8, VAR_3->extension, sizeof(VAR_8));

   FUNC_5(VAR_8, "%13s %u", VAR_9, &VAR_10);
   if (!FUNC_7(VAR_9, "HARDLINKCOUNT", 13))
    FUNC_4(VAR_4, VAR_10);
  }
 }
 VAR_7 = FUNC_3(VAR_11, VAR_3);
 VAR_7 |= VAR_4->i_mode & ~VAR_0;
 VAR_4->i_mode = VAR_7;

 if (!(VAR_6 & VAR_2))
  FUNC_8(VAR_4, VAR_3->length);

 VAR_4->i_blocks = (VAR_3->length + 512 - 1) >> 9;
 VAR_12->cache_validity &= ~VAR_1;
}
