
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_server {int dummy; } ;
struct TYPE_2__ {int type; } ;
struct nfs_delegation {TYPE_1__ stateid; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfs_server*,struct nfs_delegation*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct nfs_server *VAR_2,
  struct nfs_delegation *VAR_3)
{
 FUNC_1(VAR_1, &VAR_3->flags);
 VAR_3->stateid.type = VAR_0;
 FUNC_0(VAR_2, VAR_3);
}
