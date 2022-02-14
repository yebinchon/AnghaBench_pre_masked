
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vchiq_state {TYPE_1__* remote; } ;
struct vchiq_header {int msgid; } ;
struct TYPE_2__ {int sync_release; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct vchiq_state *VAR_1, struct vchiq_header *VAR_2)
{
 VAR_2->msgid = VAR_0;
 FUNC_0(&VAR_1->remote->sync_release);
}
