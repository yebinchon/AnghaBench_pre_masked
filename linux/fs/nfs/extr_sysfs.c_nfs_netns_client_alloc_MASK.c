
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kset; } ;
struct nfs_netns_client {TYPE_1__ kobject; struct net* net; } ;
struct net {int dummy; } ;
struct kobject {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *,struct kobject*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 struct nfs_netns_client* FUNC_2 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct nfs_netns_client *FUNC_3(struct kobject *VAR_3,
  struct net *VAR_4)
{
 struct nfs_netns_client *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_0);
 if (VAR_5) {
  VAR_5->net = VAR_4;
  VAR_5->kobject.kset = VAR_1;
  if (FUNC_0(&VAR_5->kobject, &VAR_2,
     VAR_3, "nfs_client") == 0)
   return VAR_5;
  FUNC_1(&VAR_5->kobject);
 }
 return ((void*)0);
}
