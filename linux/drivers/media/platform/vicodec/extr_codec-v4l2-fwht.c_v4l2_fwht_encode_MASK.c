
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct v4l2_fwht_state {unsigned int stride; unsigned int coded_height; int gop_cnt; int gop_size; int visible_width; int visible_height; int colorspace; int xfer_func; int ycbcr_enc; int quantization; int ref_frame; int p_frame_qp; int i_frame_qp; struct v4l2_fwht_pixfmt_info* info; } ;
struct v4l2_fwht_pixfmt_info {int planes_num; scalar_t__ id; int components_num; int pixenc; } ;
struct fwht_raw_frame {int height_div; int width_div; } ;
struct fwht_cframe_hdr {void* size; void* quantization; void* ycbcr_enc; void* xfer_func; void* colorspace; void* flags; void* height; void* width; void* version; int magic2; int magic1; } ;
struct fwht_cframe {int size; int * rlc_data; int p_frame_qp; int i_frame_qp; } ;
typedef int __be16 ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (struct fwht_raw_frame*,int *,struct fwht_cframe*,int,int,int,int,unsigned int,unsigned int) ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct fwht_raw_frame*,struct v4l2_fwht_pixfmt_info const*,int *,unsigned int) ;

int FUNC_3(struct v4l2_fwht_state *VAR_19, u8 *VAR_20, u8 *VAR_21)
{
 unsigned int VAR_22 = VAR_19->stride * VAR_19->coded_height;
 unsigned int VAR_23 = VAR_19->stride;
 const struct v4l2_fwht_pixfmt_info *VAR_24 = VAR_19->info;
 struct fwht_cframe_hdr *VAR_25;
 struct fwht_cframe VAR_26;
 struct fwht_raw_frame VAR_27;
 u32 VAR_28;
 u32 VAR_29 = 0;

 if (!VAR_24)
  return -VAR_0;

 if (FUNC_2(&VAR_27, VAR_24, VAR_20, VAR_22))
  return -VAR_0;

 if (VAR_24->planes_num == 3)
  VAR_23 /= 2;

 if (VAR_24->id == VAR_17 ||
     VAR_24->id == VAR_18)
  VAR_23 *= 2;

 VAR_26.i_frame_qp = VAR_19->i_frame_qp;
 VAR_26.p_frame_qp = VAR_19->p_frame_qp;
 VAR_26.rlc_data = (__be16 *)(VAR_21 + sizeof(*VAR_25));

 VAR_28 = FUNC_0(&VAR_27, &VAR_19->ref_frame, &VAR_26,
         !VAR_19->gop_cnt,
         VAR_19->gop_cnt == VAR_19->gop_size - 1,
         VAR_19->visible_width,
         VAR_19->visible_height,
         VAR_19->stride, VAR_23);
 if (!(VAR_28 & VAR_12))
  VAR_19->gop_cnt = 0;
 if (++VAR_19->gop_cnt >= VAR_19->gop_size)
  VAR_19->gop_cnt = 0;

 VAR_25 = (struct fwht_cframe_hdr *)VAR_21;
 VAR_25->magic1 = VAR_14;
 VAR_25->magic2 = VAR_15;
 VAR_25->version = FUNC_1(VAR_16);
 VAR_25->width = FUNC_1(VAR_19->visible_width);
 VAR_25->height = FUNC_1(VAR_19->visible_height);
 VAR_29 |= (VAR_24->components_num - 1) << VAR_8;
 VAR_29 |= VAR_24->pixenc;
 if (VAR_28 & VAR_13)
  VAR_29 |= VAR_11;
 if (VAR_28 & VAR_2)
  VAR_29 |= VAR_5;
 if (VAR_28 & VAR_3)
  VAR_29 |= VAR_9;
 if (VAR_28 & VAR_1)
  VAR_29 |= VAR_4;
 if (!(VAR_28 & VAR_12))
  VAR_29 |= VAR_10;
 if (VAR_27.height_div == 1)
  VAR_29 |= VAR_6;
 if (VAR_27.width_div == 1)
  VAR_29 |= VAR_7;
 VAR_25->flags = FUNC_1(VAR_29);
 VAR_25->colorspace = FUNC_1(VAR_19->colorspace);
 VAR_25->xfer_func = FUNC_1(VAR_19->xfer_func);
 VAR_25->ycbcr_enc = FUNC_1(VAR_19->ycbcr_enc);
 VAR_25->quantization = FUNC_1(VAR_19->quantization);
 VAR_25->size = FUNC_1(VAR_26.size);
 return VAR_26.size + sizeof(*VAR_25);
}
