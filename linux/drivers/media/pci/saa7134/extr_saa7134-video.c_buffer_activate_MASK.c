
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int dma; } ;
struct saa7134_dmaqueue {int timeout; TYPE_4__ pt; } ;
struct saa7134_dev {unsigned long width; unsigned long height; int field; TYPE_5__* fmt; } ;
struct TYPE_7__ {TYPE_1__* vb2_queue; } ;
struct TYPE_8__ {TYPE_2__ vb2_buf; } ;
struct saa7134_buf {scalar_t__ top_seen; TYPE_3__ vb2; } ;
struct TYPE_10__ {int depth; unsigned long hshift; unsigned long vshift; scalar_t__ uvswap; scalar_t__ planar; scalar_t__ wswap; scalar_t__ bswap; int pm; scalar_t__ yuv; } ;
struct TYPE_6__ {struct saa7134_dmaqueue* drv_priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (int *,scalar_t__) ;
 unsigned long FUNC_7 (struct saa7134_buf*) ;
 int FUNC_8 (struct saa7134_dev*) ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,unsigned long) ;
 int FUNC_12 (struct saa7134_dev*,int ,unsigned long,unsigned long,scalar_t__) ;
 int FUNC_13 (char*,...) ;

__attribute__((used)) static int FUNC_14(struct saa7134_dev *VAR_8,
      struct saa7134_buf *VAR_9,
      struct saa7134_buf *VAR_10)
{
 struct saa7134_dmaqueue *VAR_11 = VAR_9->vb2.vb2_buf.vb2_queue->drv_priv;
 unsigned long VAR_12,VAR_13,VAR_14;
 unsigned long VAR_15,VAR_16,VAR_17,VAR_18,VAR_19;

 FUNC_13("buffer_activate buf=%p\n", VAR_9);
 VAR_9->top_seen = 0;

 FUNC_12(VAR_8, VAR_6, VAR_8->width, VAR_8->height,
   FUNC_5(VAR_8->field));
 if (VAR_8->fmt->yuv)
  FUNC_9(FUNC_0(VAR_6), 0x3f, 0x03);
 else
  FUNC_9(FUNC_0(VAR_6), 0x3f, 0x01);
 FUNC_10(VAR_1, VAR_8->fmt->pm);


 VAR_12 = FUNC_7(VAR_9);
 if (VAR_8->fmt->planar)
  VAR_14 = VAR_8->width;
 else
  VAR_14 = (VAR_8->width * VAR_8->fmt->depth) / 8;
 VAR_13 = VAR_3 |
  VAR_4 |
  (VAR_11->pt.dma >> 12);
 if (VAR_8->fmt->bswap)
  VAR_13 |= VAR_2;
 if (VAR_8->fmt->wswap)
  VAR_13 |= VAR_5;
 if (FUNC_5(VAR_8->field)) {

  FUNC_11(FUNC_1(0),VAR_12);
  FUNC_11(FUNC_2(0),VAR_12+VAR_14);
  FUNC_11(FUNC_4(0),VAR_14*2);
 } else {

  FUNC_11(FUNC_1(0),VAR_12);
  FUNC_11(FUNC_2(0),VAR_12);
  FUNC_11(FUNC_4(0),VAR_14);
 }
 FUNC_11(FUNC_3(0),VAR_13);

 if (VAR_8->fmt->planar) {

  VAR_15 = VAR_14 >> VAR_8->fmt->hshift;
  VAR_16 = VAR_8->height >> VAR_8->fmt->vshift;
  VAR_17 = VAR_12 + VAR_14 * VAR_8->height;
  VAR_18 = VAR_17 + VAR_15 * VAR_16;
  if (VAR_8->fmt->uvswap)
   VAR_19 = VAR_17, VAR_17 = VAR_18, VAR_18 = VAR_19;
  FUNC_13("uv: bpl=%ld lines=%ld base2/3=%ld/%ld\n",
   VAR_15,VAR_16,VAR_17,VAR_18);
  if (FUNC_5(VAR_8->field)) {

   FUNC_11(FUNC_1(4),VAR_17);
   FUNC_11(FUNC_2(4),VAR_17+VAR_15);
   FUNC_11(FUNC_4(4),VAR_15*2);
   FUNC_11(FUNC_1(5),VAR_18);
   FUNC_11(FUNC_2(5),VAR_18+VAR_15);
   FUNC_11(FUNC_4(5),VAR_15*2);
  } else {

   FUNC_11(FUNC_1(4),VAR_17);
   FUNC_11(FUNC_2(4),VAR_17);
   FUNC_11(FUNC_4(4),VAR_15);
   FUNC_11(FUNC_1(5),VAR_18);
   FUNC_11(FUNC_2(5),VAR_18);
   FUNC_11(FUNC_4(5),VAR_15);
  }
  FUNC_11(FUNC_3(4),VAR_13);
  FUNC_11(FUNC_3(5),VAR_13);
 }


 FUNC_8(VAR_8);
 FUNC_6(&VAR_11->timeout, VAR_7 + VAR_0);
 return 0;
}
