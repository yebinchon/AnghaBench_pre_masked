
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_bus {int dev; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* reset ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline
int FUNC_1(struct brcmf_bus *VAR_1)
{
 if (!VAR_1->ops->reset)
  return -VAR_0;

 return VAR_1->ops->reset(VAR_1->dev);
}
