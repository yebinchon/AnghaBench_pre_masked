
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct nfs4_file* sc_file; } ;
struct nfs4_ol_stateid {TYPE_1__ st_stid; } ;
struct nfs4_file {int fi_lock; } ;


 int FUNC_0 (struct nfs4_file*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct nfs4_ol_stateid*) ;
 scalar_t__ FUNC_3 (int ,struct nfs4_ol_stateid*) ;

__attribute__((used)) static void FUNC_4(struct nfs4_ol_stateid *VAR_0, u32 VAR_1)
{
 struct nfs4_file *VAR_2 = VAR_0->st_stid.sc_file;

 FUNC_1(&VAR_2->fi_lock);

 if (FUNC_3(VAR_1, VAR_0))
  return;
 FUNC_0(VAR_2, VAR_1);
 FUNC_2(VAR_1, VAR_0);
}
