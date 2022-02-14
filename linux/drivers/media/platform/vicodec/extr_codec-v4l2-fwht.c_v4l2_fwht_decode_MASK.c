
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct fwht_raw_frame {int * buf; } ;
struct TYPE_2__ {scalar_t__ magic1; scalar_t__ magic2; int size; int quantization; int ycbcr_enc; int xfer_func; int colorspace; int flags; int height; int width; int version; } ;
struct v4l2_fwht_state {unsigned int stride; unsigned int ref_stride; unsigned int coded_height; void* visible_width; void* visible_height; struct fwht_raw_frame ref_frame; TYPE_1__ header; void* quantization; void* ycbcr_enc; void* xfer_func; void* colorspace; struct v4l2_fwht_pixfmt_info* info; } ;
struct v4l2_fwht_pixfmt_info {int pixenc; unsigned int components_num; unsigned int width_div; unsigned int height_div; int planes_num; scalar_t__ id; } ;
struct fwht_cframe {void* size; int * rlc_data; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct fwht_cframe*,int,unsigned int,void*,void*,struct fwht_raw_frame*,unsigned int,unsigned int,struct fwht_raw_frame*,unsigned int,unsigned int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (char*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_3 (struct fwht_raw_frame*,struct v4l2_fwht_pixfmt_info const*,int *,unsigned int) ;

int FUNC_4(struct v4l2_fwht_state *VAR_11, u8 *VAR_12, u8 *VAR_13)
{
 u32 VAR_14;
 struct fwht_cframe VAR_15;
 unsigned int VAR_16 = 3;
 unsigned int VAR_17;
 const struct v4l2_fwht_pixfmt_info *VAR_18;
 unsigned int VAR_19, VAR_20;
 struct fwht_raw_frame VAR_21;
 unsigned int VAR_22 = VAR_11->stride;
 unsigned int VAR_23 = VAR_11->ref_stride;
 unsigned int VAR_24 = VAR_11->stride * VAR_11->coded_height;
 unsigned int VAR_25;

 if (!VAR_11->info)
  return -VAR_0;

 VAR_18 = VAR_11->info;

 VAR_17 = FUNC_1(VAR_11->header.version);
 if (!VAR_17 || VAR_17 > VAR_8) {
  FUNC_2("version %d is not supported, current version is %d\n",
         VAR_17, VAR_8);
  return -VAR_0;
 }

 if (VAR_11->header.magic1 != VAR_6 ||
     VAR_11->header.magic2 != VAR_7)
  return -VAR_0;


 if (FUNC_1(VAR_11->header.width) != VAR_11->visible_width ||
     FUNC_1(VAR_11->header.height) != VAR_11->visible_height)
  return -VAR_0;

 VAR_14 = FUNC_1(VAR_11->header.flags);

 if (VAR_17 >= 2) {
  if ((VAR_14 & VAR_5) != VAR_18->pixenc)
   return -VAR_0;
  VAR_16 = 1 + ((VAR_14 & VAR_3) >>
    VAR_4);
 }

 if (VAR_16 != VAR_18->components_num)
  return -VAR_0;

 VAR_11->colorspace = FUNC_1(VAR_11->header.colorspace);
 VAR_11->xfer_func = FUNC_1(VAR_11->header.xfer_func);
 VAR_11->ycbcr_enc = FUNC_1(VAR_11->header.ycbcr_enc);
 VAR_11->quantization = FUNC_1(VAR_11->header.quantization);
 VAR_15.rlc_data = (__be16 *)VAR_12;
 VAR_15.size = FUNC_1(VAR_11->header.size);

 VAR_19 = (VAR_14 & VAR_2) ? 1 : 2;
 VAR_20 = (VAR_14 & VAR_1) ? 1 : 2;
 if (VAR_19 != VAR_18->width_div ||
     VAR_20 != VAR_18->height_div)
  return -VAR_0;

 if (FUNC_3(&VAR_21, VAR_18, VAR_13, VAR_24))
  return -VAR_0;
 if (VAR_18->planes_num == 3) {
  VAR_22 /= 2;
  VAR_23 /= 2;
 }
 if (VAR_18->id == VAR_9 ||
     VAR_18->id == VAR_10) {
  VAR_22 *= 2;
  VAR_23 *= 2;
 }


 VAR_25 = VAR_11->ref_stride * VAR_11->coded_height;

 if (FUNC_3(&VAR_11->ref_frame, VAR_18, VAR_11->ref_frame.buf,
         VAR_25))
  return -VAR_0;

 if (!FUNC_0(&VAR_15, VAR_14, VAR_16,
   VAR_11->visible_width, VAR_11->visible_height,
   &VAR_11->ref_frame, VAR_11->ref_stride, VAR_23,
   &VAR_21, VAR_11->stride, VAR_22))
  return -VAR_0;
 return 0;
}
