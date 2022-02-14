
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usbnet {int maxpacket; } ;
struct sk_buff {int len; } ;
typedef int gfp_t ;
struct TYPE_2__ {int gso_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int,int ,int ) ;
 int FUNC_2 (int,void*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 void* FUNC_5 (struct sk_buff*,int) ;
 TYPE_1__* FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *
FUNC_7(struct usbnet *VAR_1, struct sk_buff *VAR_2, gfp_t VAR_3)
{
 u32 VAR_4, VAR_5;
 int VAR_6 = VAR_1->maxpacket;
 int VAR_7 = FUNC_6(VAR_2)->gso_size;
 int VAR_8;
 void *VAR_9;

 VAR_4 = VAR_2->len;
 VAR_5 = VAR_7;
 if (((VAR_2->len + 8) % VAR_6) == 0)
  VAR_5 |= 0x80008000;

 VAR_8 = FUNC_4(VAR_2) - 8;

 if ((FUNC_3(VAR_2) || VAR_8 < 0) &&
     FUNC_1(VAR_2, VAR_8 < 0 ? 8 : 0, 0, VAR_0)) {
  FUNC_0(VAR_2);
  return ((void*)0);
 }

 VAR_9 = FUNC_5(VAR_2, 8);
 FUNC_2(VAR_4, VAR_9);
 FUNC_2(VAR_5, VAR_9 + 4);

 return VAR_2;
}
