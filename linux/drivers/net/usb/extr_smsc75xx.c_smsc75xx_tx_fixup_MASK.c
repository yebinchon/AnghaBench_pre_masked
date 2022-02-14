
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct usbnet {int dummy; } ;
struct sk_buff {int len; scalar_t__ ip_summed; } ;
typedef int gfp_t ;
struct TYPE_2__ {int gso_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,void*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 void* FUNC_5 (struct sk_buff*,int) ;
 TYPE_1__* FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_7(struct usbnet *VAR_10,
      struct sk_buff *VAR_11, gfp_t VAR_12)
{
 u32 VAR_13, VAR_14;
 void *VAR_15;

 if (FUNC_3(VAR_11, VAR_1)) {
  FUNC_0(VAR_11);
  return ((void*)0);
 }

 VAR_13 = (u32)(VAR_11->len & VAR_4) | VAR_2;

 if (VAR_11->ip_summed == VAR_0)
  VAR_13 |= VAR_3 | VAR_6;

 if (FUNC_4(VAR_11)) {
  u16 VAR_16 = FUNC_1(FUNC_6(VAR_11)->gso_size, VAR_9);
  VAR_14 = (VAR_16 << VAR_8) & VAR_7;

  VAR_13 |= VAR_5;
 } else {
  VAR_14 = 0;
 }

 VAR_15 = FUNC_5(VAR_11, 8);
 FUNC_2(VAR_13, VAR_15);
 FUNC_2(VAR_14, VAR_15 + 4);

 return VAR_11;
}
