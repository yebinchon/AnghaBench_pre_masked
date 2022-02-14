
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int sc_file; } ;
struct nfs4_ol_stateid {TYPE_1__ st_stid; } ;


 int FUNC_0 (int,struct nfs4_ol_stateid*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(u32 VAR_0, struct nfs4_ol_stateid *VAR_1)
{
 int VAR_2;
 bool VAR_3 = 0;

 for (VAR_2 = 1; VAR_2 < 4; VAR_2++) {
  if ((VAR_2 & VAR_0) != VAR_2) {
   VAR_3 = 1;
   FUNC_0(VAR_2, VAR_1);
  }
 }


 if (VAR_3)
  FUNC_1(VAR_1->st_stid.sc_file);
}
