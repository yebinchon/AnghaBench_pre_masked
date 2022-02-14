
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct path {int dentry; } ;
struct net {TYPE_1__* proc_net; } ;
struct kstat {int nlink; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int nlink; } ;


 struct inode* FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct kstat*) ;
 struct net* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct net*) ;

__attribute__((used)) static int FUNC_4(const struct path *VAR_0, struct kstat *VAR_1,
     u32 VAR_2, unsigned int VAR_3)
{
 struct inode *VAR_4 = FUNC_0(VAR_0->dentry);
 struct net *VAR_5;

 VAR_5 = FUNC_2(VAR_4);

 FUNC_1(VAR_4, VAR_1);

 if (VAR_5 != ((void*)0)) {
  VAR_1->nlink = VAR_5->proc_net->nlink;
  FUNC_3(VAR_5);
 }

 return 0;
}
