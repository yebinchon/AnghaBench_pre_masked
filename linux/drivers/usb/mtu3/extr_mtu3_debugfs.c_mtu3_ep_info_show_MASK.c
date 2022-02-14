
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct mtu3_ep* private; } ;
struct mtu3_ep {int flags; int slot; int maxp; int type; struct mtu3* mtu; } ;
struct mtu3 {int lock; } ;


 int FUNC_0 (struct seq_file*,char*,int ,int ,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct mtu3_ep *VAR_2 = VAR_0->private;
 struct mtu3 *VAR_3 = VAR_2->mtu;
 unsigned long VAR_4;

 FUNC_1(&VAR_3->lock, VAR_4);
 FUNC_0(VAR_0, "ep - type:%d, maxp:%d, slot:%d, flags:%x\n",
     VAR_2->type, VAR_2->maxp, VAR_2->slot, VAR_2->flags);
 FUNC_2(&VAR_3->lock, VAR_4);

 return 0;
}
