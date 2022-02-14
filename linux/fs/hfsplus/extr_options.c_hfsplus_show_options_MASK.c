
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct hfsplus_sb_info {scalar_t__ creator; scalar_t__ type; scalar_t__ part; scalar_t__ session; int flags; TYPE_1__* nls; int gid; int uid; int umask; } ;
struct dentry {int d_sb; } ;
struct TYPE_2__ {scalar_t__ charset; } ;


 scalar_t__ VAR_0 ;
 struct hfsplus_sb_info* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct seq_file*,char*,scalar_t__,...) ;
 int FUNC_4 (struct seq_file*,char*) ;
 int FUNC_5 (struct seq_file*,char*,char*,int) ;
 scalar_t__ FUNC_6 (int ,int *) ;

int FUNC_7(struct seq_file *VAR_4, struct dentry *VAR_5)
{
 struct hfsplus_sb_info *VAR_6 = FUNC_0(VAR_5->d_sb);

 if (VAR_6->creator != VAR_0)
  FUNC_5(VAR_4, "creator", (char *)&VAR_6->creator, 4);
 if (VAR_6->type != VAR_0)
  FUNC_5(VAR_4, "type", (char *)&VAR_6->type, 4);
 FUNC_3(VAR_4, ",umask=%o,uid=%u,gid=%u", VAR_6->umask,
   FUNC_2(&VAR_3, VAR_6->uid),
   FUNC_1(&VAR_3, VAR_6->gid));
 if (VAR_6->part >= 0)
  FUNC_3(VAR_4, ",part=%u", VAR_6->part);
 if (VAR_6->session >= 0)
  FUNC_3(VAR_4, ",session=%u", VAR_6->session);
 if (VAR_6->nls)
  FUNC_3(VAR_4, ",nls=%s", VAR_6->nls->charset);
 if (FUNC_6(VAR_2, &VAR_6->flags))
  FUNC_4(VAR_4, ",nodecompose");
 if (FUNC_6(VAR_1, &VAR_6->flags))
  FUNC_4(VAR_4, ",nobarrier");
 return 0;
}
