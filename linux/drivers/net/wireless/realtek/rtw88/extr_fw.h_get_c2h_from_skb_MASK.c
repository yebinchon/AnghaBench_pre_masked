
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ data; scalar_t__ cb; } ;
struct rtw_c2h_cmd {int dummy; } ;



__attribute__((used)) static inline struct rtw_c2h_cmd *FUNC_0(struct sk_buff *VAR_0)
{
 u32 VAR_1;

 VAR_1 = *((u32 *)VAR_0->cb);
 return (struct rtw_c2h_cmd *)(VAR_0->data + VAR_1);
}
