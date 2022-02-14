
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_ep {int maxpacket; } ;
struct sk_buff {int len; } ;
struct gether {struct usb_ep* in_ep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int,int,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_9(struct gether *VAR_3, struct sk_buff *VAR_4)
{
 struct sk_buff *VAR_5 = ((void*)0);
 struct usb_ep *VAR_6 = VAR_3->in_ep;
 int VAR_7, VAR_8, VAR_9 = 0;
 u16 VAR_10;

 if (!VAR_4)
  return ((void*)0);

 VAR_10 = VAR_4->len;
 VAR_7 = FUNC_5(VAR_4);
 VAR_8 = FUNC_8(VAR_4);




 if (((VAR_10 + VAR_0 + VAR_1) % VAR_6->maxpacket) == 0)
  VAR_9 += 2;

 if ((VAR_8 >= (VAR_1 + VAR_9)) &&
   (VAR_7 >= VAR_0) && !FUNC_3(VAR_4))
  goto done;

 VAR_5 = FUNC_4(VAR_4, VAR_0, VAR_1 + VAR_9, VAR_2);
 FUNC_0(VAR_4);
 VAR_4 = VAR_5;
 if (!VAR_4)
  return VAR_4;

done:

 FUNC_1(0xdeadbeef, FUNC_7(VAR_4, 4));






 VAR_10 = VAR_4->len;
 FUNC_2(VAR_10 & 0x3FFF, FUNC_6(VAR_4, 2));


 if (VAR_9)
  FUNC_2(0, FUNC_7(VAR_4, 2));

 return VAR_4;
}
