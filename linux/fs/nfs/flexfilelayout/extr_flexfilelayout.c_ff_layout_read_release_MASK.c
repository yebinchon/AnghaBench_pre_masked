
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pgio_header {int flags; int lseg; int task; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct nfs_pgio_header*) ;
 int FUNC_1 (struct nfs_pgio_header*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct nfs_pgio_header*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_2)
{
 struct nfs_pgio_header *VAR_3 = VAR_2;

 FUNC_0(&VAR_3->task, VAR_3);
 if (FUNC_5(VAR_1, &VAR_3->flags)) {
  FUNC_2(VAR_3->lseg);
  FUNC_4(VAR_3);
 } else if (FUNC_5(VAR_0, &VAR_3->flags))
  FUNC_1(VAR_3);
 FUNC_3(VAR_2);
}
