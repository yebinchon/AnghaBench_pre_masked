
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct nfs_pgio_mirror {int pg_recoalesce; } ;
struct nfs_pageio_descriptor {size_t pg_mirror_idx; scalar_t__ pg_error; struct nfs_pgio_mirror* pg_mirrors; } ;


 int FUNC_0 (struct nfs_pageio_descriptor*) ;
 int FUNC_1 (struct nfs_pageio_descriptor*) ;
 scalar_t__ FUNC_2 (struct nfs_pageio_descriptor*) ;

__attribute__((used)) static void FUNC_3(struct nfs_pageio_descriptor *VAR_0,
           u32 VAR_1)
{
 struct nfs_pgio_mirror *VAR_2 = &VAR_0->pg_mirrors[VAR_1];
 u32 VAR_3 = VAR_0->pg_mirror_idx;

 if (FUNC_2(VAR_0))
  VAR_0->pg_mirror_idx = VAR_1;
 for (;;) {
  FUNC_1(VAR_0);
  if (VAR_0->pg_error < 0 || !VAR_2->pg_recoalesce)
   break;
  if (!FUNC_0(VAR_0))
   break;
 }
 VAR_0->pg_mirror_idx = VAR_3;
}
