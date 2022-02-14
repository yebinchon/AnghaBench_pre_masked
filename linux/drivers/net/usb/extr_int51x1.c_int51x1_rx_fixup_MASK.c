
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int net; } ;
struct sk_buff {int len; int * data; } ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_4(struct usbnet *VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3;

 if (!(FUNC_2(VAR_2, VAR_0))) {
  FUNC_1(VAR_1->net, "unexpected tiny rx frame\n");
  return 0;
 }

 VAR_3 = FUNC_0(*(__le16 *)&VAR_2->data[VAR_2->len - 2]);

 FUNC_3(VAR_2, VAR_3);

 return 1;
}
