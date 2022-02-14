
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct imgu_fw_isp_parameter {scalar_t__ offset; scalar_t__ size; } ;
struct TYPE_10__ {TYPE_2__** params; } ;
struct TYPE_11__ {TYPE_3__ mem_initializers; } ;
struct TYPE_12__ {TYPE_4__ sp; } ;
struct TYPE_13__ {TYPE_5__ isp; } ;
struct imgu_fw_info {TYPE_6__ info; } ;
struct imgu_css {TYPE_1__* pipes; TYPE_7__* fwp; } ;
typedef enum imgu_abi_param_class { ____Placeholder_imgu_abi_param_class } imgu_abi_param_class ;
typedef enum imgu_abi_memories { ____Placeholder_imgu_abi_memories } imgu_abi_memories ;
struct TYPE_14__ {struct imgu_fw_info* binary_header; } ;
struct TYPE_9__ {scalar_t__ size; } ;
struct TYPE_8__ {size_t bindex; } ;


 int FUNC_0 (char*) ;

void *FUNC_1(struct imgu_css *VAR_0, unsigned int VAR_1,
      enum imgu_abi_param_class VAR_2,
      enum imgu_abi_memories VAR_3,
      struct imgu_fw_isp_parameter *VAR_4,
      size_t VAR_5, void *VAR_6)
{
 struct imgu_fw_info *VAR_7 =
  &VAR_0->fwp->binary_header[VAR_0->pipes[VAR_1].bindex];

 if (VAR_4->offset + VAR_4->size >
     VAR_7->info.isp.sp.mem_initializers.params[VAR_2][VAR_3].size)
  return ((void*)0);

 if (VAR_4->size != VAR_5)
  FUNC_0("parameter size doesn't match defined size\n");

 if (VAR_4->size < VAR_5)
  return ((void*)0);

 return VAR_6 + VAR_4->offset;
}
