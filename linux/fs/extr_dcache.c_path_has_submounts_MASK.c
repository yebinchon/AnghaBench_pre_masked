
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dentry; int mnt; } ;
struct check_mount {int mounted; int mnt; } ;


 int FUNC_0 (int ,struct check_mount*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(const struct path *VAR_2)
{
 struct check_mount VAR_3 = { .mnt = VAR_2->mnt, .mounted = 0 };

 FUNC_1(&VAR_0);
 FUNC_0(VAR_2->dentry, &VAR_3, VAR_1);
 FUNC_2(&VAR_0);

 return VAR_3.mounted;
}
