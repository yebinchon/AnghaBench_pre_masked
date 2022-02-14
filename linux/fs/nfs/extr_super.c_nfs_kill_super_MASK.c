
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_dev; } ;
struct nfs_server {int dummy; } ;
typedef int dev_t ;


 struct nfs_server* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct nfs_server*) ;
 int FUNC_4 (struct super_block*) ;

void FUNC_5(struct super_block *VAR_0)
{
 struct nfs_server *VAR_1 = FUNC_0(VAR_0);
 dev_t VAR_2 = VAR_0->s_dev;

 FUNC_2(VAR_0);

 FUNC_4(VAR_0);

 FUNC_3(VAR_1);
 FUNC_1(VAR_2);
}
