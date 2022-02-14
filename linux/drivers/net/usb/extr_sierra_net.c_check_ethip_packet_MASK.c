
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {int net; } ;
struct sk_buff {int protocol; } ;
struct TYPE_2__ {int h_proto; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_1, struct usbnet *VAR_2)
{
 FUNC_4(VAR_1);

 if (FUNC_3(VAR_1)) {
  FUNC_1(VAR_2->net, "Non linear buffer-dropping\n");
  return 0;
 }

 if (!FUNC_2(VAR_1, VAR_0))
  return 0;
 VAR_1->protocol = FUNC_0(VAR_1)->h_proto;

 return 1;
}
