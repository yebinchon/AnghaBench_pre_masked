
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


struct ipu3_uapi_params {int xnr3_vmem_params; int tnr3_vmem_params; int lin_vmem_params; } ;
struct ipu3_uapi_isp_xnr3_vmem_params {int* lin_lutlow_gr; int* lin_lutlow_r; int* lin_lutlow_b; int* lin_lutlow_gb; int* lin_lutdif_gr; int* lin_lutdif_r; int* lin_lutdif_b; int* lin_lutdif_gb; int* sigma; int * c; int * b; int * a; int * x; } ;
struct ipu3_uapi_isp_tnr3_vmem_params {int* lin_lutlow_gr; int* lin_lutlow_r; int* lin_lutlow_b; int* lin_lutlow_gb; int* lin_lutdif_gr; int* lin_lutdif_r; int* lin_lutdif_b; int* lin_lutdif_gb; int* sigma; int * c; int * b; int * a; int * x; } ;
struct ipu3_uapi_isp_lin_vmem_params {int* lin_lutlow_gr; int* lin_lutlow_r; int* lin_lutlow_b; int* lin_lutlow_gb; int* lin_lutdif_gr; int* lin_lutdif_r; int* lin_lutdif_b; int* lin_lutdif_gb; int* sigma; int * c; int * b; int * a; int * x; } ;
struct ipu3_uapi_flags {scalar_t__ xnr3_vmem_params; scalar_t__ tnr3_vmem_params; scalar_t__ lin_vmem_params; } ;
struct TYPE_12__ {int xnr3; int tnr3; int lin; } ;
struct imgu_fw_param_memory_offsets {TYPE_10__ vmem; } ;
struct TYPE_18__ {TYPE_4__** params; } ;
struct TYPE_19__ {TYPE_5__ mem_initializers; } ;
struct TYPE_20__ {TYPE_6__ sp; } ;
struct TYPE_21__ {TYPE_7__ isp; } ;
struct TYPE_15__ {int* offsets; } ;
struct TYPE_16__ {TYPE_2__ memory_offsets; } ;
struct imgu_fw_info {TYPE_8__ info; TYPE_3__ blob; } ;
struct imgu_css {TYPE_9__* pipes; TYPE_1__* fwp; } ;
typedef enum imgu_abi_param_class { ____Placeholder_imgu_abi_param_class } imgu_abi_param_class ;
typedef enum imgu_abi_memories { ____Placeholder_imgu_abi_memories } imgu_abi_memories ;
struct TYPE_22__ {size_t bindex; scalar_t__ pipe_id; } ;
struct TYPE_17__ {int size; } ;
struct TYPE_14__ {struct imgu_fw_info* binary_header; } ;
struct TYPE_13__ {int * c; int * b; int * a; int * x; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_0 (struct ipu3_uapi_isp_xnr3_vmem_params*) ;
 int FUNC_1 (struct ipu3_uapi_isp_xnr3_vmem_params*) ;
 struct ipu3_uapi_isp_xnr3_vmem_params* FUNC_2 (struct imgu_css*,unsigned int,int,int *,void*,void*,int const,int *,int) ;
 TYPE_11__ VAR_7 ;
 int FUNC_3 (void*,int ,int ) ;

int FUNC_4(struct imgu_css *VAR_8, unsigned int VAR_9,
         struct ipu3_uapi_flags *VAR_10,
         void *VAR_11, void *VAR_12,
         struct ipu3_uapi_params *VAR_13)
{
 const struct imgu_fw_info *VAR_14 =
  &VAR_8->fwp->binary_header[VAR_8->pipes[VAR_9].bindex];
 struct imgu_fw_param_memory_offsets *VAR_15 = (void *)VAR_8->fwp +
  VAR_14->blob.memory_offsets.offsets[VAR_2];
 struct ipu3_uapi_isp_lin_vmem_params *VAR_16 = ((void*)0);
 struct ipu3_uapi_isp_tnr3_vmem_params *VAR_17 = ((void*)0);
 struct ipu3_uapi_isp_xnr3_vmem_params *VAR_18 = ((void*)0);
 const enum imgu_abi_param_class VAR_19 = VAR_2;
 const enum imgu_abi_memories VAR_20 = VAR_1;
 unsigned int VAR_21;



 FUNC_3(VAR_11, 0, VAR_14->info.isp.sp.mem_initializers.params[VAR_19][VAR_20].size);



 VAR_16 = FUNC_2(VAR_8, VAR_9, VAR_10 && VAR_10->lin_vmem_params,
         &VAR_13->lin_vmem_params, VAR_12, VAR_11,
         VAR_20, &VAR_15->vmem.lin, sizeof(*VAR_16));
 if (!FUNC_1(VAR_16)) {

  for (VAR_21 = 0; VAR_21 < VAR_6; VAR_21++) {
   VAR_16->lin_lutlow_gr[VAR_21] = 32 * VAR_21;
   VAR_16->lin_lutlow_r[VAR_21] = 32 * VAR_21;
   VAR_16->lin_lutlow_b[VAR_21] = 32 * VAR_21;
   VAR_16->lin_lutlow_gb[VAR_21] = 32 * VAR_21;

   VAR_16->lin_lutdif_gr[VAR_21] = 32;
   VAR_16->lin_lutdif_r[VAR_21] = 32;
   VAR_16->lin_lutdif_b[VAR_21] = 32;
   VAR_16->lin_lutdif_gb[VAR_21] = 32;
  }
 }


 if (VAR_8->pipes[VAR_9].pipe_id == VAR_4) {
  VAR_17 = FUNC_2(VAR_8, VAR_9,
          VAR_10 && VAR_10->tnr3_vmem_params,
          &VAR_13->tnr3_vmem_params,
          VAR_12, VAR_11, VAR_20,
          &VAR_15->vmem.tnr3,
          sizeof(*VAR_17));
  if (!FUNC_1(VAR_17)) {

   for (VAR_21 = 0; VAR_21 < VAR_5; VAR_21++)
    VAR_17->sigma[VAR_21] = 256;
  }
 }
 VAR_21 = VAR_5;



 VAR_18 = FUNC_2(VAR_8, VAR_9, VAR_10 && VAR_10->xnr3_vmem_params,
         &VAR_13->xnr3_vmem_params, VAR_12, VAR_11,
         VAR_20, &VAR_15->vmem.xnr3, sizeof(*VAR_18));
 if (!FUNC_1(VAR_18)) {
  VAR_18->x[VAR_21] = VAR_7.x
   [VAR_21 % VAR_3];
  VAR_18->a[VAR_21] = VAR_7.a
   [VAR_21 % VAR_3];
  VAR_18->b[VAR_21] = VAR_7.b
   [VAR_21 % VAR_3];
  VAR_18->c[VAR_21] = VAR_7.c
   [VAR_21 % VAR_3];
 }

 return FUNC_0(VAR_16) || FUNC_0(VAR_17) || FUNC_0(VAR_18) ?
  -VAR_0 : 0;
}
