
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* dentry; int * mnt; } ;
struct nameidata {int flags; TYPE_2__ path; int m_seq; } ;
struct dentry {int d_seq; int d_lockref; } ;
struct TYPE_3__ {int d_lockref; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct nameidata*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct nameidata*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,unsigned int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct nameidata *VAR_2, struct dentry *VAR_3, unsigned VAR_4)
{
 FUNC_0(!(VAR_2->flags & VAR_1));

 VAR_2->flags &= ~VAR_1;
 if (FUNC_8(!FUNC_2(VAR_2)))
  goto out2;
 if (FUNC_8(!FUNC_3(VAR_2->path.mnt, VAR_2->m_seq)))
  goto out2;
 if (FUNC_8(!FUNC_5(&VAR_2->path.dentry->d_lockref)))
  goto out1;
 if (FUNC_8(!FUNC_5(&VAR_3->d_lockref)))
  goto out;
 if (FUNC_8(FUNC_7(&VAR_3->d_seq, VAR_4)))
  goto out_dput;




 if (FUNC_8(!FUNC_4(VAR_2)))
  goto out_dput;
 FUNC_6();
 return 0;

out2:
 VAR_2->path.mnt = ((void*)0);
out1:
 VAR_2->path.dentry = ((void*)0);
out:
 FUNC_6();
 return -VAR_0;
out_dput:
 FUNC_6();
 FUNC_1(VAR_3);
 return -VAR_0;
}
