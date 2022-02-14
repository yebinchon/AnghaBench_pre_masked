
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int dma; } ;
struct saa7134_dmaqueue {int timeout; TYPE_4__ pt; } ;
struct saa7134_dev {unsigned long vbi_hlen; unsigned long vbi_vlen; } ;
struct TYPE_6__ {TYPE_1__* vb2_queue; } ;
struct TYPE_7__ {TYPE_2__ vb2_buf; } ;
struct saa7134_buf {scalar_t__ top_seen; TYPE_3__ vb2; } ;
struct TYPE_5__ {struct saa7134_dmaqueue* drv_priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int *,scalar_t__) ;
 unsigned long FUNC_5 (struct saa7134_buf*) ;
 int FUNC_6 (struct saa7134_dev*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (struct saa7134_dev*,struct saa7134_buf*,int ) ;
 int FUNC_10 (char*,struct saa7134_buf*) ;

__attribute__((used)) static int FUNC_11(struct saa7134_dev *VAR_8,
      struct saa7134_buf *VAR_9,
      struct saa7134_buf *VAR_10)
{
 struct saa7134_dmaqueue *VAR_11 = VAR_9->vb2.vb2_buf.vb2_queue->drv_priv;
 unsigned long VAR_12, VAR_13;

 FUNC_10("buffer_activate [%p]\n", VAR_9);
 VAR_9->top_seen = 0;

 FUNC_9(VAR_8, VAR_9, VAR_5);
 FUNC_9(VAR_8, VAR_9, VAR_6);
 FUNC_7(VAR_1, 0x06);
 FUNC_7(VAR_2, 0x06);


 VAR_13 = FUNC_5(VAR_9);
 VAR_12 = VAR_3 |
  VAR_4 |
  (VAR_11->pt.dma >> 12);
 FUNC_8(FUNC_0(2), VAR_13);
 FUNC_8(FUNC_1(2), VAR_13 + VAR_8->vbi_hlen * VAR_8->vbi_vlen);
 FUNC_8(FUNC_3(2), VAR_8->vbi_hlen);
 FUNC_8(FUNC_2(2), VAR_12);
 FUNC_8(FUNC_0(3), VAR_13);
 FUNC_8(FUNC_1(3), VAR_13 + VAR_8->vbi_hlen * VAR_8->vbi_vlen);
 FUNC_8(FUNC_3(3), VAR_8->vbi_hlen);
 FUNC_8(FUNC_2(3), VAR_12);


 FUNC_6(VAR_8);
 FUNC_4(&VAR_11->timeout, VAR_7 + VAR_0);

 return 0;
}
