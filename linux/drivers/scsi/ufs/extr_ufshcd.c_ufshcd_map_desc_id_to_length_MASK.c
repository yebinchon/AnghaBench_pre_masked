
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev_desc; int pwr_desc; int geom_desc; int conf_desc; int unit_desc; int interc_desc; int hlth_desc; } ;
struct ufs_hba {TYPE_1__ desc_size; } ;
typedef enum desc_idn { ____Placeholder_desc_idn } desc_idn ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct ufs_hba *VAR_2,
 enum desc_idn VAR_3, int *VAR_4)
{
 switch (VAR_3) {
 case 136:
  *VAR_4 = VAR_2->desc_size.dev_desc;
  break;
 case 132:
  *VAR_4 = VAR_2->desc_size.pwr_desc;
  break;
 case 135:
  *VAR_4 = VAR_2->desc_size.geom_desc;
  break;
 case 137:
  *VAR_4 = VAR_2->desc_size.conf_desc;
  break;
 case 128:
  *VAR_4 = VAR_2->desc_size.unit_desc;
  break;
 case 133:
  *VAR_4 = VAR_2->desc_size.interc_desc;
  break;
 case 129:
  *VAR_4 = VAR_1;
  break;
 case 134:
  *VAR_4 = VAR_2->desc_size.hlth_desc;
  break;
 case 131:
 case 130:
  *VAR_4 = 0;
  break;
 default:
  *VAR_4 = 0;
  return -VAR_0;
 }
 return 0;
}
