
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parallel_io {struct nfs_pgio_header* data; } ;
struct nfs_pgio_header {int lseg; int pnfs_error; } ;
struct bio {scalar_t__ bi_status; struct parallel_io* bi_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct nfs_pgio_header*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct parallel_io*) ;

__attribute__((used)) static void FUNC_4(struct bio *VAR_1)
{
 struct parallel_io *VAR_2 = VAR_1->bi_private;

 if (VAR_1->bi_status) {
  struct nfs_pgio_header *VAR_3 = VAR_2->data;

  if (!VAR_3->pnfs_error)
   VAR_3->pnfs_error = -VAR_0;
  FUNC_2(VAR_3->lseg);
  FUNC_1(VAR_3, 0);
 }

 FUNC_0(VAR_1);
 FUNC_3(VAR_2);
}
