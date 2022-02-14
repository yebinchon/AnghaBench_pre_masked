
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; scalar_t__ path; int version; } ;
struct v9fs_inode {TYPE_1__ qid; } ;
struct TYPE_4__ {scalar_t__ type; scalar_t__ path; int version; } ;
struct p9_stat_dotl {int st_mode; scalar_t__ st_gen; TYPE_2__ qid; } ;
struct inode {int i_mode; scalar_t__ i_generation; } ;


 int VAR_0 ;
 struct v9fs_inode* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, void *VAR_2)
{
 struct v9fs_inode *VAR_3 = FUNC_0(VAR_1);
 struct p9_stat_dotl *VAR_4 = (struct p9_stat_dotl *)VAR_2;


 if ((VAR_1->i_mode & VAR_0) != (VAR_4->st_mode & VAR_0))
  return 0;

 if (VAR_1->i_generation != VAR_4->st_gen)
  return 0;


 if (FUNC_1(&VAR_3->qid.version,
     &VAR_4->qid.version, sizeof(VAR_3->qid.version)))
  return 0;

 if (VAR_3->qid.type != VAR_4->qid.type)
  return 0;

 if (VAR_3->qid.path != VAR_4->qid.path)
  return 0;
 return 1;
}
