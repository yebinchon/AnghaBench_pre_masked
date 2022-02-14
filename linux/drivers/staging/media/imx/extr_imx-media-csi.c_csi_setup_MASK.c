
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct v4l2_rect {int width; int height; } ;
struct v4l2_mbus_framefmt {int width; } ;
struct v4l2_mbus_config {int flags; int type; } ;
struct imx_media_pixfmt {int cycles; } ;
struct TYPE_10__ {int width; int height; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_9__ {TYPE_2__ mipi_csi2; TYPE_1__ parallel; } ;
struct TYPE_12__ {TYPE_3__ bus; int bus_type; } ;
struct csi_priv {size_t active_output_pad; scalar_t__ dest; int csi; TYPE_5__* skip; TYPE_4__ compose; struct v4l2_rect crop; TYPE_6__ upstream_ep; struct v4l2_mbus_framefmt* format_mbus; struct imx_media_pixfmt** cc; } ;
struct TYPE_11__ {scalar_t__ max_ratio; int skip_smfc; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct v4l2_mbus_config*,struct v4l2_mbus_framefmt*,struct v4l2_mbus_framefmt*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int ,scalar_t__,int ) ;
 int FUNC_5 (int ,struct v4l2_rect*) ;
 scalar_t__ FUNC_6 (TYPE_6__*) ;

__attribute__((used)) static int FUNC_7(struct csi_priv *VAR_2)
{
 struct v4l2_mbus_framefmt *VAR_3, *VAR_4;
 const struct imx_media_pixfmt *VAR_5;
 struct v4l2_mbus_config VAR_6;
 struct v4l2_mbus_framefmt VAR_7;
 struct v4l2_rect VAR_8;

 VAR_3 = &VAR_2->format_mbus[VAR_0];
 VAR_5 = VAR_2->cc[VAR_0];
 VAR_4 = &VAR_2->format_mbus[VAR_2->active_output_pad];


 VAR_6.type = VAR_2->upstream_ep.bus_type;
 VAR_6.flags = FUNC_6(&VAR_2->upstream_ep) ?
  VAR_2->upstream_ep.bus.parallel.flags :
  VAR_2->upstream_ep.bus.mipi_csi2.flags;

 VAR_7 = *VAR_3;
 VAR_8 = VAR_2->crop;





 if (FUNC_6(&VAR_2->upstream_ep) && VAR_5->cycles) {
  VAR_7.width *= VAR_5->cycles;
  VAR_8.width *= VAR_5->cycles;
 }

 FUNC_5(VAR_2->csi, &VAR_8);

 FUNC_3(VAR_2->csi,
        VAR_2->crop.width == 2 * VAR_2->compose.width,
        VAR_2->crop.height == 2 * VAR_2->compose.height);

 FUNC_1(VAR_2->csi, &VAR_6, &VAR_7, VAR_4);

 FUNC_2(VAR_2->csi, VAR_2->dest);

 if (VAR_2->dest == VAR_1)
  FUNC_4(VAR_2->csi, VAR_2->skip->skip_smfc,
          VAR_2->skip->max_ratio - 1, 0);

 FUNC_0(VAR_2->csi);

 return 0;
}
