
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {scalar_t__ dentry; TYPE_1__* mnt; } ;
struct mount {int dummy; } ;
struct TYPE_2__ {scalar_t__ mnt_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mount*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mount*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 struct mount* FUNC_6 (struct mount*,struct mount*) ;
 struct mount* FUNC_7 (TYPE_1__*) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct path *VAR_3, int VAR_4)
{
 struct mount *VAR_5;
 struct mount *VAR_6 = FUNC_7(VAR_3->mnt);
 int VAR_7 = VAR_4 & VAR_1;
 int VAR_8;
 int VAR_9 = 0;

 if (VAR_3->dentry != VAR_3->mnt->mnt_root)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_4);
 if (!VAR_8)
  return -VAR_0;

 FUNC_4();
 if (VAR_8 == VAR_2) {
  VAR_9 = FUNC_2(VAR_6, VAR_7);
  if (VAR_9)
   goto out_unlock;
 }

 FUNC_3();
 for (VAR_5 = VAR_6; VAR_5; VAR_5 = (VAR_7 ? FUNC_6(VAR_5, VAR_6) : ((void*)0)))
  FUNC_0(VAR_5, VAR_8);
 FUNC_8();

 out_unlock:
 FUNC_5();
 return VAR_9;
}
