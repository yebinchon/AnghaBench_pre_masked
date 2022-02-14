
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_bus {int dev; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* stop ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct brcmf_bus *VAR_0)
{
 VAR_0->ops->stop(VAR_0->dev);
}
