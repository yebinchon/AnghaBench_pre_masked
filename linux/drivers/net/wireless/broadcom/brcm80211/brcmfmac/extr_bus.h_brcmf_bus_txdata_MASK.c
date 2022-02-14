
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct brcmf_bus {int dev; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* txdata ) (int ,struct sk_buff*) ;} ;


 int FUNC_0 (int ,struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_1(struct brcmf_bus *VAR_0, struct sk_buff *VAR_1)
{
 return VAR_0->ops->txdata(VAR_0->dev, VAR_1);
}
