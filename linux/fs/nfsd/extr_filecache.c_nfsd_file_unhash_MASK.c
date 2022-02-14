
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_file {int nf_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfsd_file*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static bool
FUNC_2(struct nfsd_file *VAR_1)
{
 if (FUNC_1(VAR_0, &VAR_1->nf_flags)) {
  FUNC_0(VAR_1);
  return 1;
 }
 return 0;
}
