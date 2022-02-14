
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v9fs_session_info {int cache; int flags; int clnt; int uid; scalar_t__ cachetag; scalar_t__ nodev; scalar_t__ aname; scalar_t__ uname; scalar_t__ afid; int dfltgid; int dfltuid; scalar_t__ debug; } ;
struct seq_file {int dummy; } ;
struct dentry {TYPE_1__* d_sb; } ;
struct TYPE_2__ {struct v9fs_session_info* s_fs_info; } ;


 size_t VAR_0 ;


 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_7 ;
 int FUNC_3 (struct seq_file*,int ) ;
 int FUNC_4 (struct seq_file*,char*,scalar_t__) ;
 int FUNC_5 (struct seq_file*,char*) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__* VAR_8 ;

int FUNC_8(struct seq_file *VAR_9, struct dentry *VAR_10)
{
 struct v9fs_session_info *VAR_11 = VAR_10->d_sb->s_fs_info;

 if (VAR_11->debug)
  FUNC_4(VAR_9, ",debug=%x", VAR_11->debug);
 if (!FUNC_7(VAR_11->dfltuid, VAR_4))
  FUNC_4(VAR_9, ",dfltuid=%u",
      FUNC_1(&VAR_7, VAR_11->dfltuid));
 if (!FUNC_2(VAR_11->dfltgid, VAR_3))
  FUNC_4(VAR_9, ",dfltgid=%u",
      FUNC_0(&VAR_7, VAR_11->dfltgid));
 if (VAR_11->afid != ~0)
  FUNC_4(VAR_9, ",afid=%u", VAR_11->afid);
 if (FUNC_6(VAR_11->uname, VAR_5) != 0)
  FUNC_4(VAR_9, ",uname=%s", VAR_11->uname);
 if (FUNC_6(VAR_11->aname, VAR_2) != 0)
  FUNC_4(VAR_9, ",aname=%s", VAR_11->aname);
 if (VAR_11->nodev)
  FUNC_5(VAR_9, ",nodevmap");
 if (VAR_11->cache)
  FUNC_4(VAR_9, ",%s", VAR_8[VAR_11->cache]);





 switch (VAR_11->flags & VAR_1) {
 case 128:
  FUNC_5(VAR_9, ",access=user");
  break;
 case 131:
  FUNC_5(VAR_9, ",access=any");
  break;
 case 130:
  FUNC_5(VAR_9, ",access=client");
  break;
 case 129:
  FUNC_4(VAR_9, ",access=%u",
      FUNC_1(&VAR_7, VAR_11->uid));
  break;
 }

 if (VAR_11->flags & VAR_6)
  FUNC_5(VAR_9, ",posixacl");

 return FUNC_3(VAR_9, VAR_11->clnt);
}
