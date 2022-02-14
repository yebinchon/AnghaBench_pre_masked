
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpfe_hw_if_param {int if_type; int hdpol; int vdpol; } ;
struct TYPE_3__ {int hd_pol; int vd_pol; } ;
struct TYPE_4__ {int if_type; TYPE_1__ ycbcr; } ;


 int VAR_0 ;




 TYPE_2__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct vpfe_hw_if_param *VAR_2)
{
 VAR_1.if_type = VAR_2->if_type;

 switch (VAR_2->if_type) {
 case 131:
 case 129:
 case 128:
 case 130:
  VAR_1.ycbcr.vd_pol = VAR_2->vdpol;
  VAR_1.ycbcr.hd_pol = VAR_2->hdpol;
  break;
 default:

  return -VAR_0;
 }
 return 0;
}
