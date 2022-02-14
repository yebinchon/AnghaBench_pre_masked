
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vb2_v4l2_buffer {int vb2_buf; } ;
struct v4l2_ctrl_vp8_frame_header {int first_part_header_bits; int first_part_size; int num_dct_parts; int* dct_part_sizes; } ;
struct hantro_reg {int mask; int shift; void* base; } ;
struct hantro_dev {int dummy; } ;
struct hantro_ctx {struct hantro_dev* dev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 void* VAR_3 ;
 scalar_t__ FUNC_2 (struct v4l2_ctrl_vp8_frame_header const*) ;
 struct vb2_v4l2_buffer* FUNC_3 (struct hantro_ctx*) ;
 int FUNC_4 (struct hantro_dev*,struct hantro_reg*,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct hantro_dev*,int,int ) ;
 struct hantro_reg* VAR_4 ;
 struct hantro_reg* VAR_5 ;

__attribute__((used)) static void FUNC_7(struct hantro_ctx *VAR_6,
        const struct v4l2_ctrl_vp8_frame_header *VAR_7)
{
 struct hantro_dev *VAR_8 = VAR_6->dev;
 struct vb2_v4l2_buffer *VAR_9;
 u32 VAR_10 = FUNC_2(VAR_7) ? 10 : 3;
 u32 VAR_11, VAR_12, VAR_13, VAR_14;
 u32 VAR_15, VAR_16;
 struct hantro_reg VAR_17;
 dma_addr_t VAR_18;
 u32 VAR_19 = 0;
 u32 VAR_20 = 0;
 unsigned int VAR_21;

 VAR_9 = FUNC_3(VAR_6);
 VAR_18 = FUNC_5(&VAR_9->vb2_buf, 0);
 VAR_13 = VAR_10 * 8 +
    VAR_7->first_part_header_bits + 8;
 VAR_12 = VAR_13 / 8;
 VAR_14 = VAR_13 -
   (VAR_12 & (~VAR_0)) * 8;
 VAR_11 = VAR_7->first_part_size -
    (VAR_12 - VAR_10) +
    (VAR_12 & VAR_0);


 FUNC_6(VAR_8, (VAR_12 & (~VAR_0))
    + VAR_18, FUNC_0(13));


 VAR_17.base = VAR_1;
 VAR_17.mask = 0x3f;
 VAR_17.shift = 18;
 FUNC_4(VAR_8, &VAR_17, VAR_14);


 VAR_17.base = VAR_3;
 VAR_17.mask = 0x3fffff;
 VAR_17.shift = 0;
 FUNC_4(VAR_8, &VAR_17, VAR_11 + 1);
 VAR_15 = (VAR_7->num_dct_parts - 1) * 3;
 VAR_16 = VAR_10 + VAR_7->first_part_size;
 for (VAR_21 = 0; VAR_21 < VAR_7->num_dct_parts; VAR_21++)
  VAR_19 += VAR_7->dct_part_sizes[VAR_21];
 VAR_19 += VAR_15;
 VAR_19 += (VAR_16 & VAR_0);


 VAR_17.base = VAR_3;
 VAR_17.mask = 0xf;
 VAR_17.shift = 24;
 FUNC_4(VAR_8, &VAR_17, VAR_7->num_dct_parts - 1);


 FUNC_6(VAR_8,
      FUNC_1(VAR_19),
      VAR_2);


 for (VAR_21 = 0; VAR_21 < VAR_7->num_dct_parts; VAR_21++) {
  u32 VAR_22 = VAR_16 + VAR_15 + VAR_20;
  u32 VAR_23 = VAR_22 + VAR_18;

  FUNC_4(VAR_8, &VAR_4[VAR_21],
     VAR_23 & (~VAR_0));

  FUNC_4(VAR_8, &VAR_5[VAR_21],
     (VAR_22 & VAR_0) * 8);

  VAR_20 += VAR_7->dct_part_sizes[VAR_21];
 }
}
