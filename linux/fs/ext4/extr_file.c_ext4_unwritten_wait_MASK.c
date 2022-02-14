
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wait_queue_head_t ;
struct inode {int dummy; } ;
struct TYPE_2__ {int i_unwritten; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (struct inode*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct inode *VAR_0)
{
 wait_queue_head_t *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(*VAR_1, (FUNC_1(&FUNC_0(VAR_0)->i_unwritten) == 0));
}
