
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pgio_mirror {int dummy; } ;
struct nfs_pageio_descriptor {struct nfs_pgio_mirror* pg_mirrors_dynamic; int pg_bsize; struct nfs_pgio_mirror* pg_mirrors_static; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfs_pgio_mirror*) ;
 struct nfs_pgio_mirror* FUNC_1 (unsigned int,int,int ) ;
 int FUNC_2 (struct nfs_pgio_mirror*,int ) ;

__attribute__((used)) static struct nfs_pgio_mirror *
FUNC_3(struct nfs_pageio_descriptor *VAR_1,
  unsigned int VAR_2)
{
 struct nfs_pgio_mirror *VAR_3;
 unsigned int VAR_4;

 FUNC_0(VAR_1->pg_mirrors_dynamic);
 VAR_1->pg_mirrors_dynamic = ((void*)0);
 if (VAR_2 == 1)
  return VAR_1->pg_mirrors_static;
 VAR_3 = FUNC_1(VAR_2, sizeof(*VAR_3), VAR_0);
 if (VAR_3 != ((void*)0)) {
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
   FUNC_2(&VAR_3[VAR_4], VAR_1->pg_bsize);
  VAR_1->pg_mirrors_dynamic = VAR_3;
 }
 return VAR_3;
}
