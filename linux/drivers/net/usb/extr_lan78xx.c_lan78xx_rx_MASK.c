
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {scalar_t__ len; unsigned char* data; int truesize; } ;
struct lan78xx_net {TYPE_1__* net; } ;
typedef int rx_cmd_c ;
typedef int rx_cmd_b ;
typedef int rx_cmd_a ;
struct TYPE_3__ {scalar_t__ hard_header_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (struct lan78xx_net*,struct sk_buff*,int,int) ;
 int FUNC_3 (struct lan78xx_net*,struct sk_buff*,int,int) ;
 int FUNC_4 (struct lan78xx_net*,struct sk_buff*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (struct lan78xx_net*,int ,TYPE_1__*,char*,int) ;
 int VAR_4 ;
 struct sk_buff* FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*,int) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct lan78xx_net *VAR_5, struct sk_buff *VAR_6)
{
 if (VAR_6->len < VAR_5->net->hard_header_len)
  return 0;

 while (VAR_6->len > 0) {
  u32 VAR_7, VAR_8, VAR_9, VAR_10;
  u16 VAR_11;
  struct sk_buff *VAR_12;
  unsigned char *VAR_13;

  VAR_7 = FUNC_1(VAR_6->data);
  FUNC_8(VAR_6, sizeof(VAR_7));

  VAR_8 = FUNC_1(VAR_6->data);
  FUNC_8(VAR_6, sizeof(VAR_8));

  VAR_11 = FUNC_0(VAR_6->data);
  FUNC_8(VAR_6, sizeof(VAR_11));

  VAR_13 = VAR_6->data;


  VAR_10 = (VAR_7 & VAR_2);
  VAR_9 = (4 - ((VAR_10 + VAR_1) % 4)) % 4;

  if (FUNC_11(VAR_7 & VAR_3)) {
   FUNC_6(VAR_5, VAR_4, VAR_5->net,
      "Error rx_cmd_a=0x%08x", VAR_7);
  } else {

   if (VAR_6->len == VAR_10) {
    FUNC_2(VAR_5, VAR_6,
       VAR_7, VAR_8);
    FUNC_3(VAR_5, VAR_6,
       VAR_7, VAR_8);

    FUNC_10(VAR_6, VAR_6->len - 4);
    VAR_6->truesize = VAR_10 + sizeof(struct sk_buff);

    return 1;
   }

   VAR_12 = FUNC_7(VAR_6, VAR_0);
   if (FUNC_11(!VAR_12)) {
    FUNC_5(VAR_5->net, "Error allocating skb");
    return 0;
   }

   VAR_12->len = VAR_10;
   VAR_12->data = VAR_13;
   FUNC_9(VAR_12, VAR_10);

   FUNC_2(VAR_5, VAR_12, VAR_7, VAR_8);
   FUNC_3(VAR_5, VAR_12, VAR_7, VAR_8);

   FUNC_10(VAR_12, VAR_12->len - 4);
   VAR_12->truesize = VAR_10 + sizeof(struct sk_buff);

   FUNC_4(VAR_5, VAR_12);
  }

  FUNC_8(VAR_6, VAR_10);


  if (VAR_6->len)
   FUNC_8(VAR_6, VAR_9);
 }

 return 1;
}
