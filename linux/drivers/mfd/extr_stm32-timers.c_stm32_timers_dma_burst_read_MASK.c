
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct stm32_timers_dma {int lock; int * chan; int completion; scalar_t__ phys_base; int ** chans; } ;
struct stm32_timers {struct stm32_timers_dma dma; struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct dma_slave_config {int src_addr_width; scalar_t__ src_addr; } ;
struct dma_async_tx_descriptor {struct stm32_timers_dma* callback_param; int callback; } ;
struct device {int dummy; } ;
typedef enum stm32_timers_dmas { ____Placeholder_stm32_timers_dmas } stm32_timers_dmas ;
typedef int dma_cookie_t ;
typedef scalar_t__ dma_addr_t ;
typedef int config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_0 (int ,unsigned int) ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 struct stm32_timers* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct device*,unsigned int*,size_t,int ) ;
 scalar_t__ FUNC_4 (struct device*,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct device*,scalar_t__,size_t,int ) ;
 struct dma_async_tx_descriptor* FUNC_7 (int *,scalar_t__,size_t,int ,int ) ;
 int FUNC_8 (int *,struct dma_slave_config*) ;
 int FUNC_9 (struct dma_async_tx_descriptor*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct dma_slave_config*,int ,int) ;
 unsigned long FUNC_12 (unsigned long) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct regmap*,int ,int ,int ) ;
 int FUNC_16 (struct regmap*,int ,unsigned int) ;
 int FUNC_17 (int *) ;
 int * VAR_18 ;
 int VAR_19 ;
 long FUNC_18 (int *,unsigned long) ;

int FUNC_19(struct device *VAR_20, u32 *VAR_21,
    enum stm32_timers_dmas VAR_22, u32 VAR_23,
    unsigned int VAR_24, unsigned int VAR_25,
    unsigned long VAR_26)
{
 struct stm32_timers *VAR_27 = FUNC_1(VAR_20);
 unsigned long VAR_28 = FUNC_12(VAR_26);
 struct regmap *VAR_29 = VAR_27->regmap;
 struct stm32_timers_dma *VAR_30 = &VAR_27->dma;
 size_t VAR_31 = VAR_24 * VAR_25 * sizeof(u32);
 struct dma_async_tx_descriptor *VAR_32;
 struct dma_slave_config VAR_33;
 dma_cookie_t VAR_34;
 dma_addr_t VAR_35;
 u32 VAR_36, VAR_37;
 long VAR_38;
 int VAR_39;


 if (VAR_22 < VAR_9 || VAR_22 >= VAR_10)
  return -VAR_5;

 if (!VAR_24 || !VAR_25 || VAR_23 > VAR_11 ||
     (VAR_23 + VAR_24 * sizeof(u32)) > VAR_11)
  return -VAR_5;

 if (!VAR_30->chans[VAR_22])
  return -VAR_6;
 FUNC_13(&VAR_30->lock);


 VAR_30->chan = VAR_30->chans[VAR_22];
 VAR_35 = FUNC_3(VAR_20, VAR_21, VAR_31, VAR_1);
 if (FUNC_4(VAR_20, VAR_35)) {
  VAR_39 = -VAR_7;
  goto unlock;
 }


 FUNC_11(&VAR_33, 0, sizeof(VAR_33));
 VAR_33.src_addr = (dma_addr_t)VAR_30->phys_base + VAR_16;
 VAR_33.src_addr_width = VAR_3;
 VAR_39 = FUNC_8(VAR_30->chan, &VAR_33);
 if (VAR_39)
  goto unmap;

 VAR_32 = FUNC_7(VAR_30->chan, VAR_35, VAR_31,
        VAR_0, VAR_2);
 if (!VAR_32) {
  VAR_39 = -VAR_4;
  goto unmap;
 }

 VAR_32->callback = VAR_19;
 VAR_32->callback_param = VAR_30;
 VAR_34 = FUNC_9(VAR_32);
 VAR_39 = FUNC_5(VAR_34);
 if (VAR_39)
  goto dma_term;

 FUNC_17(&VAR_30->completion);
 FUNC_2(VAR_30->chan);


 VAR_36 = FUNC_0(VAR_14, VAR_25 - 1);
 VAR_37 = FUNC_0(VAR_13, VAR_23 >> 2);
 VAR_39 = FUNC_16(VAR_29, VAR_12, VAR_36 | VAR_37);
 if (VAR_39)
  goto dma_term;


 VAR_39 = FUNC_16(VAR_29, VAR_17, 0);
 if (VAR_39)
  goto dcr_clr;

 VAR_39 = FUNC_15(VAR_29, VAR_15, VAR_18[VAR_22],
     VAR_18[VAR_22]);
 if (VAR_39)
  goto dcr_clr;

 VAR_38 = FUNC_18(&VAR_30->completion,
       VAR_28);
 if (VAR_38 == 0)
  VAR_39 = -VAR_8;
 else if (VAR_38 < 0)
  VAR_39 = VAR_38;

 FUNC_15(VAR_29, VAR_15, VAR_18[VAR_22], 0);
 FUNC_16(VAR_29, VAR_17, 0);
dcr_clr:
 FUNC_16(VAR_29, VAR_12, 0);
dma_term:
 FUNC_10(VAR_30->chan);
unmap:
 FUNC_6(VAR_20, VAR_35, VAR_31, VAR_1);
unlock:
 VAR_30->chan = ((void*)0);
 FUNC_14(&VAR_30->lock);

 return VAR_39;
}
