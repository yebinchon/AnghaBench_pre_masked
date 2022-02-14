
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct preview_update {int (* enable ) (struct isp_prev_device*,int) ;int (* config ) (struct isp_prev_device*,struct prev_params*) ;} ;
struct prev_params {unsigned int features; } ;
struct TYPE_2__ {struct prev_params* params; } ;
struct isp_prev_device {TYPE_1__ params; } ;


 unsigned int FUNC_0 (struct preview_update*) ;
 int FUNC_1 (struct isp_prev_device*,struct prev_params*) ;
 int FUNC_2 (struct isp_prev_device*,int) ;
 int FUNC_3 (struct isp_prev_device*,int) ;
 struct preview_update* VAR_0 ;

__attribute__((used)) static void FUNC_4(struct isp_prev_device *VAR_1, u32 VAR_2,
        u32 VAR_3)
{
 unsigned int VAR_4;

 if (VAR_2 == 0)
  return;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  const struct preview_update *VAR_5 = &VAR_0[VAR_4];
  struct prev_params *VAR_6;
  unsigned int VAR_7 = 1 << VAR_4;

  if (!(VAR_2 & VAR_7))
   continue;

  VAR_6 = &VAR_1->params.params[!(VAR_3 & VAR_7)];

  if (VAR_6->features & VAR_7) {
   if (VAR_5->config)
    VAR_5->config(VAR_1, VAR_6);
   if (VAR_5->enable)
    VAR_5->enable(VAR_1, 1);
  } else {
   if (VAR_5->enable)
    VAR_5->enable(VAR_1, 0);
  }
 }
}
