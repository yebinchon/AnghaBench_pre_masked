
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int num_sgs; int sg; int transfer_buffer; int transfer_buffer_length; } ;
struct sk_buff {int len; int data; } ;
struct TYPE_2__ {int sg_en; } ;
struct mt76_dev {TYPE_1__ usb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct mt76_dev *VAR_2, struct sk_buff *VAR_3,
         struct urb *VAR_4)
{
 VAR_4->transfer_buffer_length = VAR_3->len;

 if (!VAR_2->usb.sg_en) {
  VAR_4->transfer_buffer = VAR_3->data;
  return 0;
 }

 FUNC_0(VAR_4->sg, VAR_1);
 VAR_4->num_sgs = FUNC_1(VAR_3, VAR_4->sg, 0, VAR_3->len);
 if (!VAR_4->num_sgs)
  return -VAR_0;

 return VAR_4->num_sgs;
}
