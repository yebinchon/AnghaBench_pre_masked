
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct imx21 {scalar_t__ regs; int dev; struct etd_priv* etd; } ;
struct etd_priv {int dma_handle; scalar_t__ len; scalar_t__ dmem_size; int active_count; int disactivated_frame; int last_int_frame; int last_req_frame; int bounce_buffer; int * submitted_dwords; int activated_frame; int cpu_buffer; int dmem_offset; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (struct imx21*,struct etd_priv*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_15 ;
 int FUNC_2 (struct imx21*,int ,int) ;
 int FUNC_3 (struct imx21*,int ,int ,scalar_t__) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ,scalar_t__,int) ;
 scalar_t__ FUNC_6 (int ,int) ;
 int FUNC_7 (struct imx21*,int,int) ;
 int FUNC_8 (struct imx21*,struct etd_priv*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (int ,scalar_t__,int ) ;
 int FUNC_12 (struct imx21*,struct etd_priv*,int ) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct imx21*,int ,int) ;
 int FUNC_15 (struct imx21*,int ,int) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_18(struct imx21 *VAR_16, int VAR_17, u8 VAR_18)
{
 u32 VAR_19 = 1 << VAR_17;
 struct etd_priv *VAR_20 = &VAR_16->etd[VAR_17];

 if (VAR_20->dma_handle && FUNC_16(VAR_20->dma_handle)) {

  if (VAR_20->len <= VAR_20->dmem_size) {

   if (VAR_18 != VAR_4) {
    FUNC_3(VAR_16,
      VAR_20->dmem_offset,
      VAR_20->cpu_buffer, VAR_20->len);
   }
   VAR_20->dma_handle = 0;

  } else {

   enum dma_data_direction VAR_21;

   if (VAR_18 == VAR_4) {
    VAR_21 = VAR_0;
    VAR_20->bounce_buffer = FUNC_10(VAR_20->len,
        VAR_3);
   } else {
    VAR_21 = VAR_1;
    VAR_20->bounce_buffer = FUNC_11(VAR_20->cpu_buffer,
        VAR_20->len,
        VAR_3);
   }
   if (!VAR_20->bounce_buffer) {
    FUNC_4(VAR_16->dev, "failed bounce alloc\n");
    goto err_bounce_alloc;
   }

   VAR_20->dma_handle =
    FUNC_5(VAR_16->dev,
      VAR_20->bounce_buffer,
      VAR_20->len,
      VAR_21);
   if (FUNC_6(VAR_16->dev, VAR_20->dma_handle)) {
    FUNC_4(VAR_16->dev, "failed bounce map\n");
    goto err_bounce_map;
   }
  }
 }

 FUNC_2(VAR_16, VAR_6, VAR_19);
 FUNC_14(VAR_16, VAR_5, VAR_19);
 FUNC_2(VAR_16, VAR_10, VAR_19);
 FUNC_2(VAR_16, VAR_12, VAR_19);

 if (VAR_20->dma_handle) {
  FUNC_14(VAR_16, VAR_13, VAR_19);
  FUNC_2(VAR_16, VAR_9, VAR_19);
  FUNC_2(VAR_16, VAR_11, VAR_19);
  FUNC_17(VAR_20->dma_handle, VAR_16->regs + FUNC_1(VAR_17));
  FUNC_14(VAR_16, VAR_14, VAR_19);
 } else {
  if (VAR_18 != VAR_4) {

   FUNC_15(VAR_16, VAR_10, VAR_19);
   FUNC_15(VAR_16, VAR_12, VAR_19);
  }
 }

 FUNC_0(VAR_16, VAR_20, VAR_15);
 VAR_20->active_count = 1;
 FUNC_17(VAR_19, VAR_16->regs + VAR_7);
 return;

err_bounce_map:
 FUNC_9(VAR_20->bounce_buffer);

err_bounce_alloc:
 FUNC_8(VAR_16, VAR_20);
 FUNC_12(VAR_16, VAR_20, -VAR_2);
}
