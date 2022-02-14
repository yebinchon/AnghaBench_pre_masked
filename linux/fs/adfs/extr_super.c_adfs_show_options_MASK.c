
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct dentry {int d_sb; } ;
struct adfs_sb_info {scalar_t__ s_owner_mask; scalar_t__ s_other_mask; scalar_t__ s_ftsuffix; int s_gid; int s_uid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct adfs_sb_info* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (struct seq_file*,char*,scalar_t__) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_5, struct dentry *VAR_6)
{
 struct adfs_sb_info *VAR_7 = FUNC_0(VAR_6->d_sb);

 if (!FUNC_5(VAR_7->s_uid, VAR_3))
  FUNC_4(VAR_5, ",uid=%u", FUNC_2(&VAR_4, VAR_7->s_uid));
 if (!FUNC_3(VAR_7->s_gid, VAR_2))
  FUNC_4(VAR_5, ",gid=%u", FUNC_1(&VAR_4, VAR_7->s_gid));
 if (VAR_7->s_owner_mask != VAR_1)
  FUNC_4(VAR_5, ",ownmask=%o", VAR_7->s_owner_mask);
 if (VAR_7->s_other_mask != VAR_0)
  FUNC_4(VAR_5, ",othmask=%o", VAR_7->s_other_mask);
 if (VAR_7->s_ftsuffix != 0)
  FUNC_4(VAR_5, ",ftsuffix=%u", VAR_7->s_ftsuffix);

 return 0;
}
