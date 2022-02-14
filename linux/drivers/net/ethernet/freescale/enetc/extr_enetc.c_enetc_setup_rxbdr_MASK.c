
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct enetc_hw {scalar_t__ reg; } ;
struct enetc_bdr {int index; scalar_t__ idr; scalar_t__ rcir; TYPE_1__* ndev; int bd_count; int bd_dma_base; } ;
struct TYPE_2__ {int features; } ;


 scalar_t__ FUNC_0 (int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_2 (int ,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct enetc_bdr*) ;
 int FUNC_5 (struct enetc_bdr*,int ) ;
 int FUNC_6 (struct enetc_hw*,int,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct enetc_hw *VAR_16, struct enetc_bdr *VAR_17)
{
 int VAR_18 = VAR_17->index;
 u32 VAR_19;

 FUNC_6(VAR_16, VAR_18, VAR_0,
         FUNC_7(VAR_17->bd_dma_base));

 FUNC_6(VAR_16, VAR_18, VAR_1,
         FUNC_8(VAR_17->bd_dma_base));

 FUNC_3(!FUNC_2(VAR_17->bd_count, 64));
 FUNC_6(VAR_16, VAR_18, VAR_6,
         FUNC_1(VAR_17->bd_count));

 FUNC_6(VAR_16, VAR_18, VAR_2, VAR_12);

 FUNC_6(VAR_16, VAR_18, VAR_11, 0);


 FUNC_6(VAR_16, VAR_18, VAR_4, VAR_5 | 0x1);

 VAR_19 = VAR_9;



 if (VAR_17->ndev->features & VAR_14)
  VAR_19 |= VAR_10;

 VAR_17->rcir = VAR_16->reg + FUNC_0(VAR_15, VAR_18, VAR_3);
 VAR_17->idr = VAR_16->reg + VAR_13;

 FUNC_5(VAR_17, FUNC_4(VAR_17));


 FUNC_6(VAR_16, VAR_18, VAR_7, VAR_19);
}
