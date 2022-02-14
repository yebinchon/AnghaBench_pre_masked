
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct kvaser_pciefd {scalar_t__ reg_base; TYPE_1__* pci; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct kvaser_pciefd*,int) ;

__attribute__((used)) static int FUNC_4(struct kvaser_pciefd *VAR_10)
{
 u32 VAR_11;

 VAR_11 = FUNC_1(VAR_10->reg_base + VAR_9);
 if (VAR_11 & VAR_5) {
  FUNC_3(VAR_10, 0);

  FUNC_2(VAR_0,
     VAR_10->reg_base + VAR_2);
 }

 if (VAR_11 & VAR_6) {
  FUNC_3(VAR_10, 1);

  FUNC_2(VAR_1,
     VAR_10->reg_base + VAR_2);
 }

 if (VAR_11 & VAR_3 ||
     VAR_11 & VAR_4 ||
     VAR_11 & VAR_7 ||
     VAR_11 & VAR_8)
  FUNC_0(&VAR_10->pci->dev, "DMA IRQ error 0x%08X\n", VAR_11);

 FUNC_2(VAR_11, VAR_10->reg_base + VAR_9);
 return 0;
}
