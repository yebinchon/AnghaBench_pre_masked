
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct denali_controller {int caps; int dev; scalar_t__ reg; int (* setup_dma ) (struct denali_controller*,int ,int,int) ;} ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int FUNC_0 (struct denali_controller*,void*,size_t,int,int) ;
 int FUNC_1 (struct denali_controller*) ;
 int FUNC_2 (struct denali_controller*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,void*,size_t,int) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,size_t,int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (void*,int,size_t) ;
 int FUNC_10 (struct denali_controller*,int ,int,int) ;

__attribute__((used)) static int FUNC_11(struct denali_controller *VAR_12, void *VAR_13,
      size_t VAR_14, int VAR_15, bool VAR_16)
{
 dma_addr_t VAR_17;
 u32 VAR_18, VAR_19, VAR_20;
 enum dma_data_direction VAR_21 = VAR_16 ? VAR_4 : VAR_3;
 int VAR_22 = 0;

 VAR_17 = FUNC_4(VAR_12->dev, VAR_13, VAR_14, VAR_21);
 if (FUNC_5(VAR_12->dev, VAR_17)) {
  FUNC_3(VAR_12->dev, "Failed to DMA-map buffer. Trying PIO.\n");
  return FUNC_0(VAR_12, VAR_13, VAR_14, VAR_15, VAR_16);
 }

 if (VAR_16) {





  VAR_18 = VAR_7 | VAR_11;
  VAR_20 = 0;
 } else if (VAR_12->caps & VAR_0) {
  VAR_18 = VAR_7;
  VAR_20 = VAR_9;
 } else {
  VAR_18 = VAR_7;
  VAR_20 = VAR_8;
 }

 FUNC_8(VAR_2, VAR_12->reg + VAR_1);





 FUNC_7(VAR_12->reg + VAR_1);

 FUNC_1(VAR_12);
 VAR_12->setup_dma(VAR_12, VAR_17, VAR_15, VAR_16);

 VAR_19 = FUNC_2(VAR_12, VAR_18);
 if (!(VAR_19 & VAR_7))
  VAR_22 = -VAR_6;
 else if (VAR_19 & VAR_20)
  VAR_22 = -VAR_5;

 FUNC_8(0, VAR_12->reg + VAR_1);

 FUNC_6(VAR_12->dev, VAR_17, VAR_14, VAR_21);

 if (VAR_19 & VAR_10)
  FUNC_9(VAR_13, 0xff, VAR_14);

 return VAR_22;
}
