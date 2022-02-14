
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_pgio_mirror {scalar_t__ pg_base; scalar_t__ pg_count; int pg_list; int pg_bytes_written; } ;
struct nfs_pageio_descriptor {int pg_error; TYPE_1__* pg_ops; } ;
struct TYPE_2__ {int (* pg_doio ) (struct nfs_pageio_descriptor*) ;} ;


 scalar_t__ FUNC_0 (int *) ;
 struct nfs_pgio_mirror* FUNC_1 (struct nfs_pageio_descriptor*) ;
 int FUNC_2 (struct nfs_pageio_descriptor*) ;

__attribute__((used)) static void FUNC_3(struct nfs_pageio_descriptor *VAR_0)
{
 struct nfs_pgio_mirror *VAR_1 = FUNC_1(VAR_0);


 if (!FUNC_0(&VAR_1->pg_list)) {
  int VAR_2 = VAR_0->pg_ops->pg_doio(VAR_0);
  if (VAR_2 < 0)
   VAR_0->pg_error = VAR_2;
  else
   VAR_1->pg_bytes_written += VAR_1->pg_count;
 }
 if (FUNC_0(&VAR_1->pg_list)) {
  VAR_1->pg_count = 0;
  VAR_1->pg_base = 0;
 }
}
