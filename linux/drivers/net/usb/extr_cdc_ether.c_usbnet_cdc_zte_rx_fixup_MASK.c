
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbnet {TYPE_1__* net; } ;
struct sk_buff {scalar_t__ len; int* data; } ;
struct TYPE_4__ {int h_dest; } ;
struct TYPE_3__ {int dev_addr; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct usbnet *VAR_1, struct sk_buff *VAR_2)
{
 if (VAR_2->len < VAR_0 || !(VAR_2->data[0] & 0x02))
  return 1;

 FUNC_2(VAR_2);
 FUNC_1(FUNC_0(VAR_2)->h_dest, VAR_1->net->dev_addr);

 return 1;
}
