
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fs_context {TYPE_1__* fs_type; TYPE_2__* log; } ;
struct TYPE_4__ {int owner; int usage; } ;
struct TYPE_3__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(struct fs_context *VAR_2)
{
 VAR_2->log = FUNC_0(sizeof(*VAR_2->log), VAR_1);
 if (!VAR_2->log)
  return -VAR_0;
 FUNC_1(&VAR_2->log->usage, 1);
 VAR_2->log->owner = VAR_2->fs_type->owner;
 return 0;
}
