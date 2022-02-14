
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ data; scalar_t__ cb; } ;
struct rtw_c2h_cmd {int * payload; } ;



__attribute__((used)) static inline u8 *FUNC_0(struct sk_buff *VAR_0)
{
 struct rtw_c2h_cmd *VAR_1;
 u32 VAR_2;

 VAR_2 = *((u32 *)VAR_0->cb);
 VAR_1 = (struct rtw_c2h_cmd *)(VAR_0->data + VAR_2);

 return VAR_1->payload;
}
