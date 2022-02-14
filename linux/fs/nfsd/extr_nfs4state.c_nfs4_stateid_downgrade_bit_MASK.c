
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int sc_file; } ;
struct nfs4_ol_stateid {TYPE_1__ st_stid; } ;


 int FUNC_0 (int ,struct nfs4_ol_stateid*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct nfs4_ol_stateid*) ;

__attribute__((used)) static inline void FUNC_3(struct nfs4_ol_stateid *VAR_0, u32 VAR_1)
{
 if (!FUNC_2(VAR_1, VAR_0))
  return;
 FUNC_1(VAR_0->st_stid.sc_file, VAR_1);
 FUNC_0(VAR_1, VAR_0);
}
