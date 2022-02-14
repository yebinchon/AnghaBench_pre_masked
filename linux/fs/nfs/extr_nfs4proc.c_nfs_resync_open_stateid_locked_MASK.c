
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_state {int flags; scalar_t__ n_rdwr; scalar_t__ n_rdonly; scalar_t__ n_wronly; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct nfs4_state *VAR_4)
{
 if (!(VAR_4->n_wronly || VAR_4->n_rdonly || VAR_4->n_rdwr))
  return;
 if (VAR_4->n_wronly)
  FUNC_0(VAR_3, &VAR_4->flags);
 if (VAR_4->n_rdonly)
  FUNC_0(VAR_1, &VAR_4->flags);
 if (VAR_4->n_rdwr)
  FUNC_0(VAR_2, &VAR_4->flags);
 FUNC_0(VAR_0, &VAR_4->flags);
}
