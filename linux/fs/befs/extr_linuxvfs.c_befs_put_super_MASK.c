
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int * s_fs_info; } ;
struct TYPE_3__ {int * iocharset; } ;
struct TYPE_4__ {int nls; TYPE_1__ mount_opts; } ;


 TYPE_2__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct super_block *VAR_0)
{
 FUNC_1(FUNC_0(VAR_0)->mount_opts.iocharset);
 FUNC_0(VAR_0)->mount_opts.iocharset = ((void*)0);
 FUNC_2(FUNC_0(VAR_0)->nls);
 FUNC_1(VAR_0->s_fs_info);
 VAR_0->s_fs_info = ((void*)0);
}
