
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_21__ {int max_height; int max_width; int min_height; int min_width; } ;
struct TYPE_20__ {int max_height; int max_width; } ;
struct TYPE_19__ {scalar_t__ input_raw; scalar_t__ input_feeder; scalar_t__ input_yuv; int vf_veceven; } ;
struct TYPE_18__ {int max_height; int max_width; int min_height; int min_width; } ;
struct TYPE_17__ {int is_variable; } ;
struct TYPE_16__ {int supported_bds_factors; } ;
struct TYPE_15__ {int mode; } ;
struct TYPE_22__ {TYPE_8__ output; TYPE_7__ internal; TYPE_6__ enable; TYPE_5__ input; TYPE_4__ vf_dec; TYPE_3__ bds; TYPE_2__ pipeline; int id; } ;
struct TYPE_12__ {unsigned int num_output_formats; unsigned int num_vf_formats; int * vf_formats; int * output_formats; TYPE_9__ sp; int num_output_pins; } ;
struct TYPE_13__ {TYPE_10__ isp; } ;
struct TYPE_14__ {int size; } ;
struct imgu_fw_info {scalar_t__ type; TYPE_11__ info; TYPE_1__ blob; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_1, struct imgu_fw_info *VAR_2,
        const char *VAR_3)
{
 unsigned int VAR_4;

 FUNC_0(VAR_1, "found firmware binary type %i size %i name %s\n",
  VAR_2->type, VAR_2->blob.size, VAR_3);
 if (VAR_2->type != VAR_0)
  return;

 FUNC_0(VAR_1, "    id %i mode %i bds 0x%x veceven %i/%i out_pins %i\n",
  VAR_2->info.isp.sp.id, VAR_2->info.isp.sp.pipeline.mode,
  VAR_2->info.isp.sp.bds.supported_bds_factors,
  VAR_2->info.isp.sp.enable.vf_veceven,
  VAR_2->info.isp.sp.vf_dec.is_variable,
  VAR_2->info.isp.num_output_pins);

 FUNC_0(VAR_1, "    input (%i,%i)-(%i,%i) formats %s%s%s\n",
  VAR_2->info.isp.sp.input.min_width,
  VAR_2->info.isp.sp.input.min_height,
  VAR_2->info.isp.sp.input.max_width,
  VAR_2->info.isp.sp.input.max_height,
  VAR_2->info.isp.sp.enable.input_yuv ? "yuv420 " : "",
  VAR_2->info.isp.sp.enable.input_feeder ||
  VAR_2->info.isp.sp.enable.input_raw ? "raw8 raw10 " : "",
  VAR_2->info.isp.sp.enable.input_raw ? "raw12" : "");

 FUNC_0(VAR_1, "    internal (%i,%i)\n",
  VAR_2->info.isp.sp.internal.max_width,
  VAR_2->info.isp.sp.internal.max_height);

 FUNC_0(VAR_1, "    output (%i,%i)-(%i,%i) formats",
  VAR_2->info.isp.sp.output.min_width,
  VAR_2->info.isp.sp.output.min_height,
  VAR_2->info.isp.sp.output.max_width,
  VAR_2->info.isp.sp.output.max_height);
 for (VAR_4 = 0; VAR_4 < VAR_2->info.isp.num_output_formats; VAR_4++)
  FUNC_0(VAR_1, " %i", VAR_2->info.isp.output_formats[VAR_4]);
 FUNC_0(VAR_1, " vf");
 for (VAR_4 = 0; VAR_4 < VAR_2->info.isp.num_vf_formats; VAR_4++)
  FUNC_0(VAR_1, " %i", VAR_2->info.isp.vf_formats[VAR_4]);
 FUNC_0(VAR_1, "\n");
}
