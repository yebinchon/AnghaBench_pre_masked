
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_4__ {scalar_t__ priv; } ;
struct fuse_conn {TYPE_1__ iq; } ;
struct fs_context {struct fuse_conn* s_fs_info; } ;
struct TYPE_5__ {scalar_t__ priv; } ;
struct TYPE_6__ {TYPE_2__ iq; } ;


 TYPE_3__* FUNC_0 (struct super_block*) ;

__attribute__((used)) static int FUNC_1(struct super_block *VAR_0,
    struct fs_context *VAR_1)
{
 struct fuse_conn *VAR_2 = VAR_1->s_fs_info;

 return VAR_2->iq.priv == FUNC_0(VAR_0)->iq.priv;
}
