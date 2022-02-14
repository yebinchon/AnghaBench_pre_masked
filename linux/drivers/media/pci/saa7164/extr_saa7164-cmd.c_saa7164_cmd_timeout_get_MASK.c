
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct saa7164_dev {int lock; TYPE_1__* cmds; } ;
struct TYPE_2__ {int inuse; size_t seqno; int timeout; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static u32 FUNC_2(struct saa7164_dev *VAR_0, u8 VAR_1)
{
 int VAR_2 = 0;

 FUNC_0(&VAR_0->lock);
 if ((VAR_0->cmds[VAR_1].inuse == 1) &&
  (VAR_0->cmds[VAR_1].seqno == VAR_1)) {
  VAR_2 = VAR_0->cmds[VAR_1].timeout;
 }
 FUNC_1(&VAR_0->lock);

 return VAR_2;
}
