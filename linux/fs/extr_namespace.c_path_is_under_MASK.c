
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dentry; int mnt; } ;


 int FUNC_0 (int ,int ,struct path const*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

bool FUNC_4(const struct path *VAR_1, const struct path *VAR_2)
{
 bool VAR_3;
 FUNC_1(&VAR_0);
 VAR_3 = FUNC_0(FUNC_3(VAR_1->mnt), VAR_1->dentry, VAR_2);
 FUNC_2(&VAR_0);
 return VAR_3;
}
