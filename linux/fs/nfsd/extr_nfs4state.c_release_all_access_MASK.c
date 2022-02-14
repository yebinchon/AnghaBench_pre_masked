
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nfs4_file* sc_file; } ;
struct nfs4_ol_stateid {scalar_t__ st_deny_bmap; TYPE_1__ st_stid; } ;
struct nfs4_file {int dummy; } ;


 int FUNC_0 (int,struct nfs4_ol_stateid*) ;
 int FUNC_1 (struct nfs4_file*,int) ;
 int FUNC_2 (struct nfs4_file*) ;
 scalar_t__ FUNC_3 (int,struct nfs4_ol_stateid*) ;

__attribute__((used)) static void
FUNC_4(struct nfs4_ol_stateid *VAR_0)
{
 int VAR_1;
 struct nfs4_file *VAR_2 = VAR_0->st_stid.sc_file;

 if (VAR_2 && VAR_0->st_deny_bmap != 0)
  FUNC_2(VAR_2);

 for (VAR_1 = 1; VAR_1 < 4; VAR_1++) {
  if (FUNC_3(VAR_1, VAR_0))
   FUNC_1(VAR_0->st_stid.sc_file, VAR_1);
  FUNC_0(VAR_1, VAR_0);
 }
}
