
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int width; } ;
struct camif_dma_offset {int line; int initial; } ;
struct camif_frame {TYPE_2__ rect; struct camif_dma_offset dma_offset; } ;
struct camif_vp {int offset; int id; struct camif_fmt* out_fmt; struct camif_frame out_frame; struct camif_dev* camif; } ;
struct camif_fmt {int ybpp; } ;
struct camif_dev {TYPE_1__* variant; } ;
struct TYPE_3__ {scalar_t__ ip_revision; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,unsigned int*,unsigned int*) ;
 int FUNC_11 (struct camif_vp*) ;
 int FUNC_12 (struct camif_dev*,int ) ;
 int FUNC_13 (struct camif_dev*,int ,int) ;
 int FUNC_14 (char*,unsigned int,unsigned int) ;

void FUNC_15(struct camif_vp *VAR_2)
{
 struct camif_dev *VAR_3 = VAR_2->camif;
 struct camif_frame *VAR_4 = &VAR_2->out_frame;
 const struct camif_fmt *VAR_5 = VAR_2->out_fmt;
 unsigned int VAR_6 = 0, VAR_7 = 0;
 u32 VAR_8;

 FUNC_11(VAR_2);

 if (VAR_3->variant->ip_revision == VAR_1) {
  struct camif_dma_offset *VAR_9 = &VAR_4->dma_offset;

  VAR_8 = FUNC_8(VAR_9->initial);
  VAR_8 |= FUNC_9(VAR_9->line);
  FUNC_13(VAR_3, FUNC_7(VAR_2->id), VAR_8);
  FUNC_13(VAR_3, FUNC_5(VAR_2->id), VAR_8);
  FUNC_13(VAR_3, FUNC_6(VAR_2->id), VAR_8);
 }


 FUNC_10(VAR_4->rect.width, VAR_5->ybpp, &VAR_6, &VAR_7);

 VAR_8 = FUNC_12(VAR_3, FUNC_4(VAR_2->id, VAR_2->offset));
 VAR_8 &= ~VAR_0;

 VAR_8 |= FUNC_2(VAR_6) | FUNC_3(VAR_7);
 VAR_8 |= FUNC_0(VAR_6 / 2) | FUNC_1(VAR_7 / 2);

 FUNC_13(VAR_3, FUNC_4(VAR_2->id, VAR_2->offset), VAR_8);

 FUNC_14("ymburst: %u, yrburst: %u\n", VAR_6, VAR_7);
}
