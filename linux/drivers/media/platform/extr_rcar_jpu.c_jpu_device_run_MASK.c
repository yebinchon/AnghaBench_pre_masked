
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vb2_v4l2_buffer {int vb2_buf; } ;
struct TYPE_7__ {unsigned int width; unsigned int height; TYPE_2__* plane_fmt; } ;
struct jpu_q_data {TYPE_4__* fmtinfo; TYPE_3__ format; } ;
struct TYPE_5__ {int m2m_ctx; } ;
struct jpu_ctx {struct jpu* jpu; int compr_quality; scalar_t__ encoder; struct jpu_q_data cap_q; struct jpu_q_data out_q; TYPE_1__ fh; } ;
struct jpu_buffer {unsigned char subsampling; int compr_quality; } ;
struct jpu {int lock; int dev; struct jpu_ctx* curr; } ;
struct TYPE_8__ {unsigned char num_planes; unsigned char subsampling; } ;
struct TYPE_6__ {unsigned int bytesperline; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int) ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 unsigned int VAR_33 ;
 unsigned int VAR_34 ;
 unsigned char VAR_35 ;
 unsigned long VAR_36 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct jpu_ctx*,int) ;
 int FUNC_5 (struct jpu*) ;
 int FUNC_6 (struct jpu*,int ) ;
 scalar_t__ FUNC_7 (struct jpu*) ;
 int FUNC_8 (struct jpu*,unsigned int,int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 struct vb2_v4l2_buffer* FUNC_11 (int ) ;
 struct vb2_v4l2_buffer* FUNC_12 (int ) ;
 unsigned long FUNC_13 (int *,int) ;
 struct jpu_buffer* FUNC_14 (struct vb2_v4l2_buffer*) ;

__attribute__((used)) static void FUNC_15(void *VAR_37)
{
 struct jpu_ctx *VAR_38 = VAR_37;
 struct jpu *VAR_39 = VAR_38->jpu;
 struct jpu_buffer *VAR_40;
 struct jpu_q_data *VAR_41;
 struct vb2_v4l2_buffer *VAR_42, *VAR_43;
 unsigned int VAR_44, VAR_45, VAR_46;
 unsigned char VAR_47, VAR_48;
 unsigned long VAR_49;


 if (FUNC_7(VAR_39)) {
  FUNC_4(VAR_38, 1);
  return;
 }

 FUNC_9(&VAR_38->jpu->lock, VAR_49);

 VAR_39->curr = VAR_38;

 VAR_42 = FUNC_12(VAR_38->fh.m2m_ctx);
 VAR_43 = FUNC_11(VAR_38->fh.m2m_ctx);

 if (VAR_38->encoder) {
  VAR_40 = FUNC_14(VAR_43);
  VAR_41 = &VAR_38->out_q;
 } else {
  VAR_40 = FUNC_14(VAR_42);
  VAR_41 = &VAR_38->cap_q;
 }

 VAR_44 = VAR_41->format.width;
 VAR_45 = VAR_41->format.height;
 VAR_46 = VAR_41->format.plane_fmt[0].bytesperline;
 VAR_47 = VAR_41->fmtinfo->num_planes;
 VAR_48 = VAR_41->fmtinfo->subsampling;

 if (VAR_38->encoder) {
  unsigned long VAR_50, VAR_51, VAR_52;
  unsigned int VAR_53, VAR_54;

  VAR_52 = FUNC_13(&VAR_43->vb2_buf, 0);
  VAR_50 =
   FUNC_13(&VAR_42->vb2_buf, 0);
  if (VAR_47 > 1)
   VAR_51 = FUNC_13(
     &VAR_42->vb2_buf, 1);
  else
   VAR_51 = VAR_50 + VAR_44 * VAR_45;

  VAR_40->compr_quality = VAR_38->compr_quality;

  if (VAR_48 == VAR_35) {
   VAR_53 = VAR_10;
   VAR_54 = VAR_23;
  } else {
   VAR_53 = VAR_11;
   VAR_54 = VAR_24;
  }


  FUNC_8(VAR_39, VAR_7 | VAR_9 | VAR_53 |
     VAR_8, VAR_5);

  FUNC_8(VAR_39, VAR_25 | VAR_54, VAR_22);
  FUNC_8(VAR_39, VAR_17, VAR_16);
  FUNC_8(VAR_39, VAR_34, VAR_32);


  FUNC_8(VAR_39, VAR_50, VAR_31);
  FUNC_8(VAR_39, VAR_51, VAR_27);


  FUNC_8(VAR_39, VAR_46, VAR_29);

  FUNC_8(VAR_39, (VAR_44 >> 8) & VAR_13, VAR_3);
  FUNC_8(VAR_39, VAR_44 & VAR_13, VAR_2);

  FUNC_8(VAR_39, (VAR_45 >> 8) & VAR_13, VAR_15);
  FUNC_8(VAR_39, VAR_45 & VAR_13, VAR_14);

  FUNC_8(VAR_39, VAR_44, VAR_28);
  FUNC_8(VAR_39, VAR_45, VAR_30);

  FUNC_8(VAR_39, VAR_52 + VAR_36, VAR_26);

  FUNC_8(VAR_39, 0 << FUNC_2(1) | 1 << FUNC_2(2) |
     1 << FUNC_2(3), VAR_12);

  FUNC_8(VAR_39, 0 << FUNC_0(1) | 0 << FUNC_1(1) |
     1 << FUNC_0(2) | 1 << FUNC_1(2) |
     1 << FUNC_0(3) | 1 << FUNC_1(3),
     VAR_4);

  FUNC_6(VAR_39, VAR_38->compr_quality);
  FUNC_5(VAR_39);
 } else {
  unsigned long VAR_55, VAR_56, VAR_57;

  if (VAR_40->subsampling != VAR_48) {
   FUNC_3(VAR_38->jpu->dev,
    "src and dst formats do not match.\n");
   FUNC_10(&VAR_38->jpu->lock, VAR_49);
   FUNC_4(VAR_38, 0);
   return;
  }

  VAR_55 = FUNC_13(&VAR_42->vb2_buf, 0);
  VAR_56 =
   FUNC_13(&VAR_43->vb2_buf, 0);
  if (VAR_41->fmtinfo->num_planes > 1)
   VAR_57 = FUNC_13(
     &VAR_43->vb2_buf, 1);
  else
   VAR_57 = VAR_56 + VAR_44 * VAR_45;


  FUNC_8(VAR_39, VAR_6 | VAR_9, VAR_5);
  FUNC_8(VAR_39, VAR_25, VAR_22);
  FUNC_8(VAR_39, VAR_17, VAR_16);


  FUNC_8(VAR_39, VAR_34 | VAR_33, VAR_32);


  FUNC_8(VAR_39, VAR_55, VAR_21);
  FUNC_8(VAR_39, VAR_56, VAR_20);
  FUNC_8(VAR_39, VAR_57, VAR_18);

  FUNC_8(VAR_39, VAR_46, VAR_19);
 }


 FUNC_8(VAR_39, VAR_1, VAR_0);

 FUNC_10(&VAR_38->jpu->lock, VAR_49);
}
