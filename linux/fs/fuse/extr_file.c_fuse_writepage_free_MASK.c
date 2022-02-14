
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fuse_args_pages {int num_pages; struct fuse_writepage_args* pages; } ;
struct TYPE_2__ {scalar_t__ ff; struct fuse_args_pages ap; } ;
struct fuse_writepage_args {TYPE_1__ ia; } ;


 int FUNC_0 (struct fuse_writepage_args) ;
 int FUNC_1 (scalar_t__,int,int) ;
 int FUNC_2 (struct fuse_writepage_args*) ;

__attribute__((used)) static void FUNC_3(struct fuse_writepage_args *VAR_0)
{
 struct fuse_args_pages *VAR_1 = &VAR_0->ia.ap;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_pages; VAR_2++)
  FUNC_0(VAR_1->pages[VAR_2]);

 if (VAR_0->ia.ff)
  FUNC_1(VAR_0->ia.ff, 0, 0);

 FUNC_2(VAR_1->pages);
 FUNC_2(VAR_0);
}
