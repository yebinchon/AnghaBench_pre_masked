
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fs_context {int user_ns; TYPE_1__* fs_type; } ;
struct TYPE_2__ {int fs_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

bool FUNC_2(struct fs_context *VAR_2)
{
 if (!(VAR_2->fs_type->fs_flags & VAR_1))
  return FUNC_0(VAR_0);
 else
  return FUNC_1(VAR_2->user_ns, VAR_0);
}
