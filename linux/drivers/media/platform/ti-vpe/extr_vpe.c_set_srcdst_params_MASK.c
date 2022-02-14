
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int width; unsigned int height; } ;
struct vpe_q_data {int flags; int width; int height; int colorspace; TYPE_2__ c_rect; } ;
struct vpe_mmr_adb {int * sc_regs17; int * sc_regs8; int * sc_regs0; int * csc_regs; } ;
struct TYPE_9__ {int addr; } ;
struct TYPE_8__ {int addr; } ;
struct TYPE_6__ {struct vpe_mmr_adb* addr; } ;
struct vpe_ctx {int deinterlacing; TYPE_5__* dev; TYPE_4__ sc_coeff_v; TYPE_3__ sc_coeff_h; int ** src_vbs; int field; scalar_t__ sequence; TYPE_1__ mmr_adb; struct vpe_q_data* q_data; } ;
struct vpdma_data_format {int depth; } ;
struct TYPE_10__ {int sc; int csc; } ;


 int FUNC_0 (int,int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *,int ,int ) ;
 int FUNC_2 (struct vpe_ctx*) ;
 int FUNC_3 (struct vpe_ctx*,size_t) ;
 int FUNC_4 (int ,int *,int *,int *,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_5 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_6 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_7 (struct vpe_ctx*) ;
 int FUNC_8 (struct vpe_ctx*) ;
 struct vpdma_data_format* VAR_6 ;

__attribute__((used)) static int FUNC_9(struct vpe_ctx *VAR_7)
{
 struct vpe_q_data *VAR_8 = &VAR_7->q_data[VAR_1];
 struct vpe_q_data *VAR_9 = &VAR_7->q_data[VAR_0];
 struct vpe_mmr_adb *VAR_10 = VAR_7->mmr_adb.addr;
 unsigned int VAR_11 = VAR_8->c_rect.width;
 unsigned int VAR_12 = VAR_8->c_rect.height;
 unsigned int VAR_13 = VAR_9->c_rect.width;
 unsigned int VAR_14 = VAR_9->c_rect.height;
 size_t VAR_15;
 int VAR_16;

 VAR_7->sequence = 0;
 VAR_7->field = VAR_3;

 if ((VAR_8->flags & VAR_2) &&
   !(VAR_9->flags & VAR_2)) {
  int VAR_17;
  const struct vpdma_data_format *VAR_18 =
   &VAR_6[VAR_4];
  VAR_17 = FUNC_0((VAR_8->width * VAR_18->depth) >> 3,
     VAR_5);
  VAR_15 = VAR_17 * VAR_8->height;

  VAR_7->deinterlacing = 1;
  VAR_12 <<= 1;
 } else {
  VAR_7->deinterlacing = 0;
  VAR_15 = 0;
 }

 FUNC_2(VAR_7);
 VAR_7->src_vbs[2] = VAR_7->src_vbs[1] = VAR_7->src_vbs[0] = ((void*)0);

 VAR_16 = FUNC_3(VAR_7, VAR_15);
 if (VAR_16)
  return VAR_16;

 FUNC_7(VAR_7);
 FUNC_8(VAR_7);

 FUNC_1(VAR_7->dev->csc, &VAR_10->csc_regs[0],
  VAR_8->colorspace, VAR_9->colorspace);

 FUNC_5(VAR_7->dev->sc, VAR_7->sc_coeff_h.addr, VAR_11, VAR_13);
 FUNC_6(VAR_7->dev->sc, VAR_7->sc_coeff_v.addr, VAR_12, VAR_14);

 FUNC_4(VAR_7->dev->sc, &VAR_10->sc_regs0[0],
  &VAR_10->sc_regs8[0], &VAR_10->sc_regs17[0],
  VAR_11, VAR_12, VAR_13, VAR_14);

 return 0;
}
