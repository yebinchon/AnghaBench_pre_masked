
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct physdev_unmap_pirq {scalar_t__ domid; int pirq; } ;
struct TYPE_3__ {int flags; scalar_t__ domid; int pirq; } ;
struct TYPE_4__ {TYPE_1__ pirq; } ;
struct irq_info {TYPE_2__ u; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct physdev_unmap_pirq*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct irq_info* FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,scalar_t__,int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 () ;

int FUNC_8(int VAR_6)
{
 struct physdev_unmap_pirq VAR_7;
 struct irq_info *VAR_8 = FUNC_1(VAR_6);
 int VAR_9 = -VAR_1;

 FUNC_2(&VAR_5);






 if (FUNC_7() && !(VAR_8->u.pirq.flags & VAR_4)) {
  VAR_7.pirq = VAR_8->u.pirq.pirq;
  VAR_7.domid = VAR_8->u.pirq.domid;
  VAR_9 = FUNC_0(VAR_3, &VAR_7);




  if ((VAR_9 == -VAR_2 && VAR_8->u.pirq.domid != VAR_0))
   FUNC_4("domain %d does not have %d anymore\n",
    VAR_8->u.pirq.domid, VAR_8->u.pirq.pirq);
  else if (VAR_9) {
   FUNC_5("unmap irq failed %d\n", VAR_9);
   goto out;
  }
 }

 FUNC_6(VAR_6);

out:
 FUNC_3(&VAR_5);
 return VAR_9;
}
