
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct kvaser_pciefd {int nr_channels; scalar_t__ reg_base; int * can; TYPE_1__* pci; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct kvaser_pciefd*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct kvaser_pciefd *VAR_7 = (struct kvaser_pciefd *)VAR_6;
 u32 VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(VAR_7->reg_base + VAR_3);

 if (!(VAR_8 & VAR_2))
  return VAR_1;

 if (VAR_8 & VAR_4)
  FUNC_3(VAR_7);

 for (VAR_9 = 0; VAR_9 < VAR_7->nr_channels; VAR_9++) {
  if (!VAR_7->can[VAR_9]) {
   FUNC_0(&VAR_7->pci->dev,
    "IRQ mask points to unallocated controller\n");
   break;
  }


  if (VAR_8 & (1 << VAR_9))
   FUNC_4(VAR_7->can[VAR_9]);
 }

 FUNC_2(VAR_8, VAR_7->reg_base + VAR_3);
 return VAR_0;
}
