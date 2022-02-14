
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skb_frame_desc {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int driver_data; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int VAR_0 ;

__attribute__((used)) static inline struct skb_frame_desc* FUNC_2(struct sk_buff *VAR_1)
{
 FUNC_0(sizeof(struct skb_frame_desc) >
       VAR_0);
 return (struct skb_frame_desc *)&FUNC_1(VAR_1)->driver_data;
}
