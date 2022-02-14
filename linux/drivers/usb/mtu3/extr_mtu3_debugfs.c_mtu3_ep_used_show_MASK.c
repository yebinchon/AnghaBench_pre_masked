
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct mtu3* private; } ;
struct mtu3_ep {int flags; int type; int name; } ;
struct mtu3 {int num_eps; int lock; struct mtu3_ep* out_eps; struct mtu3_ep* in_eps; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int,...) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 struct mtu3 *VAR_3 = VAR_1->private;
 struct mtu3_ep *VAR_4;
 unsigned long VAR_5;
 int VAR_6 = 0;
 int VAR_7;

 FUNC_1(&VAR_3->lock, VAR_5);

 for (VAR_7 = 0; VAR_7 < VAR_3->num_eps; VAR_7++) {
  VAR_4 = VAR_3->in_eps + VAR_7;
  if (VAR_4->flags & VAR_0) {
   FUNC_0(VAR_1, "%s - type: %d\n", VAR_4->name, VAR_4->type);
   VAR_6++;
  }

  VAR_4 = VAR_3->out_eps + VAR_7;
  if (VAR_4->flags & VAR_0) {
   FUNC_0(VAR_1, "%s - type: %d\n", VAR_4->name, VAR_4->type);
   VAR_6++;
  }
 }
 FUNC_0(VAR_1, "total used: %d eps\n", VAR_6);

 FUNC_2(&VAR_3->lock, VAR_5);

 return 0;
}
