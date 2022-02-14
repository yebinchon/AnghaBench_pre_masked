
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_ff_layout_mirror {int mirrors; int ref; int lock; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 struct nfs4_ff_layout_mirror* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct nfs4_ff_layout_mirror *FUNC_4(gfp_t VAR_0)
{
 struct nfs4_ff_layout_mirror *VAR_1;

 VAR_1 = FUNC_1(sizeof(*VAR_1), VAR_0);
 if (VAR_1 != ((void*)0)) {
  FUNC_3(&VAR_1->lock);
  FUNC_2(&VAR_1->ref, 1);
  FUNC_0(&VAR_1->mirrors);
 }
 return VAR_1;
}
