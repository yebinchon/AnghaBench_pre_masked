
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w5100_priv {int ndev; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* reset ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct w5100_priv*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct w5100_priv *VAR_3)
{
 if (VAR_3->ops->reset)
  return VAR_3->ops->reset(VAR_3->ndev);

 FUNC_2(VAR_3, VAR_2, VAR_1);
 FUNC_0(5);
 FUNC_2(VAR_3, VAR_2, VAR_0);

 return 0;
}
