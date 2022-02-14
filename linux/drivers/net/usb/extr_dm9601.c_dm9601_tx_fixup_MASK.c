
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int maxpacket; } ;
struct sk_buff {int len; int* data; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int*,int ,int) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int,int,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_7(struct usbnet *VAR_1, struct sk_buff *VAR_2,
           gfp_t VAR_3)
{
 int VAR_4, VAR_5;







 VAR_4 = VAR_2->len + VAR_0;






 while ((VAR_4 & 1) || !(VAR_4 % VAR_1->maxpacket))
  VAR_4++;

 VAR_4 -= VAR_0;
 VAR_5 = VAR_4 - VAR_2->len;

 if (FUNC_5(VAR_2) < VAR_0 || FUNC_6(VAR_2) < VAR_5) {
  struct sk_buff *VAR_6;

  VAR_6 = FUNC_4(VAR_2, VAR_0, VAR_5, VAR_3);
  FUNC_2(VAR_2);
  VAR_2 = VAR_6;
  if (!VAR_2)
   return ((void*)0);
 }

 FUNC_0(VAR_2, VAR_0);

 if (VAR_5) {
  FUNC_3(VAR_2->data + VAR_2->len, 0, VAR_5);
  FUNC_1(VAR_2, VAR_5);
 }

 VAR_2->data[0] = VAR_4;
 VAR_2->data[1] = VAR_4 >> 8;

 return VAR_2;
}
