
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct usbnet {TYPE_1__* net; } ;
struct sk_buff {int dummy; } ;
struct iphdr {int dummy; } ;
typedef int __be16 ;
struct TYPE_4__ {int h_dest; int h_source; int h_proto; } ;
struct TYPE_3__ {int dev_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*,int ,int) ;
 int FUNC_1 (struct usbnet*,int*,int) ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int*,size_t) ;
 int FUNC_6 (int ,int ,int ) ;
 struct sk_buff* FUNC_7 (TYPE_1__*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;
 int FUNC_9 (struct sk_buff*,int*,size_t) ;
 int FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_11(struct usbnet *VAR_7, u8 *VAR_8, size_t VAR_9, u16 VAR_10)
{
 __be16 VAR_11 = FUNC_4(VAR_3);
 struct sk_buff *VAR_12 = ((void*)0);

 if (VAR_10 < 256 || VAR_10 == VAR_6) {
  if (VAR_9 < sizeof(struct iphdr))
   goto err;

  switch (*VAR_8 & 0xf0) {
  case 0x40:
   VAR_11 = FUNC_4(VAR_4);
   break;
  case 0x60:
   if (FUNC_5(VAR_8, VAR_9))
    FUNC_1(VAR_7, VAR_8, VAR_10);
   VAR_11 = FUNC_4(VAR_5);
   break;
  default:
   goto err;
  }
 }

 VAR_12 = FUNC_7(VAR_7->net, VAR_9 + VAR_1);
 if (!VAR_12)
  goto err;


 FUNC_8(VAR_12, VAR_1);
 FUNC_10(VAR_12);
 FUNC_2(VAR_12)->h_proto = VAR_11;
 FUNC_3(FUNC_2(VAR_12)->h_source);
 FUNC_6(FUNC_2(VAR_12)->h_dest, VAR_7->net->dev_addr, VAR_0);


 FUNC_9(VAR_12, VAR_8, VAR_9);


 if (VAR_10)
  FUNC_0(VAR_12, FUNC_4(VAR_2), VAR_10);
err:
 return VAR_12;
}
