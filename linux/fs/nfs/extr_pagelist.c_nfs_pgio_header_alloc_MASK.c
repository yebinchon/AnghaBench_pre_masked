
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_rw_ops {struct nfs_pgio_header* (* rw_alloc_header ) () ;} ;
struct nfs_pgio_header {struct nfs_rw_ops const* rw_ops; int pages; } ;


 int FUNC_0 (int *) ;
 struct nfs_pgio_header* FUNC_1 () ;

struct nfs_pgio_header *FUNC_2(const struct nfs_rw_ops *VAR_0)
{
 struct nfs_pgio_header *VAR_1 = VAR_0->rw_alloc_header();

 if (VAR_1) {
  FUNC_0(&VAR_1->pages);
  VAR_1->rw_ops = VAR_0;
 }
 return VAR_1;
}
