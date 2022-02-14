
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct pn533_poll_modulations {int len; int data; } ;
struct pn533 {int dummy; } ;


 struct sk_buff* FUNC_0 (struct pn533*,int ) ;
 int FUNC_1 (struct sk_buff*,int *,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct pn533 *VAR_0,
     struct pn533_poll_modulations *VAR_1)
{
 struct sk_buff *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1->len);
 if (!VAR_2)
  return ((void*)0);

 FUNC_1(VAR_2, &VAR_1->data, VAR_1->len);

 return VAR_2;
}
