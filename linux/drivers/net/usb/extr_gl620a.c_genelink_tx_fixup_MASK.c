
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int maxpacket; } ;
struct sk_buff {int len; int data; scalar_t__ head; } ;
typedef int gfp_t ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int,int,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int * FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *
FUNC_10(struct usbnet *VAR_0, struct sk_buff *VAR_1, gfp_t VAR_2)
{
 int VAR_3;
 int VAR_4 = VAR_1->len;
 int VAR_5 = FUNC_5(VAR_1);
 int VAR_6 = FUNC_9(VAR_1);
 __le32 *VAR_7;
 __le32 *VAR_8;


 VAR_3 = ((VAR_1->len + (4 + 4*1)) % 64) ? 0 : 1;

 if ((!FUNC_3(VAR_1))
   && ((VAR_5 + VAR_6) >= (VAR_3 + (4 + 4*1)))) {
  if ((VAR_5 < (4 + 4*1)) || (VAR_6 < VAR_3)) {
   VAR_1->data = FUNC_2(VAR_1->head + (4 + 4*1),
          VAR_1->data, VAR_1->len);
   FUNC_8(VAR_1, VAR_1->len);
  }
 } else {
  struct sk_buff *VAR_9;
  VAR_9 = FUNC_4(VAR_1, (4 + 4*1) , VAR_3, VAR_2);
  FUNC_1(VAR_1);
  VAR_1 = VAR_9;
  if (!VAR_1)
   return ((void*)0);
 }


 VAR_7 = FUNC_6(VAR_1, (4 + 4 * 1));
 VAR_8 = VAR_7 + 1;

 *VAR_7 = FUNC_0(1);
 *VAR_8 = FUNC_0(VAR_4);


 if ((VAR_1->len % VAR_0->maxpacket) == 0)
  FUNC_7(VAR_1, 1);

 return VAR_1;
}
