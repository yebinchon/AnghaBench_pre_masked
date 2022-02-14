
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hnae_ring {TYPE_2__* desc_cb; TYPE_1__* desc; } ;
struct TYPE_4__ {int dma; } ;
struct TYPE_3__ {int addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct hnae_ring*,TYPE_2__*) ;

__attribute__((used)) static inline int FUNC_2(struct hnae_ring *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0, &VAR_0->desc_cb[VAR_1]);

 if (VAR_2)
  return VAR_2;

 VAR_0->desc[VAR_1].addr = FUNC_0(VAR_0->desc_cb[VAR_1].dma);

 return 0;
}
