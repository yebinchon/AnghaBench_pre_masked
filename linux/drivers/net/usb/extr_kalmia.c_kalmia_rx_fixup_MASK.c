
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usbnet {int net; } ;
struct sk_buff {int len; int* data; } ;
typedef int HEADER_END_OF_USB_PACKET ;
typedef int EXPECTED_UNKNOWN_HEADER_2 ;
typedef int EXPECTED_UNKNOWN_HEADER_1 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int*,int const*,int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*,int*,int) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct usbnet*,struct sk_buff*) ;

__attribute__((used)) static int
FUNC_9(struct usbnet *VAR_2, struct sk_buff *VAR_3)
{




 static const u8 VAR_4[] =
  { 0x57, 0x5a, 0x00, 0x00, 0x08, 0x00 };
 static const u8 VAR_5[] =
  { 0x57, 0x43, 0x1e, 0x00, 0x15, 0x02 };
 static const u8 VAR_6[] =
  { 0x57, 0x50, 0x0e, 0x00, 0x00, 0x00 };
 int VAR_7 = 0;


 if (VAR_3->len < VAR_1)
  return 0;

 do {
  struct sk_buff *VAR_8 = ((void*)0);
  u8 *VAR_9;
  u16 VAR_10, VAR_11;
  int VAR_12;

  VAR_9 = VAR_3->data;

  if (FUNC_7(VAR_9[0] != 0x57 || VAR_9[1] != 0x44)) {
   if (!FUNC_1(VAR_9, VAR_5,
    sizeof(VAR_5)) || !FUNC_1(
    VAR_9, VAR_6,
    sizeof(VAR_6))) {
    FUNC_2(VAR_2->net,
     "Received expected unknown frame header: %6phC. Package length: %i\n",
     VAR_9,
     VAR_3->len - VAR_1);
   }
   else {
    FUNC_3(VAR_2->net,
     "Received unknown frame header: %6phC. Package length: %i\n",
     VAR_9,
     VAR_3->len - VAR_1);
    return 0;
   }
  }
  else
   FUNC_2(VAR_2->net,
    "Received header: %6phC. Package length: %i\n",
    VAR_9, VAR_3->len - VAR_1);


  VAR_10 = VAR_3->len - (2 * VAR_1);
  VAR_11 = FUNC_0(&VAR_9[2]);
  FUNC_5(VAR_3, VAR_1);


  if (VAR_10 < VAR_11) {
   VAR_11 = VAR_10
    + VAR_1;
   VAR_12 = 1;
  }
  else {
   FUNC_2(VAR_2->net, "Correct package length #%i", VAR_7
    + 1);

   VAR_12 = (FUNC_1(VAR_3->data + VAR_11,
    VAR_4,
    sizeof(VAR_4)) == 0);
   if (!VAR_12) {
    VAR_9 = VAR_3->data + VAR_11;
    FUNC_2(VAR_2->net,
     "End header: %6phC. Package length: %i\n",
     VAR_9,
     VAR_3->len - VAR_1);
   }
  }

  if (VAR_12) {
   VAR_8 = VAR_3;
  }
  else {
   VAR_8 = FUNC_4(VAR_3, VAR_0);
   if (FUNC_7(!VAR_8))
    return 0;
  }

  FUNC_6(VAR_8, VAR_11);

  if (VAR_12) {
   return 1;
  }
  else {
   FUNC_8(VAR_2, VAR_8);
   FUNC_5(VAR_3, VAR_11);
  }

  VAR_7++;
 }
 while (VAR_3->len);

 return 1;
}
