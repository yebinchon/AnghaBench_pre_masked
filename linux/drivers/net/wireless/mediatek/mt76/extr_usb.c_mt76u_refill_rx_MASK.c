
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int transfer_buffer; int transfer_buffer_length; } ;
struct mt76_queue {int buf_size; int rx_page; } ;
struct TYPE_2__ {scalar_t__ sg_en; } ;
struct mt76_dev {TYPE_1__ usb; struct mt76_queue* q_rx; } ;
typedef int gfp_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct mt76_dev*,struct mt76_queue*,struct urb*,int,int ) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct mt76_dev *VAR_2, struct urb *VAR_3, int VAR_4, gfp_t VAR_5)
{
 struct mt76_queue *VAR_6 = &VAR_2->q_rx[VAR_1];

 if (VAR_2->usb.sg_en)
  return FUNC_0(VAR_2, VAR_6, VAR_3, VAR_4, VAR_5);

 VAR_3->transfer_buffer_length = VAR_6->buf_size;
 VAR_3->transfer_buffer = FUNC_1(&VAR_6->rx_page, VAR_6->buf_size, VAR_5);

 return VAR_3->transfer_buffer ? 0 : -VAR_0;
}
