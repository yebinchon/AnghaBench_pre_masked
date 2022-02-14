
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_flags; } ;
struct cifs_sb_info {unsigned int mnt_cifs_flags; scalar_t__ wsize; scalar_t__ rsize; scalar_t__ mnt_file_mode; scalar_t__ mnt_dir_mode; scalar_t__ actimeo; TYPE_1__* local_nls; int mnt_gid; int mnt_uid; scalar_t__ mnt_cifs_serverino_autodisabled; } ;
struct cifs_mnt_data {int flags; struct cifs_sb_info* cifs_sb; } ;
struct TYPE_2__ {int charset; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 struct cifs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct super_block *VAR_3, struct cifs_mnt_data *VAR_4)
{
 struct cifs_sb_info *VAR_5 = FUNC_0(VAR_3);
 struct cifs_sb_info *VAR_6 = VAR_4->cifs_sb;
 unsigned int VAR_7 = VAR_5->mnt_cifs_flags & VAR_0;
 unsigned int VAR_8 = VAR_6->mnt_cifs_flags & VAR_0;

 if ((VAR_3->s_flags & VAR_2) != (VAR_4->flags & VAR_2))
  return 0;

 if (VAR_5->mnt_cifs_serverino_autodisabled)
  VAR_8 &= ~VAR_1;

 if (VAR_7 != VAR_8)
  return 0;





 if (VAR_6->wsize && VAR_6->wsize < VAR_5->wsize)
  return 0;

 if (VAR_6->rsize && VAR_6->rsize < VAR_5->rsize)
  return 0;

 if (!FUNC_3(VAR_5->mnt_uid, VAR_6->mnt_uid) || !FUNC_1(VAR_5->mnt_gid, VAR_6->mnt_gid))
  return 0;

 if (VAR_5->mnt_file_mode != VAR_6->mnt_file_mode ||
     VAR_5->mnt_dir_mode != VAR_6->mnt_dir_mode)
  return 0;

 if (FUNC_2(VAR_5->local_nls->charset, VAR_6->local_nls->charset))
  return 0;

 if (VAR_5->actimeo != VAR_6->actimeo)
  return 0;

 return 1;
}
