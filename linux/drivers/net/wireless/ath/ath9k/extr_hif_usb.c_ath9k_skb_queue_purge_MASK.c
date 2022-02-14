
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct hif_device_usb {int dummy; } ;


 struct sk_buff* FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_2(struct hif_device_usb *VAR_0,
      struct sk_buff_head *VAR_1)
{
 struct sk_buff *VAR_2;

 while ((VAR_2 = FUNC_0(VAR_1)) != ((void*)0)) {
  FUNC_1(VAR_2);
 }
}
