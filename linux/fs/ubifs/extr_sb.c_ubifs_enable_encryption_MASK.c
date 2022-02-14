
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_sb_node {int flags; } ;
struct ubifs_info {int encrypted; int fmt_version; scalar_t__ ro_media; scalar_t__ ro_mount; struct ubifs_sb_node* sup_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ubifs_info*,char*) ;
 int FUNC_3 (struct ubifs_info*,struct ubifs_sb_node*) ;

int FUNC_4(struct ubifs_info *VAR_5)
{
 int VAR_6;
 struct ubifs_sb_node *VAR_7 = VAR_5->sup_node;

 if (!FUNC_0(VAR_0))
  return -VAR_2;

 if (VAR_5->encrypted)
  return 0;

 if (VAR_5->ro_mount || VAR_5->ro_media)
  return -VAR_3;

 if (VAR_5->fmt_version < 5) {
  FUNC_2(VAR_5, "on-flash format version 5 is needed for encryption");
  return -VAR_1;
 }

 VAR_7->flags |= FUNC_1(VAR_4);

 VAR_6 = FUNC_3(VAR_5, VAR_7);
 if (!VAR_6)
  VAR_5->encrypted = 1;

 return VAR_6;
}
