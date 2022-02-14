
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fs_context {int sb_flags; TYPE_1__* root; } ;
struct TYPE_2__ {int d_sb; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct fs_context *VAR_1)
{
 FUNC_0(VAR_1->root->d_sb);
 VAR_1->sb_flags |= VAR_0;
 return 0;
}
