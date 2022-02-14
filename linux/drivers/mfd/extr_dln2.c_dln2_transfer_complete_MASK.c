
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct urb {int dummy; } ;
struct dln2_rx_context {int done; struct urb* urb; scalar_t__ in_use; } ;
struct dln2_mod_rx_slots {int lock; struct dln2_rx_context* slots; } ;
struct dln2_dev {struct dln2_mod_rx_slots* mod_rx_slots; TYPE_1__* interface; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*,size_t,size_t) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_4(struct dln2_dev *VAR_1, struct urb *VAR_2,
       u16 VAR_3, u16 VAR_4)
{
 struct device *VAR_5 = &VAR_1->interface->dev;
 struct dln2_mod_rx_slots *VAR_6 = &VAR_1->mod_rx_slots[VAR_3];
 struct dln2_rx_context *VAR_7;
 unsigned long VAR_8;
 bool VAR_9 = 0;

 if (VAR_4 >= VAR_0)
  goto out;

 VAR_7 = &VAR_6->slots[VAR_4];

 FUNC_2(&VAR_6->lock, VAR_8);
 if (VAR_7->in_use && !VAR_7->urb) {
  VAR_7->urb = VAR_2;
  FUNC_0(&VAR_7->done);
  VAR_9 = 1;
 }
 FUNC_3(&VAR_6->lock, VAR_8);

out:
 if (!VAR_9)
  FUNC_1(VAR_5, "bad/late response %d/%d\n", VAR_3, VAR_4);

 return VAR_9;
}
