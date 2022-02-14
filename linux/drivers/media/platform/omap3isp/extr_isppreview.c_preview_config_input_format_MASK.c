
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct prev_params {int dummy; } ;
struct TYPE_2__ {int cfa_order; int active; struct prev_params* params; } ;
struct isp_prev_device {TYPE_1__ params; } ;
struct isp_format_info {int width; int flavor; } ;
struct isp_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct isp_device*,int ,int ,int ) ;
 int FUNC_1 (struct isp_device*,int ,int ,int ,int ) ;
 int FUNC_2 (struct isp_device*,int ,int ,int ) ;
 int FUNC_3 (struct isp_prev_device*,struct prev_params*) ;
 struct isp_device* FUNC_4 (struct isp_prev_device*) ;

__attribute__((used)) static void FUNC_5(struct isp_prev_device *VAR_7,
     const struct isp_format_info *VAR_8)
{
 struct isp_device *VAR_9 = FUNC_4(VAR_7);
 struct prev_params *VAR_10;

 if (VAR_8->width == 8)
  FUNC_2(VAR_9, VAR_6, VAR_0,
       VAR_4);
 else
  FUNC_0(VAR_9, VAR_6, VAR_0,
       VAR_4);

 switch (VAR_8->flavor) {
 case 129:
  VAR_7->params.cfa_order = 0;
  break;
 case 128:
  VAR_7->params.cfa_order = 1;
  break;
 case 131:
  VAR_7->params.cfa_order = 2;
  break;
 case 130:
  VAR_7->params.cfa_order = 3;
  break;
 default:

  FUNC_0(VAR_9, VAR_6, VAR_0,
       VAR_1);
  return;
 }

 FUNC_2(VAR_9, VAR_6, VAR_0, VAR_1);
 FUNC_1(VAR_9, VAR_6, VAR_0,
   VAR_3, VAR_2);

 VAR_10 = (VAR_7->params.active & VAR_5)
        ? &VAR_7->params.params[0] : &VAR_7->params.params[1];

 FUNC_3(VAR_7, VAR_10);
}
