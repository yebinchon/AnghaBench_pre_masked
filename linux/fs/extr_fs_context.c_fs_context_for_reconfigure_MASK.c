
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fs_context {int dummy; } ;
struct dentry {TYPE_1__* d_sb; } ;
struct TYPE_2__ {int s_type; } ;


 int VAR_0 ;
 struct fs_context* FUNC_0 (int ,struct dentry*,unsigned int,unsigned int,int ) ;

struct fs_context *FUNC_1(struct dentry *VAR_1,
     unsigned int VAR_2,
     unsigned int VAR_3)
{
 return FUNC_0(VAR_1->d_sb->s_type, VAR_1, VAR_2,
    VAR_3, VAR_0);
}
