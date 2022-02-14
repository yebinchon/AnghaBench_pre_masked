
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pktq {int dummy; } ;
struct brcmf_bus {int dev; TYPE_1__* ops; } ;
struct TYPE_2__ {struct pktq* (* gettxq ) (int ) ;} ;


 int VAR_0 ;
 struct pktq* FUNC_0 (int ) ;
 struct pktq* FUNC_1 (int ) ;

__attribute__((used)) static inline
struct pktq *FUNC_2(struct brcmf_bus *VAR_1)
{
 if (!VAR_1->ops->gettxq)
  return FUNC_0(-VAR_0);

 return VAR_1->ops->gettxq(VAR_1->dev);
}
