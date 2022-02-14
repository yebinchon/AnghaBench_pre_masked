
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_copy {int cp_cb; int cp_clp; int fh; int nfserr; int cp_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfsd4_copy*) ;
 struct nfsd4_copy* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int VAR_2 ;
 int FUNC_3 (struct nfsd4_copy*,int ) ;
 int FUNC_4 (int *,int ,int *,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(void *VAR_3)
{
 struct nfsd4_copy *VAR_4 = (struct nfsd4_copy *)VAR_3;
 struct nfsd4_copy *VAR_5;

 VAR_4->nfserr = FUNC_3(VAR_4, 0);
 VAR_5 = FUNC_1(sizeof(struct nfsd4_copy), VAR_0);
 if (!VAR_5)
  goto out;
 FUNC_2(&VAR_5->cp_res, &VAR_4->cp_res, sizeof(VAR_4->cp_res));
 VAR_5->cp_clp = VAR_4->cp_clp;
 VAR_5->nfserr = VAR_4->nfserr;
 FUNC_2(&VAR_5->fh, &VAR_4->fh, sizeof(VAR_4->fh));
 FUNC_4(&VAR_5->cp_cb, VAR_5->cp_clp,
   &VAR_2, VAR_1);
 FUNC_5(&VAR_5->cp_cb);
out:
 FUNC_0(VAR_4);
 return 0;
}
