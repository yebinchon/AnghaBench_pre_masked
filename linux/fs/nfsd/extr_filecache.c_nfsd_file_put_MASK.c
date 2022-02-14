
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_file {int nf_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfsd_file*) ;
 int FUNC_1 (struct nfsd_file*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

void
FUNC_5(struct nfsd_file *VAR_3)
{
 bool VAR_4 = FUNC_4(VAR_0, &VAR_3->nf_flags) != 0;
 bool VAR_5 = !FUNC_0(VAR_3);

 FUNC_3(VAR_2, &VAR_3->nf_flags);
 if (FUNC_1(VAR_3) == 1 && VAR_4 && VAR_5)
  FUNC_2(VAR_1);
}
