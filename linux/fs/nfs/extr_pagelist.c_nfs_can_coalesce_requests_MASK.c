
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nfs_pageio_descriptor {TYPE_1__* pg_ops; } ;
struct nfs_page {scalar_t__ wb_bytes; scalar_t__ wb_page; scalar_t__ wb_pgbase; int wb_lock_context; } ;
struct file_lock_context {int flc_flock; int flc_posix; } ;
struct TYPE_8__ {struct file_lock_context* i_flctx; } ;
struct TYPE_7__ {int dentry; } ;
struct TYPE_6__ {size_t (* pg_test ) (struct nfs_pageio_descriptor*,struct nfs_page*,struct nfs_page*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_5__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_5 (struct nfs_page*) ;
 scalar_t__ FUNC_6 (struct nfs_page*) ;
 size_t FUNC_7 (struct nfs_pageio_descriptor*,struct nfs_page*,struct nfs_page*) ;

__attribute__((used)) static bool FUNC_8(struct nfs_page *VAR_1,
          struct nfs_page *VAR_2,
          struct nfs_pageio_descriptor *VAR_3)
{
 size_t VAR_4;
 struct file_lock_context *VAR_5;

 if (VAR_1) {
  if (!FUNC_4(FUNC_5(VAR_2), FUNC_5(VAR_1)))
   return 0;
  VAR_5 = FUNC_1(FUNC_5(VAR_2)->dentry)->i_flctx;
  if (VAR_5 != ((void*)0) &&
      !(FUNC_2(&VAR_5->flc_posix) &&
        FUNC_2(&VAR_5->flc_flock)) &&
      !FUNC_3(VAR_2->wb_lock_context,
         VAR_1->wb_lock_context))
   return 0;
  if (FUNC_6(VAR_2) != FUNC_6(VAR_1) + VAR_1->wb_bytes)
   return 0;
  if (VAR_2->wb_page == VAR_1->wb_page) {
   if (VAR_2->wb_pgbase != VAR_1->wb_pgbase + VAR_1->wb_bytes)
    return 0;
  } else {
   if (VAR_2->wb_pgbase != 0 ||
       VAR_1->wb_pgbase + VAR_1->wb_bytes != VAR_0)
    return 0;
  }
 }
 VAR_4 = VAR_3->pg_ops->pg_test(VAR_3, VAR_1, VAR_2);
 FUNC_0(VAR_4 > VAR_2->wb_bytes);
 if (VAR_4 && VAR_4 < VAR_2->wb_bytes)
  VAR_2->wb_bytes = VAR_4;
 return VAR_4 > 0;
}
