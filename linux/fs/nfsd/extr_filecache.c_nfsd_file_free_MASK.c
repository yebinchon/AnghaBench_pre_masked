
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_file {int nf_rcu; scalar_t__ nf_file; scalar_t__ nf_mark; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_5 (struct nfsd_file*) ;

__attribute__((used)) static bool
FUNC_6(struct nfsd_file *VAR_1)
{
 bool VAR_2 = 0;

 FUNC_5(VAR_1);
 if (VAR_1->nf_mark)
  FUNC_4(VAR_1->nf_mark);
 if (VAR_1->nf_file) {
  FUNC_3(VAR_1->nf_file);
  FUNC_1(VAR_1->nf_file, ((void*)0));
  FUNC_2(VAR_1->nf_file);
  VAR_2 = 1;
 }
 FUNC_0(&VAR_1->nf_rcu, VAR_0);
 return VAR_2;
}
