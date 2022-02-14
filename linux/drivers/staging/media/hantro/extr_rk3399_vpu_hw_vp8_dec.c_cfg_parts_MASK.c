
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vb2_v4l2_buffer {int vb2_buf; } ;
struct v4l2_ctrl_vp8_frame_header {int first_part_header_bits; int first_part_size; int num_dct_parts; int* dct_part_sizes; } ;
struct hantro_dev {int dummy; } ;
struct hantro_ctx {struct hantro_dev* dev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct v4l2_ctrl_vp8_frame_header const*) ;
 struct vb2_v4l2_buffer* FUNC_1 (struct hantro_ctx*) ;
 int FUNC_2 (struct hantro_dev*,int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct hantro_dev*,int,int ) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_5(struct hantro_ctx *VAR_8,
        const struct v4l2_ctrl_vp8_frame_header *VAR_9)
{
 struct hantro_dev *VAR_10 = VAR_8->dev;
 struct vb2_v4l2_buffer *VAR_11;
 u32 VAR_12 = FUNC_0(VAR_9) ? 10 : 3;
 u32 VAR_13, VAR_14, VAR_15, VAR_16;
 u32 VAR_17, VAR_18;
 dma_addr_t VAR_19;
 u32 VAR_20 = 0;
 u32 VAR_21 = 0;
 unsigned int VAR_22;

 VAR_11 = FUNC_1(VAR_8);
 VAR_19 = FUNC_3(&VAR_11->vb2_buf, 0);
 VAR_15 = VAR_12 * 8 +
    VAR_9->first_part_header_bits + 8;
 VAR_14 = VAR_15 / 8;
 VAR_16 = VAR_15 -
   (VAR_14 & (~VAR_0)) * 8;
 VAR_13 = VAR_9->first_part_size -
    (VAR_14 - VAR_12) +
    (VAR_14 & VAR_0);


 FUNC_4(VAR_10, (VAR_14 & (~VAR_0)) +
      VAR_19, VAR_1);
 FUNC_2(VAR_10, &VAR_5, VAR_16);
 FUNC_2(VAR_10, &VAR_4, VAR_13);
 VAR_17 = (VAR_9->num_dct_parts - 1) * 3;
 VAR_18 = VAR_12 + VAR_9->first_part_size;
 for (VAR_22 = 0; VAR_22 < VAR_9->num_dct_parts; VAR_22++)
  VAR_20 += VAR_9->dct_part_sizes[VAR_22];
 VAR_20 += VAR_17;
 VAR_20 += (VAR_18 & VAR_0);


 FUNC_2(VAR_10, &VAR_6,
    VAR_9->num_dct_parts - 1);


 FUNC_2(VAR_10, &VAR_7, VAR_20);


 for (VAR_22 = 0; VAR_22 < VAR_9->num_dct_parts; VAR_22++) {
  u32 VAR_23 = VAR_18 + VAR_17 + VAR_21;
  u32 VAR_24 = VAR_23 + VAR_19;

  FUNC_2(VAR_10, &VAR_2[VAR_22],
     VAR_24 & (~VAR_0));

  FUNC_2(VAR_10, &VAR_3[VAR_22],
     (VAR_23 & VAR_0) * 8);

  VAR_21 += VAR_9->dct_part_sizes[VAR_22];
 }
}
