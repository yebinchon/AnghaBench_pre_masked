
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ umode_t ;
struct seq_file {int dummy; } ;
struct omfs_sb_info {scalar_t__ s_dmask; scalar_t__ s_fmask; int s_gid; int s_uid; } ;
struct dentry {int d_sb; } ;


 struct omfs_sb_info* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_0 ;
 int FUNC_7 (struct seq_file*,char*,scalar_t__) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct seq_file *VAR_1, struct dentry *VAR_2)
{
 struct omfs_sb_info *VAR_3 = FUNC_0(VAR_2->d_sb);
 umode_t VAR_4 = FUNC_3();

 if (!FUNC_8(VAR_3->s_uid, FUNC_2()))
  FUNC_7(VAR_1, ",uid=%u",
      FUNC_5(&VAR_0, VAR_3->s_uid));
 if (!FUNC_6(VAR_3->s_gid, FUNC_1()))
  FUNC_7(VAR_1, ",gid=%u",
      FUNC_4(&VAR_0, VAR_3->s_gid));

 if (VAR_3->s_dmask == VAR_3->s_fmask) {
  if (VAR_3->s_fmask != VAR_4)
   FUNC_7(VAR_1, ",umask=%o", VAR_3->s_fmask);
 } else {
  if (VAR_3->s_dmask != VAR_4)
   FUNC_7(VAR_1, ",dmask=%o", VAR_3->s_dmask);
  if (VAR_3->s_fmask != VAR_4)
   FUNC_7(VAR_1, ",fmask=%o", VAR_3->s_fmask);
 }

 return 0;
}
