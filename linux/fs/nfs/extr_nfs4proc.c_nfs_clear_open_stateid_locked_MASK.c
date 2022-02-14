
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_state {int inode; int open_stateid; int stateid; int flags; } ;
typedef int nfs4_stateid ;
typedef int fmode_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (struct nfs4_state*) ;
 int FUNC_5 (struct nfs4_state*) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_8(struct nfs4_state *VAR_5,
  nfs4_stateid *VAR_6, fmode_t VAR_7)
{
 FUNC_0(VAR_3, &VAR_5->flags);
 switch (VAR_7 & (129|128)) {
 case 128:
  FUNC_0(VAR_2, &VAR_5->flags);
  break;
 case 129:
  FUNC_0(VAR_4, &VAR_5->flags);
  break;
 case 0:
  FUNC_0(VAR_2, &VAR_5->flags);
  FUNC_0(VAR_4, &VAR_5->flags);
  FUNC_0(VAR_1, &VAR_5->flags);
 }
 if (VAR_6 == ((void*)0))
  return;

 if (FUNC_3(VAR_6, &VAR_5->open_stateid) &&
     !FUNC_2(VAR_6, &VAR_5->open_stateid)) {
  FUNC_4(VAR_5);
  goto out;
 }
 if (FUNC_6(VAR_0, &VAR_5->flags) == 0)
  FUNC_1(&VAR_5->stateid, VAR_6);
 FUNC_1(&VAR_5->open_stateid, VAR_6);
 FUNC_7(VAR_5->inode, VAR_6, 0);
out:
 FUNC_5(VAR_5);
}
