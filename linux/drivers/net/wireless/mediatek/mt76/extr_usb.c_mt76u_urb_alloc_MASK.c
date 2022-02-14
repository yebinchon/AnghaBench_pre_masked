
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct urb {int dummy; } ;
struct scatterlist {int dummy; } ;
struct mt76_queue_entry {TYPE_2__* urb; } ;
struct TYPE_4__ {scalar_t__ sg_en; } ;
struct mt76_dev {TYPE_1__ usb; } ;
struct TYPE_5__ {struct scatterlist* sg; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_2(struct mt76_dev *VAR_2, struct mt76_queue_entry *VAR_3,
  int VAR_4)
{
 unsigned int VAR_5 = sizeof(struct urb);

 if (VAR_2->usb.sg_en)
  VAR_5 += VAR_4 * sizeof(struct scatterlist);

 VAR_3->urb = FUNC_0(VAR_5, VAR_1);
 if (!VAR_3->urb)
  return -VAR_0;

 FUNC_1(VAR_3->urb);

 if (VAR_2->usb.sg_en)
  VAR_3->urb->sg = (struct scatterlist *)(VAR_3->urb + 1);

 return 0;
}
