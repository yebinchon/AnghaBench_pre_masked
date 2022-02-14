
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int maxpacket; } ;
struct sk_buff {int len; int* data; } ;
typedef int gfp_t ;


 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct usbnet *VAR_0, struct sk_buff *VAR_1,
           gfp_t VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = 0;
 int VAR_5 = 0;

 VAR_5 = 0x40;

 VAR_4 = VAR_1->len;
 if (FUNC_2(VAR_1, VAR_5)) {
  FUNC_1(VAR_1);
  return ((void*)0);
 }

 FUNC_0(VAR_1, VAR_5);



 if ((VAR_1->len % VAR_0->maxpacket) == 0)
  VAR_4++;

 VAR_1->data[0] = VAR_4;
 VAR_1->data[1] = VAR_4 >> 8;
 VAR_1->data[2] = 0x00;
 VAR_1->data[3] = 0x80;

 for (VAR_3 = 4; VAR_3 < 48; VAR_3++)
  VAR_1->data[VAR_3] = 0x00;

 VAR_1->data[48] = VAR_4;
 VAR_1->data[49] = VAR_4 >> 8;
 VAR_1->data[50] = 0x00;
 VAR_1->data[51] = 0x80;

 for (VAR_3 = 52; VAR_3 < 64; VAR_3++)
  VAR_1->data[VAR_3] = 0x00;

 return VAR_1;
}
