
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct ipu3_uapi_params {int xnr3_dmem_params; int tnr3_dmem_params; } ;
struct TYPE_11__ {int y0; int u0; int v0; } ;
struct ipu3_uapi_isp_xnr3_params {int knee_y1; int knee_y2; TYPE_10__ alpha; } ;
struct ipu3_uapi_isp_tnr3_params {int knee_y1; int knee_y2; TYPE_10__ alpha; } ;
struct ipu3_uapi_flags {scalar_t__ xnr3_dmem_params; scalar_t__ tnr3_dmem_params; } ;
struct TYPE_20__ {int xnr3; int tnr3; } ;
struct imgu_fw_param_memory_offsets {TYPE_9__ dmem; } ;
struct TYPE_16__ {TYPE_4__** params; } ;
struct TYPE_17__ {TYPE_5__ mem_initializers; } ;
struct TYPE_18__ {TYPE_6__ sp; } ;
struct TYPE_19__ {TYPE_7__ isp; } ;
struct TYPE_13__ {int* offsets; } ;
struct TYPE_14__ {TYPE_2__ memory_offsets; } ;
struct imgu_fw_info {TYPE_8__ info; TYPE_3__ blob; } ;
struct imgu_css_pipe {size_t bindex; scalar_t__ pipe_id; } ;
struct imgu_css {TYPE_1__* fwp; struct imgu_css_pipe* pipes; } ;
typedef enum imgu_abi_param_class { ____Placeholder_imgu_abi_param_class } imgu_abi_param_class ;
typedef enum imgu_abi_memories { ____Placeholder_imgu_abi_memories } imgu_abi_memories ;
struct TYPE_15__ {int size; } ;
struct TYPE_12__ {struct imgu_fw_info* binary_header; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct ipu3_uapi_isp_xnr3_params*) ;
 int FUNC_1 (struct ipu3_uapi_isp_xnr3_params*) ;
 struct ipu3_uapi_isp_xnr3_params* FUNC_2 (struct imgu_css*,unsigned int,int,int *,void*,void*,int const,int *,int) ;
 int FUNC_3 (void*,int ,int ) ;

int FUNC_4(struct imgu_css *VAR_4, unsigned int VAR_5,
         struct ipu3_uapi_flags *VAR_6,
         void *VAR_7, void *VAR_8,
         struct ipu3_uapi_params *VAR_9)
{
 struct imgu_css_pipe *VAR_10 = &VAR_4->pipes[VAR_5];
 const struct imgu_fw_info *VAR_11 =
  &VAR_4->fwp->binary_header[VAR_10->bindex];
 struct imgu_fw_param_memory_offsets *VAR_12 = (void *)VAR_4->fwp +
  VAR_11->blob.memory_offsets.offsets[VAR_2];

 struct ipu3_uapi_isp_tnr3_params *VAR_13 = ((void*)0);
 struct ipu3_uapi_isp_xnr3_params *VAR_14;

 const enum imgu_abi_param_class VAR_15 = VAR_2;
 const enum imgu_abi_memories VAR_16 = VAR_1;



 FUNC_3(VAR_7, 0, VAR_11->info.isp.sp.mem_initializers.params[VAR_15][VAR_16].size);


 if (VAR_10->pipe_id == VAR_3) {
  VAR_13 = FUNC_2(VAR_4, VAR_5,
          VAR_6 && VAR_6->tnr3_dmem_params,
          &VAR_9->tnr3_dmem_params,
          VAR_8, VAR_7, VAR_16,
          &VAR_12->dmem.tnr3,
          sizeof(*VAR_13));
  if (!FUNC_1(VAR_13)) {

   VAR_13->knee_y1 = 768;
   VAR_13->knee_y2 = 1280;
  }
 }



 VAR_14 = FUNC_2(VAR_4, VAR_5, VAR_6 && VAR_6->xnr3_dmem_params,
         &VAR_9->xnr3_dmem_params, VAR_8, VAR_7,
         VAR_16, &VAR_12->dmem.xnr3, sizeof(*VAR_14));
 if (!FUNC_1(VAR_14)) {

  VAR_14->alpha.y0 = 2047;
  VAR_14->alpha.u0 = 2047;
  VAR_14->alpha.v0 = 2047;
 }

 return FUNC_0(VAR_13) || FUNC_0(VAR_14) ? -VAR_0 : 0;
}
