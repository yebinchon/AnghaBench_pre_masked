
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_file_mark {int nfm_mark; int nfm_ref; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct nfsd_file_mark *VAR_1)
{
 if (FUNC_0(&VAR_1->nfm_ref)) {

  FUNC_1(&VAR_1->nfm_mark, VAR_0);
  FUNC_2(&VAR_1->nfm_mark);
 }
}
