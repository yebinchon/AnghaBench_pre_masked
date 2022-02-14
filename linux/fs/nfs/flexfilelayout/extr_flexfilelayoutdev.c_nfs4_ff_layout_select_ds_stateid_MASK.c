
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_ff_layout_mirror {int stateid; } ;
typedef int nfs4_stateid ;


 int FUNC_0 (struct nfs4_ff_layout_mirror const*) ;
 int FUNC_1 (int *,int *) ;

void
FUNC_2(const struct nfs4_ff_layout_mirror *VAR_0,
  nfs4_stateid *VAR_1)
{
 if (FUNC_0(VAR_0) == 4)
  FUNC_1(VAR_1, &VAR_0->stateid);
}
