
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


typedef int u32 ;
struct TYPE_13__ {int config; int dma_input; int otf_input; int control; } ;
struct TYPE_11__ {int otf_output; int dma_input; int otf_input; int control; } ;
struct TYPE_9__ {int dma2_output; int dma1_output; int otf_output; int afc; int metering; int adjust; int iso; int effect; int awb; int flash; int aa; int dma2_input; int dma1_input; int otf_input; int control; } ;
struct is_param_region {TYPE_6__ fd; TYPE_4__ drc; TYPE_2__ isp; } ;
struct fimc_is {size_t config_index; struct chain_config* config; TYPE_1__* is_p_region; } ;
struct TYPE_14__ {int config; int dma_input; int otf_input; int control; } ;
struct TYPE_12__ {int otf_output; int dma_input; int otf_input; int control; } ;
struct TYPE_10__ {int dma2_output; int dma1_output; int otf_output; int afc; int metering; int adjust; int iso; int effect; int awb; int flash; int aa; int dma2_input; int dma1_input; int otf_input; int control; } ;
struct chain_config {TYPE_7__ fd; TYPE_5__ drc; TYPE_3__ isp; } ;
struct TYPE_8__ {struct is_param_region parameter; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

int FUNC_1(struct fimc_is *VAR_1, u32 VAR_2)
{
 struct is_param_region *VAR_3 = &VAR_1->is_p_region->parameter;
 struct chain_config *VAR_4 = &VAR_1->config[VAR_1->config_index];

 switch (VAR_2) {
 case 138:
  FUNC_0(&VAR_3->isp.control, &VAR_4->isp.control);
  break;

 case 129:
  FUNC_0(&VAR_3->isp.otf_input, &VAR_4->isp.otf_input);
  break;

 case 137:
  FUNC_0(&VAR_3->isp.dma1_input, &VAR_4->isp.dma1_input);
  break;

 case 135:
  FUNC_0(&VAR_3->isp.dma2_input, &VAR_4->isp.dma2_input);
  break;

 case 142:
  FUNC_0(&VAR_3->isp.aa, &VAR_4->isp.aa);
  break;

 case 133:
  FUNC_0(&VAR_3->isp.flash, &VAR_4->isp.flash);
  break;

 case 139:
  FUNC_0(&VAR_3->isp.awb, &VAR_4->isp.awb);
  break;

 case 132:
  FUNC_0(&VAR_3->isp.effect, &VAR_4->isp.effect);
  break;

 case 131:
  FUNC_0(&VAR_3->isp.iso, &VAR_4->isp.iso);
  break;

 case 141:
  FUNC_0(&VAR_3->isp.adjust, &VAR_4->isp.adjust);
  break;

 case 130:
  FUNC_0(&VAR_3->isp.metering, &VAR_4->isp.metering);
  break;

 case 140:
  FUNC_0(&VAR_3->isp.afc, &VAR_4->isp.afc);
  break;

 case 128:
  FUNC_0(&VAR_3->isp.otf_output, &VAR_4->isp.otf_output);
  break;

 case 136:
  FUNC_0(&VAR_3->isp.dma1_output, &VAR_4->isp.dma1_output);
  break;

 case 134:
  FUNC_0(&VAR_3->isp.dma2_output, &VAR_4->isp.dma2_output);
  break;

 case 150:
  FUNC_0(&VAR_3->drc.control, &VAR_4->drc.control);
  break;

 case 148:
  FUNC_0(&VAR_3->drc.otf_input, &VAR_4->drc.otf_input);
  break;

 case 149:
  FUNC_0(&VAR_3->drc.dma_input, &VAR_4->drc.dma_input);
  break;

 case 147:
  FUNC_0(&VAR_3->drc.otf_output, &VAR_4->drc.otf_output);
  break;

 case 145:
  FUNC_0(&VAR_3->fd.control, &VAR_4->fd.control);
  break;

 case 143:
  FUNC_0(&VAR_3->fd.otf_input, &VAR_4->fd.otf_input);
  break;

 case 144:
  FUNC_0(&VAR_3->fd.dma_input, &VAR_4->fd.dma_input);
  break;

 case 146:
  FUNC_0(&VAR_3->fd.config, &VAR_4->fd.config);
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
