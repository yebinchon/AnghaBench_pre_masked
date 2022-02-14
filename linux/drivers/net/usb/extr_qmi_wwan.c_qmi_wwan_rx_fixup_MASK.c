
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbnet {TYPE_1__* net; int data; } ;
struct sk_buff {scalar_t__ len; int* data; void* protocol; TYPE_1__* dev; } ;
struct qmi_wwan_state {int flags; } ;
typedef void* __be16 ;
struct TYPE_4__ {int h_dest; int h_source; void* h_proto; } ;
struct TYPE_3__ {scalar_t__ hard_header_len; int dev_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct usbnet*,struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct usbnet *VAR_6, struct sk_buff *VAR_7)
{
 struct qmi_wwan_state *VAR_8 = (void *)&VAR_6->data;
 bool VAR_9 = VAR_8->flags & VAR_5;
 __be16 VAR_10;


 if (VAR_7->len < VAR_6->net->hard_header_len)
  return 0;

 if (VAR_8->flags & VAR_4)
  return FUNC_5(VAR_6, VAR_7);

 switch (VAR_7->data[0] & 0xf0) {
 case 0x40:
  VAR_10 = FUNC_2(VAR_2);
  break;
 case 0x60:
  VAR_10 = FUNC_2(VAR_3);
  break;
 case 0x00:
  if (VAR_9)
   return 0;
  if (FUNC_3(VAR_7->data))
   return 1;

  FUNC_8(VAR_7);
  goto fix_dest;
 default:
  if (VAR_9)
   return 0;

  return 1;
 }
 if (VAR_9) {
  FUNC_8(VAR_7);
  VAR_7->dev = VAR_6->net;
  VAR_7->protocol = VAR_10;
  return 1;
 }

 if (FUNC_6(VAR_7) < VAR_1)
  return 0;
 FUNC_7(VAR_7, VAR_1);
 FUNC_8(VAR_7);
 FUNC_0(VAR_7)->h_proto = VAR_10;
 FUNC_1(FUNC_0(VAR_7)->h_source);
fix_dest:
 FUNC_4(FUNC_0(VAR_7)->h_dest, VAR_6->net->dev_addr, VAR_0);
 return 1;
}
