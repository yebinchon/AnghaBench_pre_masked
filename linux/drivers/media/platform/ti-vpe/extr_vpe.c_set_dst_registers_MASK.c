
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct vpe_mmr_adb {int* out_fmt_reg; } ;
struct vpe_fmt {scalar_t__ fourcc; scalar_t__* vpdma_fmt; } ;
struct TYPE_4__ {struct vpe_mmr_adb* addr; } ;
struct vpe_ctx {int load_mmrs; TYPE_3__* dev; TYPE_2__* q_data; TYPE_1__ mmr_adb; } ;
struct vpdma_data_format {int dummy; } ;
typedef enum v4l2_colorspace { ____Placeholder_v4l2_colorspace } v4l2_colorspace ;
struct TYPE_6__ {int vpdma; } ;
struct TYPE_5__ {int colorspace; struct vpe_fmt* fmt; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,struct vpdma_data_format*,int) ;

__attribute__((used)) static void FUNC_1(struct vpe_ctx *VAR_9)
{
 struct vpe_mmr_adb *VAR_10 = VAR_9->mmr_adb.addr;
 enum v4l2_colorspace VAR_11 = VAR_9->q_data[VAR_0].colorspace;
 struct vpe_fmt *VAR_12 = VAR_9->q_data[VAR_0].fmt;
 u32 VAR_13 = 0;

 if (VAR_11 == VAR_1) {
  VAR_13 |= VAR_8;
  FUNC_0(VAR_9->dev->vpdma,
   (struct vpdma_data_format *)VAR_12->vpdma_fmt[0], 0xff);
 } else if (VAR_12->fourcc == VAR_3)
  VAR_13 |= VAR_4;





 VAR_13 |= VAR_7 | VAR_5;

 if (VAR_12->fourcc != VAR_2)
  VAR_13 |= VAR_6;

 VAR_10->out_fmt_reg[0] = VAR_13;

 VAR_9->load_mmrs = 1;
}
