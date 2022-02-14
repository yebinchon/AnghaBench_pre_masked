
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_file {int nf_flags; int nf_ref; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nfsd_file*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct nfsd_file*) ;

__attribute__((used)) static int
FUNC_5(struct nfsd_file *VAR_1)
{
 int VAR_2;
 FUNC_4(VAR_1);

 VAR_2 = FUNC_1(&VAR_1->nf_ref);
 if (!VAR_2) {
  FUNC_0(FUNC_3(VAR_0, &VAR_1->nf_flags));
  FUNC_2(VAR_1);
 }
 return VAR_2;
}
