
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct iphdr {int tos; } ;
struct ethhdr {scalar_t__ h_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (char*,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_2, u8 VAR_3)
{
 struct ethhdr *VAR_4;
 struct iphdr *VAR_5;

 VAR_4 = (struct ethhdr *)VAR_2->data;
 if (VAR_4->h_proto != FUNC_0(VAR_1))
  return 0;





 VAR_5 = FUNC_1(VAR_2);
 switch (VAR_5->tos & 0xfc) {
 case 0x20:
  return 2;
 case 0x40:
  return 1;
 case 0x60:
  return 3;
 case 0x80:
  return 4;
 case 0xa0:
  return 5;
 case 0xc0:
  return 6;
 case 0xe0:
  return 7;
 default:
  return 0;
 }
}
