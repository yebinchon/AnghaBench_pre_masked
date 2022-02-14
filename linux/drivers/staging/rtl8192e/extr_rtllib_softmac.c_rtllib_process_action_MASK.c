
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct rtllib_hdr_3addr {int dummy; } ;
struct rtllib_hdr {int dummy; } ;
struct rtllib_device {int dev; } ;






 int FUNC_0 (int ,char*) ;
 int* FUNC_1 (struct rtllib_hdr*) ;
 int FUNC_2 (struct rtllib_device*,struct sk_buff*) ;
 int FUNC_3 (struct rtllib_device*,struct sk_buff*) ;
 int FUNC_4 (struct rtllib_device*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct rtllib_device *VAR_0,
      struct sk_buff *VAR_1)
{
 struct rtllib_hdr_3addr *VAR_2 = (struct rtllib_hdr_3addr *) VAR_1->data;
 u8 *VAR_3 = FUNC_1((struct rtllib_hdr *)VAR_2);
 u8 VAR_4 = 0;

 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_0->dev,
       "Error getting payload of action frame\n");
  return;
 }

 VAR_4 = *VAR_3;
 VAR_3++;
 switch (VAR_4) {
 case 129:
  switch (*VAR_3) {
  case 131:
   FUNC_2(VAR_0, VAR_1);
   break;
  case 130:
   FUNC_3(VAR_0, VAR_1);
   break;
  case 128:
   FUNC_4(VAR_0, VAR_1);
   break;
  }
  break;
 default:
  break;
 }
}
