
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ftmac100_txdes {scalar_t__ txdes3; } ;



__attribute__((used)) static struct sk_buff *FUNC_0(struct ftmac100_txdes *VAR_0)
{
 return (struct sk_buff *)VAR_0->txdes3;
}
