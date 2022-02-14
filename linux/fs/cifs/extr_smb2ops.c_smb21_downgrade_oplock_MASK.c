
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cifsInodeInfo {int dummy; } ;
struct TCP_Server_Info {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_oplock_level ) (struct cifsInodeInfo*,int ,int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct cifsInodeInfo*,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_1(struct TCP_Server_Info *VAR_1,
         struct cifsInodeInfo *VAR_2, bool VAR_3)
{
 VAR_1->ops->set_oplock_level(VAR_2,
          VAR_3 ? VAR_0 :
          0, 0, ((void*)0));
}
