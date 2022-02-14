
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mxs_ssp {scalar_t__ base; } ;
struct mxs_mmc_host {scalar_t__ sdio_irq_en; struct mxs_ssp ssp; } ;


 int FUNC_0 (int,int ) ;
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
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_1 (struct mxs_ssp*) ;
 scalar_t__ FUNC_2 (struct mxs_ssp*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct mxs_mmc_host *VAR_16)
{
 struct mxs_ssp *VAR_17 = &VAR_16->ssp;
 u32 VAR_18, VAR_19;
 int VAR_20;

 VAR_20 = FUNC_3(VAR_17->base);
 if (VAR_20)
  return VAR_20;

 VAR_18 = VAR_0;
 VAR_19 = FUNC_0(0x3, VAR_10) |
  FUNC_0(0x7, VAR_11) |
  VAR_4 |
  VAR_5 |
  VAR_6 |
  VAR_2 |
  VAR_3 |
  VAR_8 |
  VAR_7;

 FUNC_4(FUNC_0(0xffff, VAR_15) |
        FUNC_0(2, VAR_13) |
        FUNC_0(0, VAR_14),
        VAR_17->base + FUNC_2(VAR_17));

 if (VAR_16->sdio_irq_en) {
  VAR_18 |= VAR_1;
  VAR_19 |= VAR_9;
 }

 FUNC_4(VAR_18, VAR_17->base + VAR_12);
 FUNC_4(VAR_19, VAR_17->base + FUNC_1(VAR_17));
 return 0;
}
