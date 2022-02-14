
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v9fs_session_info {int dummy; } ;
struct TYPE_3__ {scalar_t__ type; scalar_t__ path; int version; } ;
struct v9fs_inode {TYPE_1__ qid; } ;
struct TYPE_4__ {scalar_t__ type; scalar_t__ path; int version; } ;
struct p9_wstat {TYPE_2__ qid; } ;
struct inode {int i_mode; } ;
typedef int dev_t ;


 int VAR_0 ;
 struct v9fs_inode* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct v9fs_session_info*,struct p9_wstat*,int *) ;
 struct v9fs_session_info* FUNC_3 (struct inode*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, void *VAR_2)
{
 int VAR_3;
 dev_t VAR_4;
 struct v9fs_inode *VAR_5 = FUNC_0(VAR_1);
 struct p9_wstat *VAR_6 = (struct p9_wstat *)VAR_2;
 struct v9fs_session_info *VAR_7 = FUNC_3(VAR_1);

 VAR_3 = FUNC_2(VAR_7, VAR_6, &VAR_4);

 if ((VAR_1->i_mode & VAR_0) != (VAR_3 & VAR_0))
  return 0;


 if (FUNC_1(&VAR_5->qid.version,
     &VAR_6->qid.version, sizeof(VAR_5->qid.version)))
  return 0;

 if (VAR_5->qid.type != VAR_6->qid.type)
  return 0;

 if (VAR_5->qid.path != VAR_6->qid.path)
  return 0;
 return 1;
}
