
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;
struct sk_buff {int len; int* data; } ;
typedef int gfp_t ;


 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct usbnet *VAR_0, struct sk_buff *VAR_1,
           gfp_t VAR_2)
{
 int VAR_3 = VAR_1->len;

 if (FUNC_1(VAR_1, 2)) {
  FUNC_0(VAR_1);
  return ((void*)0);
 }
 FUNC_2(VAR_1, 2);

 VAR_1->data[0] = VAR_3;
 VAR_1->data[1] = VAR_3 >> 8;

 return VAR_1;
}
