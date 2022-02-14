
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int block_width; int output_block_height; } ;
struct TYPE_12__ {TYPE_2__** params; } ;
struct TYPE_15__ {TYPE_5__ block; TYPE_3__ mem_initializers; } ;
struct TYPE_16__ {TYPE_6__ sp; } ;
struct TYPE_17__ {TYPE_7__ isp; } ;
struct imgu_fw_info {TYPE_8__ info; } ;
struct imgu_device {int dummy; } ;
struct imgu_css_pipe {size_t bindex; TYPE_9__* aux_frames; TYPE_4__* rect; int ** binary_params_cs; } ;
struct imgu_css {int dev; TYPE_1__* fwp; struct imgu_css_pipe* pipes; } ;
struct TYPE_18__ {int bytesperpixel; unsigned int width; int height; unsigned int bytesperline; int * mem; } ;
struct TYPE_13__ {unsigned int width; unsigned int height; } ;
struct TYPE_11__ {int size; } ;
struct TYPE_10__ {struct imgu_fw_info* binary_header; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 struct imgu_device* FUNC_1 (int ) ;
 int FUNC_2 (struct imgu_css*,unsigned int) ;
 scalar_t__ FUNC_3 (struct imgu_device*,int *,int) ;
 void* FUNC_4 (unsigned int,int) ;

__attribute__((used)) static int FUNC_5(struct imgu_css *VAR_13, unsigned int VAR_14)
{
 struct imgu_css_pipe *VAR_15 = &VAR_13->pipes[VAR_14];
 struct imgu_fw_info *VAR_16 = &VAR_13->fwp->binary_header[VAR_15->bindex];
 struct imgu_device *VAR_17 = FUNC_1(VAR_13->dev);
 int VAR_18, VAR_19, VAR_20;
 static const int VAR_21 = 2;
 unsigned int VAR_22, VAR_23;



 for (VAR_19 = VAR_2; VAR_19 < VAR_3; VAR_19++)
  for (VAR_18 = 0; VAR_18 < VAR_1; VAR_18++) {
   if (FUNC_3(
       VAR_17,
       &VAR_15->binary_params_cs[VAR_19 - 1][VAR_18],
       VAR_16->info.isp.sp.mem_initializers.params[VAR_19][VAR_18].size))
    goto out_of_memory;
  }




 VAR_15->aux_frames[VAR_8].bytesperpixel = VAR_21;
 VAR_15->aux_frames[VAR_8].width =
     VAR_15->rect[VAR_10].width;
 VAR_15->aux_frames[VAR_8].height =
    FUNC_0(VAR_15->rect[VAR_10].height,
          VAR_4) + 2 * VAR_6;
 VAR_23 = VAR_15->aux_frames[VAR_8].height;
 VAR_22 = FUNC_0(VAR_15->rect[VAR_10].width,
    2 * VAR_12) + 2 * VAR_5;
 VAR_15->aux_frames[VAR_8].bytesperline =
  VAR_15->aux_frames[VAR_8].bytesperpixel * VAR_22;
 VAR_20 = VAR_22 * VAR_23 * VAR_21 + (VAR_22 / 2) * (VAR_23 / 2) * VAR_21 * 2;
 for (VAR_18 = 0; VAR_18 < VAR_7; VAR_18++)
  if (FUNC_3(
   VAR_17,
   &VAR_15->aux_frames[VAR_8].mem[VAR_18],
   VAR_20))
   goto out_of_memory;


 VAR_15->aux_frames[VAR_9].bytesperpixel = 1;
 VAR_15->aux_frames[VAR_9].width =
   FUNC_4(VAR_15->rect[VAR_11].width,
    VAR_16->info.isp.sp.block.block_width *
    VAR_12);
 VAR_15->aux_frames[VAR_9].height =
   FUNC_4(VAR_15->rect[VAR_11].height,
    VAR_16->info.isp.sp.block.output_block_height);

 VAR_22 = VAR_15->aux_frames[VAR_9].width;
 VAR_15->aux_frames[VAR_9].bytesperline = VAR_22;
 VAR_23 = VAR_15->aux_frames[VAR_9].height;
 VAR_20 = VAR_22 * FUNC_0(VAR_23 * 3 / 2 + 3, 2);
 for (VAR_18 = 0; VAR_18 < VAR_7; VAR_18++)
  if (FUNC_3(
   VAR_17,
   &VAR_15->aux_frames[VAR_9].mem[VAR_18],
   VAR_20))
   goto out_of_memory;

 return 0;

out_of_memory:
 FUNC_2(VAR_13, VAR_14);
 return -VAR_0;
}
