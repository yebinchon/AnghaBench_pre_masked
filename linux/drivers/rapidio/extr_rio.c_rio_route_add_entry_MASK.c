
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct rio_switch_ops {int (* add_entry ) (int ,int ,int ,int ,int ,int ) ;int owner; } ;
struct rio_dev {int hopcount; int destid; TYPE_2__* net; TYPE_1__* rswitch; } ;
struct TYPE_4__ {int hport; } ;
struct TYPE_3__ {int lock; struct rio_switch_ops* ops; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;

int FUNC_8(struct rio_dev *VAR_1,
   u16 VAR_2, u16 VAR_3, u8 VAR_4, int VAR_5)
{
 int VAR_6 = -VAR_0;
 struct rio_switch_ops *VAR_7 = VAR_1->rswitch->ops;

 if (VAR_5) {
  VAR_6 = FUNC_1(VAR_1->net->hport, VAR_1->destid,
         VAR_1->hopcount, 1000);
  if (VAR_6)
   return VAR_6;
 }

 FUNC_4(&VAR_1->rswitch->lock);

 if (!VAR_7 || !VAR_7->add_entry) {
  VAR_6 = FUNC_2(VAR_1->net->hport, VAR_1->destid,
          VAR_1->hopcount, VAR_2,
          VAR_3, VAR_4);
 } else if (FUNC_7(VAR_7->owner)) {
  VAR_6 = VAR_7->add_entry(VAR_1->net->hport, VAR_1->destid,
        VAR_1->hopcount, VAR_2, VAR_3,
        VAR_4);
  FUNC_0(VAR_7->owner);
 }

 FUNC_5(&VAR_1->rswitch->lock);

 if (VAR_5)
  FUNC_3(VAR_1->net->hport, VAR_1->destid,
      VAR_1->hopcount);

 return VAR_6;
}
