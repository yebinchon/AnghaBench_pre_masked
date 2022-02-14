
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct w5100_priv {int ndev; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* read16 ) (int ,int ) ;} ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct w5100_priv *VAR_0, u32 VAR_1)
{
 return VAR_0->ops->read16(VAR_0->ndev, VAR_1);
}
