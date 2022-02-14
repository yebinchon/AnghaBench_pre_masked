
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_lockowner {int lo_owner; } ;
typedef scalar_t__ fl_owner_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(fl_owner_t VAR_0)
{
 struct nfs4_lockowner *VAR_1 = (struct nfs4_lockowner *)VAR_0;

 if (VAR_1)
  FUNC_0(&VAR_1->lo_owner);
}
