
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct nfs_unlinkdata* name; } ;
struct TYPE_4__ {TYPE_1__ name; } ;
struct nfs_unlinkdata {TYPE_2__ args; int cred; } ;


 int FUNC_0 (struct nfs_unlinkdata*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct nfs_unlinkdata *VAR_0)
{
 FUNC_1(VAR_0->cred);
 FUNC_0(VAR_0->args.name.name);
 FUNC_0(VAR_0);
}
