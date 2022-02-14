
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vpfe_hw_if_param {int if_type; } ;
struct TYPE_4__ {int pix_fmt; } ;
struct TYPE_5__ {void* pix_order; int pix_fmt; } ;
struct TYPE_6__ {int if_type; int dev; TYPE_1__ bayer; TYPE_2__ ycbcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;






 int FUNC_0 (int ,char*) ;
 TYPE_3__ VAR_5 ;

__attribute__((used)) static int FUNC_1(struct vpfe_hw_if_param *VAR_6)
{
 VAR_5.if_type = VAR_6->if_type;

 switch (VAR_6->if_type) {
 case 132:
 case 131:
 case 128:
  VAR_5.ycbcr.pix_fmt = VAR_2;
  VAR_5.ycbcr.pix_order = VAR_3;
  break;
 case 133:
 case 129:
  VAR_5.ycbcr.pix_fmt = VAR_1;
  VAR_5.ycbcr.pix_order = VAR_3;
  break;
 case 130:
  VAR_5.bayer.pix_fmt = VAR_0;
  break;
 default:
  FUNC_0(VAR_5.dev, "Invalid interface type\n");
  return -VAR_4;
 }

 return 0;
}
