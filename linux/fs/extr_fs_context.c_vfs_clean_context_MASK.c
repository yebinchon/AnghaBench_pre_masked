
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fs_context {int need_free; int phase; int purpose; int * source; int security; scalar_t__ sb_flags; int * s_fs_info; int * fs_private; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* free ) (struct fs_context*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fs_context*) ;

void FUNC_3(struct fs_context *VAR_2)
{
 if (VAR_2->need_free && VAR_2->ops && VAR_2->ops->free)
  VAR_2->ops->free(VAR_2);
 VAR_2->need_free = 0;
 VAR_2->fs_private = ((void*)0);
 VAR_2->s_fs_info = ((void*)0);
 VAR_2->sb_flags = 0;
 FUNC_1(&VAR_2->security);
 FUNC_0(VAR_2->source);
 VAR_2->source = ((void*)0);

 VAR_2->purpose = VAR_1;
 VAR_2->phase = VAR_0;
}
