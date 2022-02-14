
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int net; } ;
struct sk_buff {int len; int* data; int truesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct sk_buff* FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct usbnet*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct usbnet *VAR_3, struct sk_buff *VAR_4)
{
 struct sk_buff *VAR_5;
 int VAR_6;
 if (FUNC_4(VAR_4->len < VAR_2)) {
  FUNC_0(VAR_3->net, "unexpected tiny rx frame\n");
  return 0;
 }


 while (VAR_4->len > VAR_2) {
  if (VAR_4->data[0] != 0x40)
   return 0;


  VAR_6 = (VAR_4->data[1] | (VAR_4->data[2] << 8)) - 4;

  if (VAR_6 > VAR_0)
   return 0;


  if (VAR_4->len == (VAR_6 + VAR_2)) {
   FUNC_2(VAR_4, 3);
   VAR_4->len = VAR_6;
   FUNC_3(VAR_4, VAR_6);
   VAR_4->truesize = VAR_6 + sizeof(struct sk_buff);
   return 2;
  }


  VAR_5 = FUNC_1(VAR_4, VAR_1);
  if (!VAR_5)
   return 0;

  VAR_5->len = VAR_6;
  VAR_5->data = VAR_4->data + 3;
  FUNC_3(VAR_5, VAR_6);
  VAR_5->truesize = VAR_6 + sizeof(struct sk_buff);
  FUNC_5(VAR_3, VAR_5);

  FUNC_2(VAR_4, VAR_6 + VAR_2);
 }

 return 0;
}
