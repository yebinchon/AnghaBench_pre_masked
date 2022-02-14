
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct usbnet {TYPE_1__* net; } ;
struct sk_buff {scalar_t__ len; int data; int truesize; } ;
struct TYPE_2__ {scalar_t__ hard_header_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*) ;
 struct sk_buff* FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 int FUNC_8 (struct usbnet*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct usbnet *VAR_3, struct sk_buff *VAR_4)
{
 struct sk_buff *VAR_5;
 int VAR_6;
 u32 VAR_7;
 u16 VAR_8;
 u32 *VAR_9;


 if (VAR_4->len < VAR_3->net->hard_header_len)
  return 0;

 FUNC_7(VAR_4, VAR_4->len - 4);
 VAR_7 = FUNC_1(FUNC_6(VAR_4));

 VAR_6 = (u16)VAR_7;
 VAR_8 = (u16)(VAR_7 >> 16);
 VAR_9 = (u32 *)(VAR_4->data + VAR_8);

 while (VAR_6--) {
  u16 VAR_10;

  FUNC_2(VAR_9);
  VAR_10 = (*VAR_9 >> 16) & 0x1fff;


  if ((*VAR_9 & VAR_0) ||
      (*VAR_9 & VAR_1)) {
   FUNC_4(VAR_4, (VAR_10 + 7) & 0xFFF8);
   VAR_9++;
   continue;
  }

  if (VAR_6 == 0) {

   FUNC_4(VAR_4, 2);
   VAR_4->len = VAR_10;
   FUNC_5(VAR_4, VAR_10);
   VAR_4->truesize = VAR_10 + sizeof(struct sk_buff);
   FUNC_0(VAR_4, VAR_9);
   return 1;
  }

  VAR_5 = FUNC_3(VAR_4, VAR_2);
  if (VAR_5) {
   VAR_5->len = VAR_10;
   VAR_5->data = VAR_4->data + 2;
   FUNC_5(VAR_5, VAR_10);
   VAR_5->truesize = VAR_10 + sizeof(struct sk_buff);
   FUNC_0(VAR_5, VAR_9);
   FUNC_8(VAR_3, VAR_5);
  } else {
   return 0;
  }

  FUNC_4(VAR_4, (VAR_10 + 7) & 0xFFF8);
  VAR_9++;
 }
 return 1;
}
