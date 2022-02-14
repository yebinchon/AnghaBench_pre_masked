
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nfs_page {unsigned int wb_offset; unsigned int wb_pgbase; unsigned int wb_bytes; scalar_t__ wb_nio; int wb_kref; int wb_index; struct page* wb_page; struct nfs_lock_context* wb_lock_context; } ;
struct nfs_open_context {int flags; } ;
struct nfs_lock_context {int io_count; int count; struct nfs_open_context* open_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfs_page* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int *) ;
 struct nfs_page* FUNC_4 () ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static struct nfs_page *
FUNC_8(struct nfs_lock_context *VAR_3, struct page *VAR_4,
     unsigned int VAR_5, unsigned int VAR_6,
     unsigned int VAR_7)
{
 struct nfs_page *VAR_8;
 struct nfs_open_context *VAR_9 = VAR_3->open_context;

 if (FUNC_7(VAR_2, &VAR_9->flags))
  return FUNC_0(-VAR_0);

 VAR_8 = FUNC_4();
 if (VAR_8 == ((void*)0))
  return FUNC_0(-VAR_1);

 VAR_8->wb_lock_context = VAR_3;
 FUNC_6(&VAR_3->count);
 FUNC_1(&VAR_3->io_count);




 VAR_8->wb_page = VAR_4;
 if (VAR_4) {
  VAR_8->wb_index = FUNC_5(VAR_4);
  FUNC_2(VAR_4);
 }
 VAR_8->wb_offset = VAR_6;
 VAR_8->wb_pgbase = VAR_5;
 VAR_8->wb_bytes = VAR_7;
 FUNC_3(&VAR_8->wb_kref);
 VAR_8->wb_nio = 0;
 return VAR_8;
}
