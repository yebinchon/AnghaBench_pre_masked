
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usbnet {int net; } ;
struct sk_buff {int len; int data; scalar_t__ head; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (int ,char*,int,int,...) ;
 int FUNC_3 (int,unsigned char*) ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int,int,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 unsigned char* FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *
FUNC_11(struct usbnet *VAR_2, struct sk_buff *VAR_3, gfp_t VAR_4)
{
 struct sk_buff *VAR_5 = ((void*)0);
 u16 VAR_6;
 unsigned char *VAR_7;
 unsigned char VAR_8, VAR_9;
 u8 VAR_10, VAR_11 = 0;

 if (!FUNC_4(VAR_3)) {
  int VAR_12 = FUNC_6(VAR_3);
  int VAR_13 = FUNC_10(VAR_3);

  if ((VAR_13 >= VAR_0) && (VAR_12
   >= VAR_1))
   goto done;

  if ((VAR_12 + VAR_13) > (VAR_1
   + VAR_0)) {
   VAR_3->data = FUNC_1(VAR_3->head + VAR_1,
    VAR_3->data, VAR_3->len);
   FUNC_9(VAR_3, VAR_3->len);
   goto done;
  }
 }

 VAR_5 = FUNC_5(VAR_3, VAR_1,
  VAR_0, VAR_4);
 if (!VAR_5)
  return ((void*)0);

 FUNC_0(VAR_3);
 VAR_3 = VAR_5;

done:
 VAR_7 = FUNC_7(VAR_3, VAR_1);
 VAR_8 = VAR_7[VAR_1 + 12];
 VAR_9 = VAR_7[VAR_1 + 13];

 FUNC_2(VAR_2->net, "Sending etherType: %02x%02x", VAR_8,
  VAR_9);


 VAR_7[0] = 0x57;
 VAR_7[1] = 0x44;
 VAR_6 = VAR_3->len - VAR_1;

 FUNC_3(VAR_6, &VAR_7[2]);
 VAR_7[4] = VAR_8;
 VAR_7[5] = VAR_9;


 VAR_10 = VAR_3->len % VAR_0;
 if (VAR_10 > 0) {
  VAR_11 = VAR_0 - VAR_10;
  FUNC_8(VAR_3, VAR_11);
 }

 FUNC_2(VAR_2->net,
  "Sending package with length %i and padding %i. Header: %6phC.",
  VAR_6, VAR_11, VAR_7);

 return VAR_3;
}
