
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct path {TYPE_3__* dentry; TYPE_1__* mnt; } ;
struct TYPE_9__ {int fs; } ;
struct TYPE_8__ {TYPE_2__* d_op; } ;
struct TYPE_7__ {char* (* d_dname ) (TYPE_3__*,char*,int) ;} ;
struct TYPE_6__ {TYPE_3__* mnt_root; } ;


 char* FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_4__* VAR_0 ;
 int FUNC_2 (int ,struct path*) ;
 int FUNC_3 (struct path const*,struct path*,char**,int*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 char* FUNC_6 (TYPE_3__*,char*,int) ;

char *FUNC_7(const struct path *VAR_1, char *VAR_2, int VAR_3)
{
 char *VAR_4 = VAR_2 + VAR_3;
 struct path VAR_5;
 int VAR_6;
 if (VAR_1->dentry->d_op && VAR_1->dentry->d_op->d_dname &&
     (!FUNC_1(VAR_1->dentry) || VAR_1->dentry != VAR_1->mnt->mnt_root))
  return VAR_1->dentry->d_op->d_dname(VAR_1->dentry, VAR_2, VAR_3);

 FUNC_4();
 FUNC_2(VAR_0->fs, &VAR_5);
 VAR_6 = FUNC_3(VAR_1, &VAR_5, &VAR_4, &VAR_3);
 FUNC_5();

 if (VAR_6 < 0)
  VAR_4 = FUNC_0(VAR_6);
 return VAR_4;
}
