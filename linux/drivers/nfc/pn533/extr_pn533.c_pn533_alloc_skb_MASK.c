
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct pn533 {TYPE_1__* ops; } ;
struct TYPE_2__ {int tx_header_len; scalar_t__ tx_tail_len; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct sk_buff*,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct pn533 *VAR_1, unsigned int VAR_2)
{
 struct sk_buff *VAR_3;

 VAR_3 = FUNC_0(VAR_1->ops->tx_header_len +
   VAR_2 +
   VAR_1->ops->tx_tail_len, VAR_0);

 if (VAR_3)
  FUNC_1(VAR_3, VAR_1->ops->tx_header_len);

 return VAR_3;
}
