
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct fman {TYPE_4__* fpm_regs; TYPE_3__* bmi_regs; TYPE_2__* qmi_regs; TYPE_1__* dma_regs; } ;
typedef enum fman_exceptions { ____Placeholder_fman_exceptions } fman_exceptions ;
struct TYPE_9__ {int fm_rie; int fmfp_ee; } ;
struct TYPE_8__ {int fmbm_ier; } ;
struct TYPE_7__ {int fmqm_eien; int fmqm_ien; } ;
struct TYPE_6__ {int fmdmmr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct fman *VAR_15,
    enum fman_exceptions VAR_16, bool VAR_17)
{
 u32 VAR_18;

 switch (VAR_16) {
 case 139:
  VAR_18 = FUNC_2(&VAR_15->dma_regs->fmdmmr);
  if (VAR_17)
   VAR_18 |= VAR_4;
  else
   VAR_18 &= ~VAR_4;

  FUNC_3(VAR_18, &VAR_15->dma_regs->fmdmmr);
  break;
 case 137:
 case 136:
 case 138:
  VAR_18 = FUNC_2(&VAR_15->dma_regs->fmdmmr);
  if (VAR_17)
   VAR_18 |= VAR_5;
  else
   VAR_18 &= ~VAR_5;
  FUNC_3(VAR_18, &VAR_15->dma_regs->fmdmmr);
  break;
 case 133:
  VAR_18 = FUNC_2(&VAR_15->fpm_regs->fmfp_ee);
  if (VAR_17)
   VAR_18 |= VAR_9;
  else
   VAR_18 &= ~VAR_9;
  FUNC_3(VAR_18, &VAR_15->fpm_regs->fmfp_ee);
  break;
 case 134:
  VAR_18 = FUNC_2(&VAR_15->fpm_regs->fmfp_ee);
  if (VAR_17)
   VAR_18 |= VAR_8;
  else
   VAR_18 &= ~VAR_8;
  FUNC_3(VAR_18, &VAR_15->fpm_regs->fmfp_ee);
  break;
 case 135:
  VAR_18 = FUNC_2(&VAR_15->fpm_regs->fmfp_ee);
  if (VAR_17)
   VAR_18 |= VAR_7;
  else
   VAR_18 &= ~VAR_7;
  FUNC_3(VAR_18, &VAR_15->fpm_regs->fmfp_ee);
  break;
 case 128:
  VAR_18 = FUNC_2(&VAR_15->qmi_regs->fmqm_ien);
  if (VAR_17)
   VAR_18 |= VAR_14;
  else
   VAR_18 &= ~VAR_14;
  FUNC_3(VAR_18, &VAR_15->qmi_regs->fmqm_ien);
  break;
 case 129:
  VAR_18 = FUNC_2(&VAR_15->qmi_regs->fmqm_eien);
  if (VAR_17)
   VAR_18 |= VAR_13;
  else
   VAR_18 &= ~VAR_13;
  FUNC_3(VAR_18, &VAR_15->qmi_regs->fmqm_eien);
  break;
 case 130:
  VAR_18 = FUNC_2(&VAR_15->qmi_regs->fmqm_eien);
  if (VAR_17)
   VAR_18 |= VAR_12;
  else
   VAR_18 &= ~VAR_12;
  FUNC_3(VAR_18, &VAR_15->qmi_regs->fmqm_eien);
  break;
 case 142:
  VAR_18 = FUNC_2(&VAR_15->bmi_regs->fmbm_ier);
  if (VAR_17)
   VAR_18 |= VAR_1;
  else
   VAR_18 &= ~VAR_1;
  FUNC_3(VAR_18, &VAR_15->bmi_regs->fmbm_ier);
  break;
 case 140:
  VAR_18 = FUNC_2(&VAR_15->bmi_regs->fmbm_ier);
  if (VAR_17)
   VAR_18 |= VAR_3;
  else
   VAR_18 &= ~VAR_3;
  FUNC_3(VAR_18, &VAR_15->bmi_regs->fmbm_ier);
  break;
 case 141:
  VAR_18 = FUNC_2(&VAR_15->bmi_regs->fmbm_ier);
  if (VAR_17)
   VAR_18 |= VAR_2;
  else
   VAR_18 &= ~VAR_2;
  FUNC_3(VAR_18, &VAR_15->bmi_regs->fmbm_ier);
  break;
 case 143:
  VAR_18 = FUNC_2(&VAR_15->bmi_regs->fmbm_ier);
  if (VAR_17)
   VAR_18 |= VAR_0;
  else
   VAR_18 &= ~VAR_0;
  FUNC_3(VAR_18, &VAR_15->bmi_regs->fmbm_ier);
  break;
 case 132:
  VAR_18 = FUNC_2(&VAR_15->fpm_regs->fm_rie);
  if (VAR_17) {

   FUNC_1(VAR_15->fpm_regs);

   VAR_18 |= VAR_10;
  } else {



   FUNC_0(VAR_15->fpm_regs);
   VAR_18 &= ~VAR_10;
  }
  FUNC_3(VAR_18, &VAR_15->fpm_regs->fm_rie);
  break;
 case 131:
  VAR_18 = FUNC_2(&VAR_15->fpm_regs->fm_rie);
  if (VAR_17) {

   FUNC_1(VAR_15->fpm_regs);

   VAR_18 |= VAR_11;
  } else {



   FUNC_0(VAR_15->fpm_regs);
   VAR_18 &= ~VAR_11;
  }
  FUNC_3(VAR_18, &VAR_15->fpm_regs->fm_rie);
  break;
 default:
  return -VAR_6;
 }
 return 0;
}
