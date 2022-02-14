
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct saa7164_dev {int lock; TYPE_1__* cmds; } ;
struct TYPE_2__ {int inuse; size_t seqno; scalar_t__ timeout; scalar_t__ signalled; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct saa7164_dev *VAR_0, u8 VAR_1)
{
 FUNC_0(&VAR_0->lock);
 if ((VAR_0->cmds[VAR_1].inuse == 1) &&
  (VAR_0->cmds[VAR_1].seqno == VAR_1)) {
  VAR_0->cmds[VAR_1].inuse = 0;
  VAR_0->cmds[VAR_1].signalled = 0;
  VAR_0->cmds[VAR_1].timeout = 0;
 }
 FUNC_1(&VAR_0->lock);
}
