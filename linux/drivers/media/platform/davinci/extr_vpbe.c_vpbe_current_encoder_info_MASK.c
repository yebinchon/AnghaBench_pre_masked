
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpbe_device {int current_sd_index; struct vpbe_config* cfg; } ;
struct encoder_config_info {int dummy; } ;
struct vpbe_config {struct encoder_config_info* ext_encoders; struct encoder_config_info venc; } ;



__attribute__((used)) static struct encoder_config_info*
FUNC_0(struct vpbe_device *VAR_0)
{
 struct vpbe_config *VAR_1 = VAR_0->cfg;
 int VAR_2 = VAR_0->current_sd_index;

 return ((VAR_2 == 0) ? &VAR_1->venc :
    &VAR_1->ext_encoders[VAR_2-1]);
}
