
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct sk_buff {int * data; } ;
struct iphdr {int tos; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int * VAR_2 ;

u16 FUNC_2(struct sk_buff *VAR_3)
{
 struct iphdr *VAR_4;
 unsigned int VAR_5;
 __be16 VAR_6;
 u32 VAR_7;
 u8 *VAR_8 = VAR_3->data;

 FUNC_1(&VAR_6, VAR_8 + (VAR_0 << 1), 2);

 switch (FUNC_0(VAR_6)) {
  case 128:

   VAR_4 = (struct iphdr *)(VAR_8 + VAR_1);

   VAR_5 = VAR_4->tos & 0xfc;

   VAR_7 = VAR_5 >> 5;

   break;
  default:
   VAR_7 = 0;
 }

 return VAR_2[VAR_7];
}
